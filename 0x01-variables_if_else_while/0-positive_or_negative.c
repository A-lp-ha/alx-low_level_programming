#include <stdio.h>
#include <time .h>
 int main(void)
{ 
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n>0) { printf("positive\n");}
	else if (n<0) { printf("negative\n");} 
        else if (n=0) { printf("zero\n");}
	return 0;
}
