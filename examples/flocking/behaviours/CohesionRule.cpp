#include "CohesionRule.h"
#include "../gameobjects/Boid.h"

Vector2f CohesionRule::computeForce(const std::vector<Boid*>& neighborhood, Boid* boid) {
  Vector2f cohesionForce;

  // todo: add your code here to make a force towards the center of mass
  // hint: iterate over the neighborhood
  Vector2f centerMassPoint;

  for (const auto *iter : neighborhood)
  {
  centerMassPoint+=(iter->getPosition());
  }

  cohesionForce += centerMassPoint.normalized();
  // find center of mass

  return cohesionForce;
}