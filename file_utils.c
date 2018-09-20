
#include <stdio.h>
#include <stdlib.h>


int read_file(char* filename, char **buffer){

  struct stat st;
  stat(filename, &st);
  int size = st.st_size;



  *buffer = malloc(50 * size);

  int i = 0;

  FILE *file;
  file = fopen(filename, "r");
  if (file) {
    while ((c = getc(file)) != EOF){
      buffer[i] = putchar(c);
      i = i +1;
    }
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


int write_file(char* filename, char *buffer, int size){

  struct stat st;
  stat(filename, &st);
  int size = st.st_size;

  FILE *file;
  file = fopen(filename, "w");

  while(c =getc(file) != EOF){
    fwrite(buffer, size, 1, file);
  }


















}
