#include "../include/productor.hpp"

Productor::Productor(string input_name, Buffer &buf):buffer(buf){
  this->input_name = input_name;
  this->adn = "";
  this->end = false;
  //this->buffer = buf;
  //this->input_file = 0;
}
void Productor::main(){
  openFile();
  while(1){
    readLine();
  }
}

void Productor::openFile(){
  this->input_file.open(this->input_name.c_str());
}

bool Productor::getEnd(){
  return this->end;
}
void Productor::readLine(){
  string file_line;
  if(getline(this->input_file, file_line)){
    this->adn=file_line;
    buffer.push(this->adn);
    //cout<<this->adn<<endl;
  }else{
    this->end=true;
  }
}
