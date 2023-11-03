#pragma once

#include "rendertoy_internal.h"

namespace rendertoy
{
    class Camera
    {
    private:
        glm::vec3 _origin;
        glm::mat3 _rotation;
        glm::float32 _fov;
        glm::float32 _aspect_ratio;
    
    public:
        Camera() = delete;
        Camera(const glm::vec3 &origin, const glm::mat3 &rotation, const glm::float32 fov, const glm::float32 aspect_ratio);
        Camera(const glm::vec3 &eye, const glm::vec3 &center, const glm::vec3 &up, const glm::float32 fov, const glm::float32 aspect_ratio);
        void SpawnRay(glm::vec2 coord, glm::vec3 RENDERTOY_FUNC_ARGUMENT_OUT origin, glm::vec3 RENDERTOY_FUNC_ARGUMENT_OUT direction) const;
        void LookAt(const glm::vec3 &eye, const glm::vec3 &center, const glm::vec3 &up);
    };
}