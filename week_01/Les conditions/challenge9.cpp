/*
	Ecrire un programme C qui lit un caractère et détermine s'il fait partie des alphabets ou non.
	Et s'il l'est, dire en plus s’il est une minuscule ou une majuscule.
*/

#include <stdio.h>

int main() {
	 char a;
	 
    printf("veuillez entrer un caractere : ");
    scanf ("%c",&a);
    if(a>='a' && a<='z')
    	printf("%c est une alphabet en miniscule",a);
    else if(a>='A' && a<='Z')
        printf("%c est une alphabet en majuscule",a);
	return 0;
}
