/*
 ============================================================================
 Name        : sample1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
//#include "html.h"
int main(int argc, char* argv[]) {
	DIR *dir;
	struct dirent *ent;
	if ((dir = opendir (argv[1])) != NULL) {
	  while ((ent = readdir (dir)) != NULL) {
	    printf ("%s\n", ent->d_name);
	  }
	  closedir (dir);
	} else {
	  /* could not open directory */
	  perror ("");
	  return EXIT_FAILURE;
	}
}