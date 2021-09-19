#include<stdio.h>
#define pi 3.14 
 
int yCap;
float sonuc;
int main()
{
 
 
	printf("Yari Capi Giriniz: ");
	scanf("%d", &yCap);
	sonuc= (4*pi*yCap*yCap*yCap/3);
	printf("Kurenin Hacmi: %f", sonuc);
 
 
}
