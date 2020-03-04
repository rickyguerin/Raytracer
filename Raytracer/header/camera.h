#pragma once
#ifndef CAMERA_H
#define CAMERA_H

#include <string>
#include <glm/glm.hpp>
#include <glm/vec3.hpp>
#include "world.h"

class Camera {
private:
	// Orientation in world space
	glm::vec3 pos;
	glm::vec3 lookat;
	glm::vec3 up;

	// World -> Camera transformation matrix
	glm::mat4 matrix;

	// Field of view parameters
	float angle;
	float focalLength;

public:
	// Constructor
	Camera(const glm::vec3 & pos, const glm::vec3 & lookat, const glm::vec3 & up, const float angle, const float focalLength);

	// Use this camera to render an image of the World
	void render(const World & world, const std::string & filename, const float imageWidth, const float imageHeight, const float time) const;
};

#endif