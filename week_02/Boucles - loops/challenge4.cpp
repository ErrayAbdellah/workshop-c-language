/*
	Challenge 4 :
Écrire un programme C qui lit une série d'entiers positifs inférieurs à 100 terminée par 0.
Et qui doit négliger toute entrée strictement supérieure à 100.
Puis calcule et affiche la somme et le max des éléments de cette série.

*/


#include <stdio.h>

int main() {
     
    int nbr , x = 0;
    int T[100];
         
    printf("Veuillez entrer les nombres positifs inférieurs à 100 terminée par 0 : \n");
	
	do{
		scanf("%d",&nbr[i]);
		if(nbr[i]>100) 
		{
			printf("Veuillez entrer les nombres positifs inférieurs à 100 terminée par 0 : \n");
			continue ;
		}
		
	}while(a!=0);
	
	
	for(i=0;i<=nbr;i++)
	{
		if(T[i]> 0 )
		{
			x = T[i];
		}
	}
    return 0;
}
