#include "../include/productor.hpp"

Productor::Productor(){
  this->input = "";
  this->buffer1 = 0;
  this->buffer = NULL;
}

Productor::Productor(string input, int buffer1){
  this->input = input;
  this->buffer1 = buffer1;
  this->buffer = NULL;

}

string* Productor::getBuffer1(){
  return this->buffer;
}

void Productor::main(){
  //cout<<this->buffer1<<endl;
  this->buffer = new string[this->buffer1];
  readFile();
}

void Productor::readFile(){
  string line;
  ifstream infile;
  //cout<<this->input<<endl;
  infile.open(this->input.c_str());
  int i=0;
  while(getline(infile, line)){
    //istringstream iss(line);
    //cout<<i<<" "<<line<< endl;
    this->buffer[i]=line;
    i=i+1;
  }
  //cout<< i<<endl;
  infile.close();
}
