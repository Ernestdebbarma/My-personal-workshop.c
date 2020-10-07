#include <stdio.h>
int main() {
    char c;
    for (c = 'A'; c <= 'Z'; ++c)
        printf("%c ", c);
    return 0;
}

/*
#include<stdio.h>
int main()
{
   printf("%d",'Z');

    return 0;
}
*/

#include<stdio.h>
int main()
{
    int i=65;

    for(i=65;i<=90;i++)
    {
        printf("%c and its ascii value is %d\n",i,i);
    }
}

