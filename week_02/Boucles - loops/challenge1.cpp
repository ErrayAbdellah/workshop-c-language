/*
	Challenge 1: table de multiplication
Ecrire un algorithme qui demande un nombre à l’utilisateur, puis affiche sa table de multiplication de 1 à 10

*/


#include<stdio.h>

int main ()
{
	int i,nbr ;
	
	printf("Veuillez entrer un nombre : ");
	scanf("%d",&nbr);
	
	for(i=1;i<=10;i++)
	{
		printf("%d x %d = %d\n",i,nbr,i*nbr);
	}
	return 0;
}
