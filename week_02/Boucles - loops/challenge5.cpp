/*
	Challenge 5:
�crire un programme C qui lit un entier et l'affiche invers�e. On choisira de ne pas afficher chiffre par chiffre 
mais de construire l'entier invers� puis l'afficher. Ex: si l'entr�e est 12345 on doit afficher l'entier 54321.
*/

#include <stdio.h>

int main() {
     
    int i  ,a=0,b=0;
    int nbr;
    
    printf("Veuillez entrez un nombre : ");
    scanf("%d",&nbr);
    
	do
	{
		a = nbr % 10;
	    b = (b * 10)+ a;
	    nbr /= 10;
	    
	}while(nbr!=0);
	
	printf("%d",b);
    return 0;
}
