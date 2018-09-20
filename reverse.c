
#include <stdio.h>
#include <stdlib.h>
#include "file_utils.h"



/*******************************************************************************
* main method that allows us to run the program
* @param argc - integer of how many arguments there are
* @param argv - the name of the file to be manipulated
* @return int - the size of the file
*******************************************************************************/
int main(int argc, char** argv){

  char* file_contents;
  char* reverse_contents;

  int size = read_file(argv[0], &file_contents);
  int j = 0;
  // allocate memory for reverse_contents
  // copy file_contents to reverse_contents
  // backward.
  for(int i = size -1; i > -1; i--){
    //write_file(f, buffer[i]; sizeof(char));
    reverse_contents[j] = file_contents[i];
    j++;
  }

  // write reverse_contents with write_file
  write_file(argv[0], reverse_contents, size);

}
