/*

Ecrivez un programme qui demande la temp�rature en Fahrenheit et la transforme en degr� Celsius La formule :
C = (F-32)/1.8

*/


#include<stdio.h>
#include<conio.h>

int main(){
	
	
	float f , c;
	
	
	printf("Entrez  la temp�rature en Fahrenheit : " );
	scanf("%f",&f);
	
	
	c = (f-32)/1.8;
	
	
	printf("  la temp�rature en Celsius %f",c);
	
	getch();
	return 0;
	
}
