/*
 Ecrivez un programme qui demande la temp�rature en Fahrenheit et la
 transforme en degr� Celsius La formule :
F = (C*1.8)+32
*/


#include<stdio.h>

int main(){
	
	float f , c;
	
	
	printf("Entrez  la temp�rature en Fahrenheit : " );
	scanf("%f",&f);
	
	
	c = (f-32)/1.8;
	
	
	printf("  la temp�rature en Celsius %f",c);
	
	return 0;
}
