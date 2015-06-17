#ifndef WRITER_HPP
#define WRITER_HPP

#include <uC++.h>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include "../include/buffer.hpp"

using namespace std;

_Task Writer {
private:
  string output_name;
  ofstream output_file;
  Buffer &buffer;
protected:
  void main();
public:
  Writer(string input_name, Buffer &buf);
  ~Writer(){
    this->output_file.close();
  };
  void openFile();
  void writeLine();
};
#endif
