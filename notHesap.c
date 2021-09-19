#include <stdio.h>

int vize2,final,vnot,fnot,donem,vize1,vize2not;
void main()
{
	printf("Vize notunuzu girin:");
	scanf("%d",&vize1);
	
	vnot=vize1*0.4;
	
	printf("vize2 notunuzu girin:");
	scanf("%d",&vize2);
	
	vize2not=vize2*0.6;
	

	printf("final notunuzu girin:");
	scanf("%d",&vize2);
	
vize2not=final*0.6;
	
	donem= fnot+vnot+vize2not;
	
	printf("Dönem notunuz:%d",donem);
	
	
}
