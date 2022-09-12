/*

Ecrivez un programme qui demande la distance en Mile et la transforme en Metre La formule :

Km = Mile/1.609


*/


#include<stdio.h>
#include<conio.h>

int main(){
	
	float mile ,m;
	
	
	printf("Entrez  distance en Mile : " );
	scanf("%f",&mile);

	m = (mile/1.609)*1000;  // 1 km = m x 1000
	printf("distance en Mile :  = %f ",m);
	
	
	getch();
	return 0;
	
}
