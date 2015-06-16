#ifndef BUFFER1_HPP
#define BUFFER1_HPP

#include <uC++.h>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;

_Monitor Buffer1{
private:
  int front, back, count, buffer1;
  string* elements;
public:
  Buffer1();
  Buffer1(int buffer1);
  ~Buffer1(){
  	delete [] elements;
  };
  _Nomutex int query();
  void push(string element);
  string pull();
};
#endif