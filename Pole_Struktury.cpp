#include <iostream>
#include <string>
using std::cout;using std::endl;using std::string;

struct TClovek{
    string jmeno;
    string prijmeni;
    int vek{};
};

int poleStruktury() {

  TClovek clovek;
  clovek.jmeno = "Karel";
  clovek.prijmeni = "Mozdren";
  clovek.vek = 22;

  cout  << clovek.jmeno << " "
        << clovek.prijmeni << " "
        << clovek.vek <<  endl;

  int pole[3];

  pole [0] = 1;
  pole [1] = 2;
  pole [2] = 3;

  cout  << pole[0] << "\n"
        << pole[1] << "\n"
        << pole[2] << endl;

  return 0;
}