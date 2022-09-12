/*

Ecrivez un programme qui demande la distance en Metre et la transforme en Mile La formule :
Mile = Km*1.609


*/


#include<stdio.h>
#include<conio.h>

int main(){
	
	float mile ,m;
	
	
	printf("Entrez  distance en metre : " );
	scanf("%f",&m);
	mile = (m*1.609)/1000; // m = 1km/1000
	
	printf("distance en metre :  = %f ",mile);
	
	
	getch();
	return 0;
	
}
