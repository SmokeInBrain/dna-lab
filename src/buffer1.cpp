#include "../include/buffer1.hpp"

Buffer1::Buffer1(){
  this->front = 0;
  this->back = 0;
  this->count = 0;
  this->buffer1=0;
  this->elements = NULL;
}

Buffer1::Buffer1(int buffer1){
  this->front = 0;
  this->back = 0;
  this->count = 0;
  this->buffer1=buffer1;
  this->elements = new string[this->buffer1];
}

_Nomutex int Buffer1::query(){
  return count;
}

void Buffer1::push(string element){
  //cout<<buffer1<<endl;
  if(this->count==this->buffer1){
    _Accept(remove);
  }
  //cout<<this->back<<endl;
  this->elements[this->back]=element;
  this->back = (this->back+1)%this->buffer1;
  this->count+=1;
  //cout<<"Llego aca"<<endl;
}

string Buffer1::pull(){
  if(this->count==0){
    _Accept(insert);
  }
  string element = this->elements[this->front];
  this->front=(this->front+1)%this->buffer1;
  this->count -= 1;
  return element;
}
