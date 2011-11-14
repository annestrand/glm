///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2011-01-15
// Updated : 2011-11-14
// Licence : This source is under MIT licence
// File    : test/gtx/func_geometric.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/glm.hpp>

int test_reflect()
{
	int Error = 0;

	{
		glm::vec2 A(1.0f, 0.0f);
		glm::vec2 B(0.0f, 1.0f);
		glm::vec2 C = glm::reflect(A, B);
		Error += C == glm::vec2(-1.0, 0.0) ? 0 : 1;
	}

	{
		glm::dvec2 A(1.0f, 0.0f);
		glm::dvec2 B(0.0f, 1.0f);
		glm::dvec2 C = glm::reflect(A, B);
		Error += C == glm::dvec2(-1.0, 0.0) ? 0 : 1;
	}

	return Error;
}

int test_refract()
{
	int Error = 0;

	{
		glm::vec2 A(1.0f, 0.0f);
		glm::vec2 B(0.0f, 1.0f);
		glm::vec2 C = glm::reflect(A, B);
		Error += C == glm::vec2(-1.0, 0.0) ? 0 : 1;
	}

	{
		glm::dvec2 A(1.0f, 0.0f);
		glm::dvec2 B(0.0f, 1.0f);
		glm::dvec2 C = glm::reflect(A, B);
		Error += C == glm::dvec2(-1.0, 0.0) ? 0 : 1;
	}

	return Error;
}

int main()
{
	int Error(0);

	Error += test_reflect();
	Error += test_refract();

	return Error;
}

