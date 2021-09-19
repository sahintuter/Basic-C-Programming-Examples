#include<stdio.h>

int bolen,bolunen;
float bolum;

void main()
{
  printf("Boleni giriniz:");
  
  scanf("%d",&bolen);
  
    printf("Boluneni giriniz:");
    
  scanf("%d",&bolunen);

bolum=bolunen/bolen;

printf("bolumun sonucu:%.2f",bolum);
	
	
}

