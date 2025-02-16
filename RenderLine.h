
#include "GameObject.h"
#include <vector>

class RenderLine
{
	class MyVector;
public:

	physics::MyVector P1;
	physics::MyVector P2;
	glm::mat4 ProjectionMatrix;
	glm::mat4 ViewMatrix;

	glm::vec4 Color;

	RenderLine(physics::MyVector p1, physics::MyVector p2, glm::vec4 color)
		: P1(p1), P2(p2), Color(color) {}

	void Update(physics::MyVector p1, physics::MyVector p2, glm::mat4 projectionMatrix, glm::mat4 viewMatrix);

	void Draw();
};