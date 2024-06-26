#include<stdio.h>

main()

{
	int x,y,xy;
	printf("Enter value x = ");
	scanf("%d,&x");
	printf("Enter value y = ");
	scanf("%d",&y);
	
	xy = (x*x) + (2*+(x*y)) + (y*y);
	
	printf("Formula answer = %d",xy);
	  

}