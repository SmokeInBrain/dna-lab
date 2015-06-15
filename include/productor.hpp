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
  string input;
  int buffer1;
  string* buffer;
protected:
  void main();
public:
  Productor();
  Productor(string input, int buffer1);
  ~Productor(){
    delete[] buffer;
  };
  //GETTERS
  string* getBuffer1();
  //METHODS
  void readFile();
};
#endif
