#include<stdio.h>
#define r 5

int main()
{
	int arr[r];
    int i,j,p=0,h=0;
    int oro[10]={0};
    int omo[10]={0};
    int k,m;
    for(i=0;i<r;i++)
    {
    	scanf("%d", &arr[i]);
    	for(j=0;j<r;j++)
    	{
    		while(arr[j]<0)
    		arr[j]=oro[p];
    	    p++;
    	}	
    	while (arr[i]>0)
        {
          arr[i]=omo[h];
          h++;
    	} 
    }    	
    for(k=0;k<r;k++){
    printf("%d, ", oro[k]);}
    for(m=0;m<r;m++){
    printf("%d, ", omo[m]);}

	return 0;
}
