
/*
Écrivez un programme C pour afficher un nombre entier à trois chiffres dans l'ordre inverse sans utiliser la boucle. 
Par exemple, si le nombre entier est 234, son inverse est 432.
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>


int main()
	{
		int n , a , b;
		
		printf("Entrez un nombre entier à trois chiffres :  \n");
		scanf("%d",&n);
		int i=1;
		
			    a = n % 10;
			    b = b * 10 + a;
			    n /= 10;
			    
			    a = n % 10;
			    b = b * 10 + a;
			    n /= 10;
			    
			    a = n % 10;
			    b = b * 10 + a;
			    n /= 10;
			    
		
		
		printf("%d",b);
		
		getch();
		return 0;
	}
