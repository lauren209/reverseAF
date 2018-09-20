
#include <stdio.h>
#include <stdlib.h>


/*******************************************************************************
* general method for reading a file, will be able to use in any program
* @param filename - a pointer that points to a file name
* @param buffer - a double pointer that is able to be used through whole program
* @return int - value to express the size of the file
*******************************************************************************/
int read_file(char* filename, char **buffer){

  struct stat st;
  stat(filename, &st);
  int size = st.st_size;



  *buffer = malloc(50 * size);

  int i = 0;

  FILE *file;
  file = fopen(filename, "r");
  if (file) {
    // while ((c = getc(file)) != EOF){
      fread(buffer, size, 1, file);
    // }
    // Use fread
    fclose(file);
  }

  return size;
 // printf("%s\n", );

  // stuff up top will figure out dile file
  // after we need to make taht much memory
  // malloc the amount of bites
    // gives holding area
// must use gcc
}

/*******************************************************************************
* general method to write to any file which is able to be used in any program
* @param filename - pointer to the filename
* @param buffer - a pointer that points to the characters going into file
* @param size - the size of the file
* @return int - the size of the file written to
*******************************************************************************/
int write_file(char* filename, char *buffer, int size){

  // struct stat st;
  // stat(filename, &st);
  // int size = st.st_size;

  FILE *file;
  file = fopen(filename, "w");

  // while(c =getc(file) != EOF){
    fwrite(buffer, size, 1, file);
  // }








}
