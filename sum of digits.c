#include <stdio.h>
int main()
{
  	int Num, Rem, sum;
  	scanf("%d",&Num);
  	for(sum= 0; Num > 0; Num = Num / 10)
  	{
  		Rem = Num % 10;
		  sum = sum + Rem;
	  }
    printf("%d", sum);
return 0;
}
