#include "Chain.h"

/*

Chain - Same as bungee but instead of going
past the end, it stops it like a chain would.

*/

using namespace physics;

void Chain::UpdateForce(PhysicsParticle* particle, float deltaTime)
{
	//Get the current position of the particle
	MyVector pos = particle->Position;

	//Create a vector Pos -> Anchor Point
	MyVector delta = anchorPoint - pos;

	//Get the magnitude of the vector above
	float mag = delta.Magnitude();

	//Get the direction from the particle to the anchor point
	if (mag >= restLength) {
		auto dot = (particle->Velocity).DotProd(delta.direction());
		auto velocityChange = delta.direction().ScalarMultiplication(-dot);

		particle->Velocity += velocityChange;
	}
}
