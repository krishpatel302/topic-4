#include<stdio.h>

main()

{
	int x,y,z;
	
	printf("enter the value x = ");
	scanf("%d",&x);
	printf("enter the value y = ");
	scanf("%d",&y);
	
	z = x + y;
	x = y - y;
	x = z - y;
	
	printf("\n----------------\n");
	printf("swaping value x = %d\n",x);
	printf("swaping value y = %d\n",y);
	
}