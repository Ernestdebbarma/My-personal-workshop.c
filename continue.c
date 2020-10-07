
#include<stdio.h>
int main()
{
    int i=0;
    for(int i=0;i<9;i++)
    {

        if (i==6)
        {
           continue;
        }
         printf("%d\n",i);


        for(int j=0;j<10;j++)
        {


             if (j==3)
             {
                 continue;
             }
            printf("%d ",j);

        }
        printf("\n");
    }

}
