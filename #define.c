#include<stdio.h>
#define sum(a, b) (a+b)
#define sub(a, b) (a - b)
int lol = 78;
int sus( int xx, int yy)
{   
	int s;
	s = xx + yy;
	return(s);
}
int main()
{
	int x = 1, y = 9;
	int sm = sus(x, y);
	printf("%d", sm);
	printf("  %d", lol);
	return 0;

}
