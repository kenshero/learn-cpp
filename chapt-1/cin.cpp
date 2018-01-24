#include <iostream>
#include <string>
using namespace std;
int main()
{
  string name;
  int age;
  cout << "Name?" << endl;
  cin >> name;
  cout << "Age?" << endl;
  cin >> age;
  cout << "Hello " << name << " I see you have attained " << age << " years. Congratulations." << endl;
}