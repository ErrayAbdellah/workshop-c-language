/*
	�crivez un programme C pour afficher la valeur �quivalente en octal et en hexad�cimal. 
	Entrez un nombre entier et affichez sa valeur �quivalente en octal et en hexad�cimal.
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>


int main()
{
	
	int  d;

	 
    printf("saisir un nombre decimal : ");
	scanf("%d",&d);
    
    
    printf(" octal = %o",d);
    printf(" hexad�cimal = %x",d);
	
	
	
	
	
	getch();
	return 0;
}
