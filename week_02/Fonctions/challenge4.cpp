/*
	Challenge 4 :
Créez une fonction divededby(int n,int a) qui retourne la division des deux valeurs. 
Utilisez la fonction dividedby() pour contrôler si le nombre est premier en retourne true, sinon on retourne false.
*/


#include <stdio.h>

float divededby(int n , int a)
{
	return n/a;
}

bool dividedby(int x)
{
	int i ,f=0 ;
	for(i=2;i<=(x/2);i++)
	{
		
		if(x%i==0){
		 f = 1;
			
			break;
		}
	}
	if(f==0) return true;
	else return false;
}

int main() {
	
	int a,b;
	bool bo;
		
	printf("Donner le nombre a : ");
	scanf("%d",&a);
	printf("Donner le nombre b : ");
	scanf("%d",&b);
	
	bo = dividedby((int)divededby(a,b));
	
	(bo) ? printf("true") : printf("false");
			
    return 0;
}
