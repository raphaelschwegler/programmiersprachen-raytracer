#ifndef RAY_HPP_
#define RAY_HPP_


struct Ray
{
	glm::vec3 origin = { 0.0f, 0.0f, 0.0f };
	glm::vec3 direction = { 0.0f, 0.0f, -1.0f };
};

#endif