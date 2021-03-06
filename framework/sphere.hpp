#ifndef SPHERE_HPP
#define SPHERE_HPP
#include <glm/vec3.hpp>
#define _USE_MATH_DEFINES
#include <math.h>
#include "shape.hpp"
#include <color.hpp>

class Sphere : public Shape {
	glm::vec3 center_;
	float radius_;

public:

	Sphere(glm::vec3& center, float radius, std::string name, Material material);

	~Sphere();

	float area();
	float volume();
	glm::vec3 getCenter();
	void setCenter(glm::vec3 c);
	float getRadius();
	void setRadius(float r);
	std::ostream& print(std::ostream& os) const override;
	HitPoint intersect(Ray const& r) const override;

};
#endif
