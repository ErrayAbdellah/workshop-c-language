/*
	
	Challenge 6 :
	Ecrivez un programme pour v�rifier si le nombre donn� est positif, n�gatif ou nul. Si le nombre est inf�rieur � z�ro,
	alors le nombre est n�gatif et si le nombre est sup�rieur � z�ro, alors le nombre est positif. Si les deux conditions sont fausses,
	le nombre est �gal � z�ro.
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
