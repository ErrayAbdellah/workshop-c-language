/*
	Challenge 2 :
	Ecrivez un programme en C qui v�rifie si un caract�re saisi par l'utilisateur est
	 une voyelle ou non en utilisant l'instruction switch case.
*/

#include<stdio.h>



int main()
{
	char a ;
	
	printf("Entrez un nombre entiere :  ");
	scanf("%c",&a);
	
	switch(a)
	{
		case 'a' :
		case 'e' :
		case 'u' :
		case 'i' :
		case 'o' :
		case 'y' : 
		
		case 'A' :
		case 'E' :
		case 'U' :
		case 'I' :
		case 'O' :
		case 'Y' : 
			printf("un caract�re saisi est une voyelle");
			break;
		default :
			printf("un caract�re saisi est non voyelle");
			break;
			
	}
	
	
	return 0;
}
