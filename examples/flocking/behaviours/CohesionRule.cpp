#include "CohesionRule.h"
#include "../gameobjects/Boid.h"

Vector2f CohesionRule::computeForce(const std::vector<Boid*>& neighborhood, Boid* boid) {

  // todo: add your code here to make a force towards the center of mass
  // hint: iterate over the neighborhood
  Vector2f centerMassPoint = boid->getPosition();

  // find center of mass
  for (const auto *iter : neighborhood)
  {
  centerMassPoint+=(iter->getPosition());
  }



  if(neighborhood.size() > 1)
    centerMassPoint = centerMassPoint/(neighborhood.size()+1) ;

  centerMassPoint -= boid->getPosition();

  return centerMassPoint.normalized();
}