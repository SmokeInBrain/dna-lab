#include "../include/productor.hpp"

Productor::Productor(){
  this->input_name = "";
  this->adn = "";
  //this->input_file = 0;
}

Productor::Productor(string input_name){
  this->input_name = input_name;
  this->adn = "";
  //this->input_file = 0;
}
void Productor::main(){
  openFile();
}

void Productor::openFile(){
  this->input_file.open(this->input_name.c_str());
}
string Productor::readLine(){ 
  string file_line;
  getline(this->input_file, file_line);
  this->adn=file_line;
  return this->adn;
}
void Productor::closeFile(){
  this->input_file.close();
}
