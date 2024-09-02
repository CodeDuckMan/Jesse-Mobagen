#include "SeparationRule.h"
#include "../gameobjects/Boid.h"
#include "../gameobjects/World.h"
#include "engine/Engine.h"

Vector2f SeparationRule::computeForce(const std::vector<Boid*>& neighborhood, Boid* boid) {
  // Try to avoid boids too close
  Vector2f separatingForce = Vector2f::zero();

  //    float desiredDistance = desiredMinimalDistance;
  //
  //    // todo: implement a force that if neighbor(s) enter the radius, moves the boid away from it/them
  //    if (!neighborhood.empty()) {
  //        Vector2f position = boid->transform.position;
  //        int countCloseFlockmates = 0;
  //        // todo: find and apply force only on the closest mates
  //    }
  // calc all
  // sum the inverse
  /*
    2 variables
    1 radius and 1 is inner radius

    only apply force on the ones in the inner radius

    discard boids outside inner radius
    get all
    for all get every on that should be applied from the neighbor to

    neighbor position - boid position
    create unitary vector

    divide by magnitude

    1 minus other / mod
*/
      for(Boid* b : neighborhood)
      {
        // remove itself
        if(boid->getPosition() == b->getPosition()) {
          continue;
}

        Vector2f sepVec = boid->getPosition() - b->getPosition();
         float dist = sqrt((sepVec.x * sepVec.x) + (sepVec.y * sepVec.y));
        //
        if (dist < desiredMinimalDistance && dist > 0.01f)
        {
          sepVec = sepVec.normalized();
          float force = 1/dist;
          separatingForce += sepVec * force;
        }

      }



  //


  return separatingForce;
}

bool SeparationRule::drawImguiRuleExtra() {
  ImGui::SetCurrentContext(world->engine->window->imGuiContext);
  bool valusHasChanged = false;

  if (ImGui::DragFloat("Desired Separation", &desiredMinimalDistance, 0.05f)) {
    valusHasChanged = true;
  }

  return valusHasChanged;
}
