/*
	
	Challenge 4 : Equation deuxième degré
	Écrivez un programme C qui permet de calculer les solutions possible d’une équation 2ème degré.
	
*/

#include<stdio.h>
#include<math.h>



int main()
{
	double a ,b,c, res  , delta , x1,x2 , x0;
	
	printf("Entrez le nombre a : ");
	scanf("%lf",&a);
	
	printf("Entrez le nombre b : ");
	scanf("%lf",&b);
	
	printf("Entrez le nombre c : ");
	scanf("%lf",&c);
	
	delta = pow(b,2) - (4*a*c) ;  //delta = b2 – 4ac
	
	if(delta > 0)		//delta > 0
		{
			x1 = (-b - sqrt(delta))/(2*a);
			x2 = (-b + sqrt(delta))/(2*a);
			printf("Comme delta > 0, l equation possede deux solutions distinctes : \nx1 = %.2lf \nx2 = %.2lf",x1,x2);
		} else if(delta == 0) //delta = 0
		{
			x0 = -b/(2*a);
			printf("Calculons le discriminant de l equation : \nx0 = %lf",x0);
		}
		else if (delta < 0 ) printf("Comme delta < 0, l equation ne possede pas de solution reelle"); //delta < 0
		else printf("error!");
	
	return 0;
}
