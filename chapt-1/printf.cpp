#include <iostream>
#include <string>
using namespace std;
int main()
{
  char character = 'A';
  int integer = 1;
  printf( "integer %d, character %c\n", integer, character );

  string s = "Hello";
  printf( "string %s\n", s.c_str() );
}