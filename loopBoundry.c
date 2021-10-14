
#include<stdio.h>
/*
void iterateFoo1()
{
unsigned num1;
int i;
scanf("%u",&num1);
for (i = 0; i < num1; i++){    // Non-compalint - Dont have If condition 

}
}


void iterateFoo2()
{
unsigned num2;
int i;
scanf("%u",&num2);
if (num > 20) return;        // Complaint - if stmt is not direct parent and has return in it 
for (i = 0; i < num2; i++){
if(num2 == 3)
{
}

}
}

*/

void iterateFoo3()
{
unsigned num3;
int i;
scanf("%u",&num3);
if (num3 > 20)
{
	int abdjd;
}        			// Non-complaint - if stmt is not direct parent and dont have return in it 
for (i = 0; i < num3; i++){

}
}

void iterateFoo4()
{
unsigned num4;
int i;
scanf("%u",&num4);
if (i > 20)		// Non-complaint - has if condition but for different variable 
{
for (i = 0; i < num4; i++){

}
}
}
/*
//Fixed code example:
void iterateFoo1_fixed()
{
unsigned num5;
int i;
scanf("%u",&num5);
if (num5 > 20)		// Complaint 
{
for (i = 0; i < num5; i++){
if(num5 ==2)
}
}
}

void iterateFoo2_fixed()
{
unsigned num6;
int i;
scanf("%u",&num6);
if (num6 > 20)		// Complaint 
for (i = 0; i < num6; i++){

}
}


void iterateFoo2_fixed()
{
unsigned num;
int i;
scanf("%u",&num);
if (num > 20)		// Complaint 
for (i = 0; i < num; i++){

}
}


int main()
{
return 0;
}*/

/*
    #include <stdio.h>  
    main(){  
       FILE *fp;  
       char buff[255];//creating char array to store data of file  
       fp = fopen("file.txt", "r");  
       while(fscanf(fp, "%s", buff)!=EOF){  
       printf("%s ", buff );  
       }  
       fclose(fp);  
    }  */

/*
#include <stdio.h>
#include <stdarg.h>
 
int vread(FILE *stream, char *fmt, ...)
{
	int rc;
	va_list arg_ptr;
	va_start(arg_ptr, fmt);
	rc = vfscanf(stream, fmt, arg_ptr);
	va_end(arg_ptr);
	return(rc);
}
*/
/*	
#include <stdio.h>
#include <stdarg.h>

void GetMatches ( const char * format, ... )
{
  va_list args;
  va_start (args, format);
  vscanf (format, args);
  va_end (args);
}

int main ()
{
  int val;
  char str[100];

  printf ("Please enter a number and a word: ");
  fflush (stdout);
  GetMatches (" %d %99s ", &val, str);
  printf ("Number read: %d\nWord read: %s\n", val, str);

  return 0;
}
*/

/*
#include <stdio.h>
#include <stdarg.h>

void GetMatches ( const char * str, const char * format, ... )
{
  va_list args;
  va_start (args, format);
  vsscanf (str, format, args);
  va_end (args);
}

int main ()
{
  int val;
  char buf[100];

  GetMatches ( "99 bottles of beer on the wall", " %d %s ", &val, buf);

  printf ("Product: %s\nQuantity: %d\n", buf, val);

  return 0;
}

	
*/






