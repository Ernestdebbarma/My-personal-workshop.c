#include<stdio.h>
int main()
{
     int num;

        printf("enter the number you want added (+1) 10 times: ");
        scanf("%d",&num);

         if(num>=0)
            for(int i=1;1<100;++i)
             {
               int sum=num+i;

                if(i==11)
                    {
                      break;
                     }
                 printf("\n  %d\n",sum);
              }
          else
             printf("sorry you entered a negative number");

 return 0;
}
