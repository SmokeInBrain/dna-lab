#include "../include/getOptions.hpp"

getOptions::getOptions() {
  this->input = "";
  this->output = "";
  this->tasks = 0;
  this->buffer1 = 10;
  this->buffer2 = 10;
}

//GETTERS
string getOptions::getInput(){
  return this-> input;
}

string getOptions::getOutput(){
  return this->output;
}

int getOptions::getTasks(){
  return this->tasks;
}

int getOptions::getBuffer1(){
  return this->buffer1;
}

int getOptions::getBuffer2(){
  return this->buffer2;
}

//SETTERS
void getOptions::setInput(string input){
  this->input=input;
}

void getOptions::setOutput(string output){
  this->output=output;
}

void getOptions::setTasks(int tasks){
  this->tasks=tasks;
}

void getOptions::setBuffer1(int buffer1){
  this->buffer1=buffer1;
}

void getOptions::setBuffer2(int buffer2){
  this->buffer2=buffer2;
}

void getOptions::help_printing ()
{
    cout << "Example: executable_name options [ arguments ...]\n" << endl;
    cout << "    -h  --help                  Shows this help\n" << endl;
    cout << "    -i  --input      	Name of the input file\n" << endl;
    cout << "    -o  --output           Name of the output file\n" << endl;
    cout << "    -t  --tasks           Number of tasks\n" << endl;
    cout << "    -L  --buffer1              Large of the buffer 1\n" << endl;
    cout << "    -l  --buffer2              Large of the buffer 2\n" << endl;
}

void getOptions::GetOpt(int argc, char **argv){
	int next_opt;
	const char* const short_op = "hi:o:t:L:l:" ;
	const struct option long_op[] =
  	{
  	  { "help", 0, NULL, 'h'},
      { "input", 1,  NULL,   'i'},
      { "output", 1,  NULL,   'o'},
      { "tasks", 1,  NULL,   't'},
      {	"buffer1", 0, 	NULL, 	'L'},
      {	"buffer2", 0, 	NULL, 	'l'},
      { NULL, 0,  NULL,   0  }
 	 };

  	if(argc==1){
  		cout <<"ERROR. THE PROGRAM HAS BEEN EXECUTED WITHOUT PARAMETERS OR OPTIONS"<<endl;
  		help_printing();
  		exit(EXIT_SUCCESS);
  	}

  	while(1){
  		next_opt = getopt_long(argc, argv, short_op, long_op, NULL);
  		if(next_opt==-1){
  			break;
  		}
  		switch(next_opt){
  			case 'h':
  				help_printing();
  				exit(EXIT_SUCCESS);
  			case 'i':
  				this->input = optarg;
  				break;
  			case 'o':
  				this->output = optarg;
  				break;
  			case 't':
  				this->tasks = atoi(optarg);
  				break;
  			case 'L':
  				this->buffer1 = atoi(optarg);
  				break;
        case 'l':
    			this->buffer2 = atoi(optarg);
    			break;
  			case '?':
  				help_printing();
  				exit(1);
  			case -1 :
  				break;
  			default:
  				abort();
  		}
  	}
}
