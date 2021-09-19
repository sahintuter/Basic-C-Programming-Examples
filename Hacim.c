#include <stdio.h>
#define PI 3.14 

int r,y;

float hacim;

void main()
{
	y = 3 ;
	
	printf("Yaricap giriniz:");
	scanf("%d",&r);
	
	hacim=((4*PI)/3)*r*r*r;
	printf("Hacim:%f", hacim);
	
}
