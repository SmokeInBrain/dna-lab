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

string Recognizer::recognize(){
  string out = "";
  string input = this->input;
  int state = 0;
  for(int i=0; i<input.length();i++){
    char c = input[i];
    switch(state){
      case(0):{
        if(c=='A'){
          state=1;
        }else if(c=='C'){
          state=2;
        }else if(c=='G'){
          state=3;
        }else if(c=='T'){
          state=4;
        }
      }
      break;
      case(1):{
        if(c=='A'){
          state=1;
        }else if(c=='C'){
          state=2;
        }else if(c=='G'){
          state=3;
        }else if(c=='T'){
          state=4;
        }
      }
      break;
      case(2):{
        if(c=='A'){
          state=1;
        }else if(c=='C'){
          state=2;
        }else if(c=='G'){
          state=3;
        }else if(c=='T'){
          state=4;
        }
      }
      break;
      case(3):{
        if(c=='A'){
          state=1;
        }else if(c=='C'){
          state=2;
        }else if(c=='G'){
          state=3;
        }else if(c=='T'){
          state=5;
        }
      }
      break;
      case(4):{
        if(c=='A'){
          state=1;
        }else if(c=='C'){
          state=2;
        }else if(c=='G'){
          state=3;
        }else if(c=='T'){
          state=4;
        }
      }
      break;
      case(5):{
        if(c=='A'){
          state=1;
        }else if(c=='C'){
          state=6;
        }else if(c=='G'){
          state=3;
        }else if(c=='T'){
          state=5;
        }
      }
      break;
      case(6):{
        if(c=='A'){
          state=7;
        }else if(c=='C'){
          state=8;
        }else if(c=='G'){
          state=9;
        }else if(c=='T'){
          state=10;
        }
      }
      break;
      case(7):{
        if(c=='A'){
          state=7;
        }else if(c=='C'){
          state=8;
        }else if(c=='G'){
          state=9;
        }else if(c=='T'){
          state=11;
        }
      }
      break;
      case(8):{
        if(c=='A'){
          state=7;
        }else if(c=='C'){
          state=8;
        }else if(c=='G'){
          state=9;
        }else if(c=='T'){
          state=11;
        }
      }
      break;
      case(9):{
        if(c=='A'){
          state=7;
        }else if(c=='C'){
          state=8;
        }else if(c=='G'){
          state=9;
        }else if(c=='T'){
          state=12;
        }
      }
      break;
      case(10):{
        if(c=='A'){
          state=7;
        }else if(c=='C'){
          state=8;
        }else if(c=='G'){
          state=9;
        }else if(c=='T'){
          state=10;
        }
      }
      break;
      case(11):{
        if(c=='A'){
          state=7;
        }else if(c=='C'){
          state=8;
        }else if(c=='G'){
          state=9;
        }else if(c=='T'){
          state=11;
        }
      }
      break;
      case(12):{
        if(c=='A'){
          state=7;
        }else if(c=='C'){
          state=13;
        }else if(c=='G'){
          state=9;
        }else if(c=='T'){
          state=12;
        }
      }
      break;
      case(13):{
        if(c=='A'){
          state=7;
        }else if(c=='C'){
          state=8;
        }else if(c=='G'){
          state=9;
        }else if(c=='T'){
          state=14;
        }
      }
      break;
      case(14):{
        if(c=='A'){
          state=7;
        }else if(c=='C'){
          state=8;
        }else if(c=='G'){
          state=9;
        }else if(c=='T'){
          state=14;
        }
      }
      break;
    }
  }
  

  if(state==6 || state==7 || state==8 || state==9 || state==10 || state==11 || state==12 || state==13 || state==14){
    out = "si";
  }else{
    out = "no";
  }
  this->output = this->input + " "+ out;
  cout << this->output<< endl;
  return this-> output;

}
