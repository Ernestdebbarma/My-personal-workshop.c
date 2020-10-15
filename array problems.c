/* i want to enter three values and print that entered values
but it is taking four value and printing three values,
*/

#include<stdio.h>

int main()

{
    int nums[3];// dosent this [3] represent it capacity?

  for(int i=0;i<3;i++)
    {
        if(i==3)
            break;
       scanf("%d\n",&nums[i]);//just delete the \n then it'll work
    }
 for(int i=0;i<3;i++)
    {
       printf("\n%d\n",nums[i]);
    }


    return 0;
}
//----------------------
#include<stdio.h>
#define rng 10
int main()

{
    int nums[rng];

  for(int i=0;i<3;i++)
    {
        if(i==3)
            break;
       scanf("%d",&nums[i]);
    }
 for(int i=0;i<3;i++)
    {
       printf("\n%d\n",nums[i]);
    }


    return 0;
}
