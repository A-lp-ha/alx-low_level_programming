#include <stdlib.h>
#include <time.h>
/*more headers goes there */
#include <stdio.h>
/*betty style doc for function main goes there */
/*
 * main- entry point 
 *
 * return (0)
 */
int main(void)
{
int n;
srand (time(0));
n = rand() - RAND_MAX / 2;
/* YOUR CODE GOES THERE */
if (n>5)
{
printf("Last digit of %d is and is greater than 5\n", n);
}
else if (n == 0)
{
printf("last digit of %d is and is 0\n", n);
}
else (n<5 && n>0);
{
printf("last digit of %d is and less than 6 and not 0\n", n);
}
return (0);
}
