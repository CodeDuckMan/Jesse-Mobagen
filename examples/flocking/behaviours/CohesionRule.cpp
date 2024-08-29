#include "CohesionRule.h"
#include "../gameobjects/Boid.h"

Vector2f CohesionRule::computeForce(const std::vector<Boid*>& neighborhood, Boid* boid) {
  Vector2f cohesionForce;

  // todo: add your code here to make a force towards the center of mass
  // hint: iterate over the neighborhood
  for (int i = 0; i < neighborhood.size(); i++)
  {
    // get posion of center of mass
    //
    if (neighborhood.at(i).get)
    {

    }
  }
  // find center of mass

  return cohesionForce;
}