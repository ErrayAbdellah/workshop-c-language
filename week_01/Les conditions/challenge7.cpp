/*
	
	Challenge 7 :
�crivez un programme pour v�rifier si le caract�re donn� est un alphabet majuscule ou non en utilisant l'instruction
 conditionnelle if-else en C. Les lettres majuscules vont de 'A' � 'Z'. Les valeurs ASCII de 'A' et 'Z' sont respectivement 65 et 90.
  Si la valeur ASCII d'un caract�re est comprise entre 65 et 90, il s'agit d'un alphabet majuscule.
*/

#include<stdio.h>



int main()
{
	char a ;
	
	printf("Entrez le nombre a : ");
	scanf("%c",&a);
	
	if (int(a)>=65 && int(a)<=90) printf("La lettre majuscule");
	else  printf("La lettre minuscule");
	
	
	
	return 0;
}
