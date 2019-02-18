#include <stdio.h>
int main(void) 
{
	int i,N,K,arr[50];
	scanf("%d %d",&N,&K);
	for(i=1;i<=N;i++)
	{
	    scanf("%d",&arr[i]);
	}
	for(i=1;i<=N;i++)
	{
	    while(i==K)
	    {
	        printf("%d",arr[i]);
	        break;
	    }
	}
	return 0;
}
