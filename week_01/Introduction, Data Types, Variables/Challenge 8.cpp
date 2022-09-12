/*

Écrivez un programme en C pour trouver la somme et la moyenne de quatre nombres. Prenez les entrées de l'utilisateur final.
 Explication : Soit trois nombres a, b et c alors, Somme = (a+b+c) et, Moyenne = somme/3
*/


#include<stdio.h>
#include<conio.h>

int main(){
	
	float moy ,somme,a ,b, c,d  ;
	
	printf("Entrez des quatre nombres : \n");
	
	scanf("%f%f%f%f",&a,&b,&c,&d);
	
	moy = (a+b+c+d)/4 ;
	
	somme = (a+b+c+d) ;	
	
	printf("Somme = %f et, Moyenne = %f \n",somme,moy);
	
	return 0 ;

}


