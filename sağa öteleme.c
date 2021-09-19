#include<stdio.h>

int a,x,y,z;

int main() 
{

		printf("1 ve 15 arasinda sayi giriniz:");
		scanf("%d",&a);
	
		printf("ne kadar otelemek istersiniz:");
		scanf("%d",&z);
	
	 	y=a>>z;
	
    	printf("%d",y);
     
   
    return 0;
	
	
    
}
