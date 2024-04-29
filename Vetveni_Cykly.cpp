#include <iostream>
#include <string>

using std::cout;using std::endl;using std::string;using std::to_string;

string ahoj = "ahoj";
int pole[100];

void vetveniCykly() {
  for (int i = 0; i < 100; i++)
    cout << to_string(i+1) + " " + ahoj << " " << endl;

  for (int i = 0; i < 100; i++)
   pole[i] = i;

  for (int i : pole)
    cout << to_string(pole[i]) + "\n";
}