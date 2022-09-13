/*
	Challenge 3 :
Écrire un programme C qui lit un entier puis détermine s'il est premier ou non.
On rappelle qu'un entier est dit premier s'il a exactement deux diviseurs différents;
1 et lui-même. Ex: 2, 3, 7, 17, 101 sont tous premiers, et 4, 10, 27 ne le sont pas.
*/


#include <stdio.h>

int main() {
     
    int nbr , i ;
    int f =0;
    printf("donner un nombre : ");
    scanf ("%d",&nbr);
    
	for(i=2;i<=(nbr/2);i++)
	{
		
		if(nbr%i==0){
		 f = 1;
			
			break;
		}
	}
	if(f==0) printf("le nombre est premier");
	else printf("le nombre non premier");
			
    return 0;
}
