/*
	
	Challenge 6 :
	Ecrivez un programme pour vérifier si le nombre donné est positif, négatif ou nul. Si le nombre est inférieur à zéro,
	alors le nombre est négatif et si le nombre est supérieur à zéro, alors le nombre est positif. Si les deux conditions sont fausses,
	le nombre est égal à zéro.
*/

#include<stdio.h>



int main()
{
	double a ;
	
	printf("Entrez le nombre a : ");
	scanf("%lf",&a);
	
	
	if (a>0) printf("le nombre est positif");
	else if (a<0) printf("le nombre est negatif");
	else printf("null");
	
	
	
	return 0;
}
