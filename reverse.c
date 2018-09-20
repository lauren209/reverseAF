
#include <stdio.h>
#include <stdlib.h>
#include "file_utils.h"

int main(int argc, char** argv){

  char* file_contents;
  char* reverse_contents;

  int size = read_file(argv[0], &file_contents);

  // allocate memory for reverse_contents
  // copy file_contents to reverse_contents
  // backward.
  for(int i = size -1; i > -1; i--;){
    //write_file(f, buffer[i]; sizeof(char));
  }

  // write reverse_contents with write_file

}
