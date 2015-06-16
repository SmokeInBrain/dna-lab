#ifndef RECOGNIZER_HPP
#define RECOGNIZER_HPP

#include <uC++.h>
#include <string>
#include <iostream>
#include <regex>

using namespace std;

_Task Recognizer {
private:
  string input;
  string output;
protected:
  void main();
public:
  Recognizer();
  Recognizer(string input);
  ~Recognizer(){};
  //GETTERS
  string getInput();
  string getOutput();
  //SETTERS
  void setInput(string input);
  void setOutput(string output);
  //METHODS
  string recognize();
};
#endif
