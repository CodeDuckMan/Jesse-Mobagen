#ifndef MOBAGEN_JOHNCONWAY_H
#define MOBAGEN_JOHNCONWAY_H
#include "../RuleBase.h"

class JohnConway : public RuleBase {
public:
  explicit JohnConway() = default;
  ~JohnConway() override = default;
  std::string GetName() override { return "JohnConway"; }
  void Step(World& world) override;
  int CountNeighbors(World& world, Point2D point);
  GameOfLifeTileSetEnum GetTileSet() override { return GameOfLifeTileSetEnum::Square; };
};

/*
*#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
int x, y, steps;
cin >> x >> y >> steps;

string line;
getline(cin, line); // ignore next line

char* state; // matrix linearization;
char* nextState;
state = new char[y*x];
nextState = new char[y*x];

for(int j=0; j<y; j++) {
  getline(cin, line);
  for(int i=0; i<x;i++)
    state[j*x + i] = line[i];
}

}
 *
 */
#endif  // MOBAGEN_JOHNCONWAY_H
