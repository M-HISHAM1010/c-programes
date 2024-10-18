#include <stdio.h>
int main()
{
	int p,r,t;
	 printf("enter principle amount");
	 scanf("%d",&p);
	 printf("enter the rate");
	 scanf("%d",&r);
	 printf("enter the time");
	 scanf("%d",&t);
	 printf("simple interest is= %d",p*r*t/100);
	 return 0;
}
