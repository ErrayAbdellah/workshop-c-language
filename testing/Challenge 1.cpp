/*

Écrivez un programme en C qui va te permettre d'afficher vos informations personnelles :
Nom, prénom , Age , Sexe et numéro de téléphone. Les données sont saisies à partir du clavier.

*/




#include<stdio.h>
#include<conio.h>

int main(){

char nom[20] ,pre[100], sexe[100] , tele[100] ;
char age[3];


 printf("saisire le nom : \n"); 
 gets(nom);
 printf("saisire le prénom : \n"); 
 gets(pre);
 printf("saisire L'Age : \n"); 
 gets(age);
 printf("saisire le Sexe : \n"); 
 gets(sexe);
 printf("saisire le Tele : \n"); 
 gets(tele);
 
 printf("****************************************\n");
	puts(nom);
	printf("\n");

	puts(pre);
	printf("\n");
	
	puts(sexe);
	printf("\n");
	
	puts(age);
	printf("\n");	 
	
	puts(tele);
	printf("\n");
 printf("****************************************");

getch();
return 0 ;

}
