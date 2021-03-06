
#ifndef HIT_POINT_HPP_
#define HIT_POINT_HPP_


#include <iostream>
#include <glm/vec3.hpp>
#include <color.hpp>
#include <material.hpp>


struct HitPoint {
	bool hashit = false;
	double distance = LONG_MAX;
	std::string name = "";
	Material material = {{ 0.0f , 0.0f , 0.0f },
	{ 0.0f , 0.0f , 0.0f },
	{ 0.0f , 0.0f , 0.0f },
	{ 10.0f } };
	glm::vec3 intersection = { LONG_MAX, LONG_MAX, LONG_MAX };
	glm::vec3 direction = { 0.0f, 0.0f, -1.0f };
	glm::vec3 normal = { 0.0f, 0.0f, -1.0f };
};

#endif