
/*
Ecrivez un programme C pour trouver la distance entre deux points donnés. La formule de distance est dérivée du théorème de Pythagore.
 Pour trouver la distance entre deux points (x1, y1) et (x2, y2), il suffit d'utiliser les coordonnées de ces paires ordonnées et d'appliquer 
 la formule. Formule de distance Supposons que nous ayons deux points M et N, dont les coordonnées sont respectivement (x1, y1) et (x2, y2). 
 Leur distance peut être représentée par MN et peut être calculée selon la formule ci-dessous, Le premier point (M):- (x1, y1) Deuxième point (N) : 
 (x2, y2) Distance (MN):- v((x2-x1)² + (y2-y1)²) Exemple:- M = (4, 8) N = (12, 14) Alors la distance entre M et N est
  MN = v((12-4)² + (14-8)²) = v(64 + 36) = v(100) = 10
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>


int main()
	{
		double x1,x2,y1,y2;
		double res ,rx , ry ;
		 
		printf("Entrez Le premier point  \n");
		printf("x1 : ");
		scanf("%lf",&x1);
		printf("y1 : ");
		scanf("%lf",&y1);
		
		printf("Entrez Le Deuxième point  \n");
		printf("x2 : ");
		scanf("%lf",&x2);
		printf("y2 : ");
		scanf("%lf",&y2);
		
		rx = pow((x2 - x1),2);
		ry = pow((y2-y1),2);
		
		res = sqrt((rx+ry));
		
		printf("%.2lf ",res);
		
		return 0;
	}
