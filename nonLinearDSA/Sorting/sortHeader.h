#ifndef foo_dot_h  /* This is an include protection */
#define foo_dot_h  /* prevents the file behing included 2wice */
	           /* Inluding a header file 2wice will case duplication err */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* this is function declaration */
void selection(void);
void insertion(void);
void bubble(void);
void merge(void);
void shell(void);
void quick(void); 
#endif /* end of foo_dot_h  */

/*
 * Use this header for other common declaration
 */

