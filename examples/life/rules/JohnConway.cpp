#include "JohnConway.h"

#include <iostream>
#include <ostream>

// Reference: https://playgameoflife.com/info
void JohnConway::Step(World& world) {
  // todo: implement
  for(int i = - world.SideSize()/2; i <= world.SideSize()/2; i++) {
    for(int j = - world.SideSize()/2; j <= world.SideSize()/2; j++) {

      bool isAlive = world.Get({i,j});
      int neighbours = CountNeighbors(world, {i,j});


      std::cout << "point (" << i << ", " << j << ") has [" << neighbours << "] neighbors" << std::endl;

      if(isAlive) {
        if(neighbours < 2) {
        world.SetNext({i,j}, false);
        }

        else if(neighbours == 2 || neighbours == 3) {
          world.SetNext({i,j}, true);
        }

        else if(neighbours > 3) {
          world.SetNext({i,j}, false);
        }
      }
      else {
        if(neighbours == 3) {
          world.SetNext({i,j}, true);
        }
      }
    }
  }

}

int JohnConway::CountNeighbors(World& world, Point2D point) {
  // todo: implement

  int count = 0;

  for(int x=-1; x<=1; x++) {
    for(int y=-1; y<=1;y++) {
      Point2D p = point + Point2D(x, y);

      // check if point is itself
      if(p != point) {
      count += static_cast<int>(world.Get(p));
      }
    }
  }
  return count;
}
