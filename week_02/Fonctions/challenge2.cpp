/*
	Challenge 2 :
Cr�ez une fonction echanger() pour �changer la valeur de a avec la valeur de b, qu'est ce que vous constatez ? 
affichez aussi l'�tat initial des variables a et b.
*/

#include<stdio.h>
#include<conio.h>

void echanger(int x, int y)
{
	int a=0;
	a = x ;
	x = y ;
	y = a ;
	
	printf("a = %d et b = %d  ",x,y);
}

int main()
{
	int a,b;
	
	printf("Donner le nombre a : ");
	scanf("%d",&a);
	printf("Donner le nombre b : ");
	scanf("%d",&b);
	
	printf("a = %d et b = %d\n",a,b);
	echanger(a,b);
	
	getch();
	return 0;
}
