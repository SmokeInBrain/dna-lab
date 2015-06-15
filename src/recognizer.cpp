#include "../include/recognizer.hpp"

Recognizer::Recognizer(){
  this->input = "";
  this->output= "";
}

Recognizer::Recognizer(string input){
  this->input = input;
  this->output = "";
}

string Recognizer::getInput(){
  return this->input;
}

string Recognizer::getOutput(){
  return this->output;
}

void Recognizer::setInput(string input){
  this->input = input;
}

void Recognizer::setOutput(string output){
  this->output = output;
}

void Recognizer::main(){
  recognize();
}

void Recognizer::recognize(){
  string out = "";
  int reti;
  string find_text;
  regex regex_text("(A+C+G+T)*GT+CT*(A+C+G+T)*");
  find_text = this->input;
  if(regex_match(find_text, regex_text)==1){
    out = "si";
  }else{
    out = "no";
  }


  this->output = this->input + " "+ out;
  cout << this->output<< endl;

}
