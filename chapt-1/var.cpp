#include <iostream>
#include <string> // need this to use string variables!
using namespace std;

int main()
{
  string name;
  int goldPieces;
  float hp;
  name = "William"; // That's my name
  goldPieces = 322; // start with this much gold
  hp = 75.5f;
  // hit points are decimal valued
  cout << "Character " << name << " has " << hp << " hp and " << goldPieces << " gold.";
}