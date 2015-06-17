#ifndef PRODUCTOR_HPP
#define PRODUCTOR_HPP

#include <uC++.h>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include "../include/buffer.hpp"


using namespace std;

_Task Productor {
private:
  string input_name;
  ifstream input_file;
  string adn;
  bool end;
  Buffer &buffer;
protected:
  void main();
public:
  Productor(string input_name, Buffer &buf);
  ~Productor(){
    this->input_file.close();
  };
  bool getEnd();
  void openFile();
  void readLine();
};
#endif
