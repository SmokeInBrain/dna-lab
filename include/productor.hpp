#ifndef PRODUCTOR_HPP
#define PRODUCTOR_HPP

#include <uC++.h>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;

_Task Productor {
private:
  string input_name;
  ifstream input_file;
  string adn;
protected:
  void main();
public:
  Productor();
  Productor(string input_name);
  ~Productor(){};
  void openFile();
  string readLine();
  void closeFile();
};
#endif
