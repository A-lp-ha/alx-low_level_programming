#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main -entry point
*
* return:always 0(success)
*/
int main(void)
{ 
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n>0) { printf("positive\n");}
else if (n<0) { printf("negative\n");} 
else if (n=0) { printf("zero\n");}
return 0;
}
