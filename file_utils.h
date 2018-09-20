
#ifndef FILE_UTILS
#define FILE_UTILS


/*******************************************************************************
* setting up the read file method to be written in the c file
* @param filename - a pointer that points to a file name
* @param buffer - a double pointer that is able to be used through whole program
* @return int - value to express the size of the file
*******************************************************************************/
int read_file(char* filename, char **buffer);


/*******************************************************************************
* setting up the write file mehtod to be written in the c file
* @param filename - pointer to the filename
* @param buffer - a pointer that points to the characters going into file
* @param size - the size of the file
* @return int - the size of the file written to
*******************************************************************************/
int write_file(char* filename, char *buffer, int size);


#endif
