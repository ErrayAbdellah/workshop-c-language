/*
Ecrivez un programme qui demande la température en Fahrenheit et la transforme en degré 
Celsius et affiche la sensation ressentie (très froid, froid, chaud, très chaud) La formule :
	C = (F-32)/1.8
	
*/

#include<stdio.h>
#include<conio.h>

int main(){
	
	int f ,c;
	
	
	printf("Entrez la température en Fahrenheit " );
	scanf("%d",&f);

		c = (f-32)/1.8 ;
	printf("la température  en degré  Celsius :  = %d ",c);
	if(c <=0 )
		{
			printf("tres froid");
		} 
	else if (c> 0 && c <=20)
		{
				printf("froid");
		}
	else if (c> 20 && c <=40)
		{
				printf("chaud");
		}
	else 
		{
				printf("tres chaud");
		}
	
	
	getch();
	return 0;
	
}
