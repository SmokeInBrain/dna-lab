#include "../include/recognizer.hpp"

Recognizer::Recognizer(Buffer &buf1, Buffer &buf2):buffer1(buf1), buffer2(buf2){}


void Recognizer::main(){
  while(1){
    recognize();
  }
}

void Recognizer::recognize(){
  string input = buffer1.pull();
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

  string out = "";
  if(state==6 || state==7 || state==8 || state==9 || state==10 || state==11 || state==12 || state==13 || state==14){
    out = "si";
  }else{
    out = "no";
  }
  string result = "";
  result = input + " "+ out;
  //cout <<"Se reconoce "<< result<< endl;
  buffer2.push(result);
  //return result;
}
