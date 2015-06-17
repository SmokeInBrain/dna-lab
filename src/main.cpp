#include <uC++.h>
#include "../include/getOptions.hpp"
#include "../include/productor.hpp"
#include "../include/recognizer.hpp"
#include "../include/buffer.hpp"
#include "../include/writer.hpp"

using namespace std;

void uMain::main() {
  getOptions options = getOptions();
  options.GetOpt(argc, argv);
  string input = options.getInput();
  string output = options.getOutput();
  int buffer1num = options.getBuffer1();
  int buffer2num = options.getBuffer2();
  int tasks = options.getTasks();
  Buffer buffer1(buffer1num);
  Buffer buffer2(buffer2num);
  Productor productor(input, buffer1);
  Recognizer *recognizers[tasks];
  for (int i = 0;  i < tasks; i++) {
    recognizers[i] = new Recognizer(buffer1, buffer2);
  }
  Writer writer(output, buffer2);

  for (int i = 0;  i < tasks; i++) {
    delete recognizers[i];
  }


}
