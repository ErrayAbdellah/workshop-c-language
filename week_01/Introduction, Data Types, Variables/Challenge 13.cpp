/*
	Écrivez un programme C pour afficher la valeur équivalente en octal et en hexadécimal. 
	Entrez un nombre entier et affichez sa valeur équivalente en octal et en hexadécimal.
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
    printf(" hexadécimal = %x",d);
	
	
	
	
	
	getch();
	return 0;
}
