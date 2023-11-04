#pragma once

#include <string>
#include <glm/glm.hpp>
#include <glm/gtc/constants.hpp>
#include <glm/gtc/random.hpp>
#include <glm/gtx/norm.hpp>

#define RENDERTOY_FUNC_ARGUMENT_OUT &

template <typename T>
T RENDERTOY_DISCARD_VARIABLE;

#define BUILD_NUMBER 708
#define BUILD_DATE "2023-11-04+23:37:06"

#define CLASS_METADATA_MARK(classname)                              \
public:                                                             \
    virtual const char *GetClassName() const { return #classname; } \
                                                                    \
private:

#define MATERIAL_SOCKET(name, isamplable_type)                       \
protected:                                                           \
    std::shared_ptr<ISamplable##isamplable_type> _##name;            \
                                                                     \
public:                                                              \
    const std::shared_ptr<ISamplable##isamplable_type> &name() const \
    {                                                                \
        return _##name;                                              \
    }                                                                \
    std::shared_ptr<ISamplable##isamplable_type> &name()             \
    {                                                                \
        return _##name;                                              \
    }                                                                \
                                                                     \
private:

#define ONE_MINUS_EPSILON float(0x1.fffffep-1)

#define FUNDAMENTAL_PRIMITIVE 0x01
#define COMBINED_PRIMITIVE 0x02

namespace rendertoy
{
    // Forward declarations
    class AliasTable;
    class Camera;
    class Emissive;
    class Image;
    class IMaterial;
    struct IntersectInfo;
    template <typename T = glm::vec4>
    class ISamplable;
    typedef ISamplable<glm::vec4> ISamplableColor;
    typedef ISamplable<float> ISamplableNumerical;
    class Light;
    class LightSampler;
    class Primitive;
    class Scene;
    class SurfaceLight;
    class TriangleMesh;
}
