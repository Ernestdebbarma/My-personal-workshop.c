/*(a) Write a function which receives a float and an int from
main( ), finds the product of these two and returns the product
which is printed through main( ). */

#include<stdio.h>

  fn(float x, int y)
{
    printf("\n--%f---",x*y);
}

int main()
{
    char hi[]="ernest_debbarma";
    printf("%s\n",hi);

    //------------------------

     int a;
     float b;
     scanf("%f%i",&b,&a);
     fn(b,a);

   return 0;
}

