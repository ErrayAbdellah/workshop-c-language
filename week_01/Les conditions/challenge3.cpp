/*
	
	Challenge 3 :
	Ecrivez un programme C pour calculer la somme de deux valeurs entières données. Si les deux valeurs sont identiques,
	il renvoie le triple de leur somme.
	
*/

#include<stdio.h>



int main()
{
	int a ,b ;
	
	printf("Entrez le nombre 1 :  ");
	scanf("%d",&a);
	
	printf("Entrez le nombre 2 :  ");
	scanf("%d",&b);
	
	a!=b ? printf("Somme = %d",a+b): printf("le triple de leur somme = %d",(a+b)*3);
	
	
	return 0;
}
