#ifndef GETOPTIONS_H_INCLUDED
#define GETOPTIONS_H_INCLUDED

#include <uC++.h>
#include <iostream>
#include <getopt.h>
#include <string>

using namespace std;

class getOptions
{
private:
	string input;
  string output;
  int tasks;
  int buffer1;
  int buffer2;
public:
	getOptions();
	//GETTERS
	string getInput();
	string getOutput();
	int getTasks();
	int getBuffer1();
  int getBuffer2();
  //SETTERS
	void setInput(string input);
	void setOutput(string output);
	void setTasks(int tasks);
	void setBuffer1(int buffer1);
  void setBuffer2(int buffer2);
	//Methods
	void help_printing();
	void GetOpt(int argc, char **argv);

};

#endif // GETOPTIONS_H_INCLUDED
