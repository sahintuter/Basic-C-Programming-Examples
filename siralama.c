#include <stdio.h>

int x,y,z;

int main()
{
	printf("Bir sayi giriniz=");scanf("%d", &x);
	printf("Bir sayi giriniz=");scanf("%d", &y);
	printf("Bir sayi giriniz=");scanf("%d", &z);
	if(x>y&&x>z){
		if(y>z)
		printf("%d\t>%d\t>%d",x,y,z);
		else if(z>y)
		printf("%d\t>%d\t>%d",x,z,y);
		else
		printf("%d\t>%d\t=%d",x,z,y);
	}
	if(y>x&&y>z){
		if(x>z)
		printf("%d\t>%d\t>%d",y,x,z);
		else if(z>x)
		printf("%d\t>%d\t>%d",y,z,x);
		else
		printf("%d\t>%d\t=%d",y,z,x);
	}
	if(z>y&&z>x){
		if(y>x)
		printf("%d\t>%d\t> %d",z,y,x);
		else if(x>y)
		printf("%d\t>%d\t>%d",z,x,y);
		else
		printf("%d\t>%d\t=%d",z,x,y);
	}
	if(x==y&&x>z){
		printf("%d\t=%d\t>%d",x,y,z);
	if(x==z&&x>y)
		printf("%d\t=%d\t>%d",x,z,y);
	if(y==z&&y>x)
		printf("%d\t=%d\t>%d",y,z,x);
	if(x==y&&x==z)
		printf("%d\t=%d\t=%d",x,z,y);

}
	}
