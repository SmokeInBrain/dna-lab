#ifndef RECOGNIZER_HPP
#define RECOGNIZER_HPP

#include <uC++.h>
#include <string>
#include <iostream>
#include "../include/buffer.hpp"

using namespace std;

_Task Recognizer {
private:
  string input;
  string output;
  Buffer &buffer1;
  Buffer &buffer2;
protected:
  void main();
public:
  Recognizer(Buffer &buf1, Buffer &buf2);
  ~Recognizer(){};
  //METHODS
  void recognize();
};
#endif
