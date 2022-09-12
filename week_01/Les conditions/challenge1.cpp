/*
	Challenge 1 : Paire ou Impaire
	Ecrivez un programme qui demande un nombre et affiche si ce nombre est paire ou impaire
*/

#include<stdio.h>



int main()
{
	int a ;
	
	printf("Entrez un nombre entiere :  ");
	scanf("%d",&a);
	
	(a%2)==0 ? printf("paire") : printf("impaire ");
	
	
	return 0;
}
