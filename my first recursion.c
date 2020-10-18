//C Program to Find Factorial of a Number Using Recursion
#include <stdio.h>

int fn (int x)
{
	int h=0;
	if(x==0)
		return 1;
	else
		return x*fn(x-1);
}
int main()
{
	int Factorial,i=0;

    scanf("%d", &Factorial);

    printf("the Factorial of %d is %d", Factorial, fn(Factorial));
    return 0;
}
