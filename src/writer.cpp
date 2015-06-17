#include "../include/writer.hpp"


Writer::Writer(string output_name, Buffer &buf):buffer(buf){
  this->output_name = output_name;
  //this->input_file = 0;
}
void Writer::main(){
  openFile();
  while(1){
    writeLine();
  }
}

void Writer::openFile(){
  this->output_file.open(this->output_name.c_str(), ios::out);
}

/*bool Productor::getEnd(){
  return this->end;
}*/

void Writer::writeLine(){
  string adn = buffer.pull();
  //cout <<"Se escribe "<<adn<<endl;
  this->output_file << adn << endl;
}
