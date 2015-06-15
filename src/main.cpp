#include <uC++.h>
#include "../include/getOptions.hpp"
#include "../include/productor.hpp"
#include "../include/recognizer.hpp"

using namespace std;

void uMain::main() {
  getOptions options = getOptions();
  options.GetOpt(argc, argv);
  string input = options.getInput();
  int buffer1 = options.getBuffer1();
  int tasks = options.getTasks();
  Productor *productor = new Productor(input, buffer1);
  string* buffer;
  buffer = productor->getBuffer1();
  //cout << buffer[1]<< endl;
  //for(int i=0; i<buffer1; i++){
  //  Recognizer *recognizer = new Recognizer(buffer[i]);
  //  delete recognizer;
  //}
  Recognizer recognizers[tasks];


  delete productor;
}
