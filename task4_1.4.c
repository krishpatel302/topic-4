#include<stdio.h>

main()

{
	int x,y,z;
	
	printf("enter the value x = ");
	scanf("%d",&x);
	printf("enter the value y = ");
	scanf("%d",&y);
	
	z = x;
	x = y;
	y = z;
	
	printf("swaping value x = %d\n",x);
	printf("swaping value y = %d\n",y);
	
}