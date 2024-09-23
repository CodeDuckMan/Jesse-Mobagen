#include <iostream>
#include <stack>
#include <vector>

using namespace std;

struct Point2D {
  int x, y;
};

int sizeX, sizeY;

// board of visited
// in this case, no need for hash tables
vector<bool> board = vector<bool>(sizeX*sizeY, false);

// came from
stack<Point2D> backtrack_path;
// walls


int main() {
  //bootstrap case is the first element that is visited
  backtrack_path.push(Point2D{0, 0});

  while(!backtrack_path.empty()) { // create check for the

    // check if there is neighbors to visit in the board
    // check if the candidate is not in the queue
  bool neighborCheck = false;
    if(neighborCheck) {
      // randomly select a neighbor
      // add it to the stack
      // breack wall between the current and the slected neigbor
      // continue
    }
    else {
      //backtrack
      backtrack_path.pop();

    }



  }

  return 0;
}
