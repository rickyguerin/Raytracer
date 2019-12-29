#include <glm/vec3.hpp>

class Sphere {
private:
	glm::vec3 pos;
	float radius;

public:
	Sphere(glm::vec3 pos, float radius) {
		this->pos = pos;
		this->radius = radius;
	}

	glm::vec3 getPos() {
		return pos;
	}

	float getRadius() {
		return radius;
	}
};