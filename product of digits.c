#include <stdio.h>
int main()
{
  	int Num, Rem, Product;
  	scanf("%d",&Num);
  	for(Product = 1; Num > 0; Num = Num / 10)
  	{
  		Rem = Num % 10;
		  Product = Product * Rem;
	  }
    printf("%d", Product);
return 0;
}
