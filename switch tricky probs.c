#include<stdio.h>

int fn(int x, int y, char ch )
{
    switch(ch)
    {
      case '+':
      printf("\n%d\n", x+y);
      case '-':
      printf("\n%d\n", x-y);
      case '*':
      printf("\n%d\n", x*y);
      case '/':
     { if(y>0)
      printf("\n%d\n", x/y);
      else
        printf("invalid\n");
      }
    }
 return 0;
}

int main()
{
    int a=0, b=0;
    char c;

    printf("enter the operator (*, -, +, /) ");
    scanf("%c", &c);

    printf("give first number");
    scanf("%d", &a);

    printf("give second number");
    scanf("%d", &b);


    fn(a, b, c);

    return 0;
}

//-----------------------------


