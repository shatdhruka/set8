#include <stdio.h>
int main(void) 
{
	int n,arr[50],i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<n;i++)
	{
		if(i!=arr[i])
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
