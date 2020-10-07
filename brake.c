
#include<stdio.h>
int main()
{
    int i=0;
    for(int i=0;i<9;i++)
    {


         printf("%d\n",i);
         if (i==6)
        {
           break;
        }


        for(int j=0;j<10;j++)
        {



            printf("%d ",j);
            if (j==3)
             {
                 break;
             }

        }
        printf("\n");
    }

}
