#include <iostream>
using namespace std;
struct Position
// BEGIN Vector OBJECT DEFINITION
{
  float x, y, z;
// x, y and z positions all floats
};

struct Player
{
  string name;
  int hp;
  Position position;
};


int main()
{
  Position v; // Create a Vector instance called v
  v.x=20, v.y=30.05f, v.z=40; // assign some values
  cout << "A 3-space vector at " << v.x << ", " << v.y << ", " << v.z << endl;

  Player me;
  me.name = "William";
  me.hp = 100.0f;
  me.position.x = me.position.y = me.position.z = 0;
  cout << "Player name: " << me.name << ", hp:" << me.hp << ", position x: " << me.position.x << endl;

  Player *ptrMe;
  ptrMe = &me;
  cout << "Me Pointer Player name: " << ptrMe->name << ", hp:" << ptrMe->hp << ", position x: " << ptrMe->position.x << endl;

  ptrMe->hp -= 33;
  // reduced the player's hp by 33
  ptrMe->name = "John";// changed his name to John
  cout << "------------------------------------------------------"<< endl;
  cout << "Player name: " << me.name << ", hp:" << me.hp << ", position x: " << me.position.x << endl;
  cout << "Me Pointer Player name: " << ptrMe->name << ", hp:" << ptrMe->hp << ", position x: " << ptrMe->position.x << endl;

  int x = 22;
  cout << &x << endl; // print the address of x
  int *px;
  px = &x;
  cout << *px << endl;

  // int *r = NULL;
  // cout << *r << endl;

}