/*

a et b sont deux entiers saisies au clavier, calculez et affichez a+b, a-b, a*b, a/b, a%b en format décimal,
 et en soignant l’interface homme/machine. (a/b donne le quotient de la division, a%b donne le reste de la division)
*/


#include<stdio.h>
//#include<conio.h>

int main(){
	
	


	int a , b ,res = 0 ;
	
	printf("Entrez le nombre A : ");
	scanf ("%d",&a);
	printf("Entrez le nombre B : ");
	scanf ("%d",&b);
	
	
	
	
	res = a + b ;
	printf("A + B = %d\n",res);
	
	res = a - b ;
	printf("A - B = %d\n",res);
	
	res = a * b ;
	printf("A x B = %d\n",res);
	
	if(b!=0)
	{
		res = a/b;
		printf("A / B = %.2f\n",float(a)/float(b));
	}
	else {
		printf("B = 0 !!?????");
		return 0;
	}

	res = a % b ;
	printf("A % B = %d\n",res);	
	
	
	
	
	return 0 ;

}


