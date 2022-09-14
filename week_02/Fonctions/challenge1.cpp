/*
	Créez une fonction add(int a , int b) qui permet de faire l'addition des deux nombres a et b.
*/

#include<stdio.h>
#include<conio.h>

int add(int x, int y)
{
	
	int somme  = x + y ;
	
	return somme;
}

int main()
{
	int x,y;
	
	int som ;
	
	printf("Donner le nombre x : ");
	scanf("%d",&x);
	printf("Donner le nombre y : ");
	scanf("%d",&y);
	
	som = add(x,y);
	
	printf("%d",som);
	getch();
	return 0;
}
