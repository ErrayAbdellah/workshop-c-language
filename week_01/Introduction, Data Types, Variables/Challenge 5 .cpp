/*
Ecrivez un programme qui demande la temp�rature en Fahrenheit et la transforme en degr� 
Celsius et affiche la sensation ressentie (tr�s froid, froid, chaud, tr�s chaud) La formule :
	C = (F-32)/1.8
	
*/

#include<stdio.h>
#include<conio.h>

int main(){
	
	int f ,c;
	
	
	printf("Entrez la temp�rature en Fahrenheit " );
	scanf("%d",&f);

		c = (f-32)/1.8 ;
	printf("la temp�rature  en degr�  Celsius :  = %d ",c);
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
