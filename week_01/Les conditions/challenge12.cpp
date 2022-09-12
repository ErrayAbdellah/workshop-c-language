/*
	Ecrire un programme C qui lit deux instants dans le format HH:MM:SS, et affiche un des messages suivants:
	Le premier instant vient avant le deuxième;
	Le deuxième instant vient avant le premier;
	Il s'agit du même instant.		
*/

#include<stdio.h>

int main()
{
	int hh , mm , ss;
	int hh2 , mm2 , ss2;
	
	printf("veuillez entrer le premier Heur: \n");
	printf("Heurs : ");
	scanf("%d",&hh);
	printf("Minutes : ");
	scanf("%d",&mm);
	printf("Secondes : ");
    scanf("%d",&ss);
    
    printf("veuillez entrer le deuxieme de Heur: \n");
	printf("Heurs : ");
	scanf("%d",&hh2);
	printf("Minutes : ");
	scanf("%d",&mm2);
	printf("Secondes : ");
    scanf("%d",&ss2);
    
    if(hh > hh2)
    {
    	printf("Le premier instant vient avant le deuxieme");
	}
	else if (hh < hh2)
	{
		printf("Le deuxieme instant vient avant le premier");
	}
	else if(hh == hh2)
	{
		if(mm > mm2)
	    {
	    	printf("Le premier instant vient avant le deuxieme");
		}
		else if (mm < mm2)
		{
			printf("Le deuxieme instant vient avant le premier");
		}
		else if(mm == mm2)
		{
			if(ss > ss2)
		    {
		    	printf("Le premier instant vient avant le deuxieme");
			}
			else if (ss < ss2)
			{
				printf("Le deuxieme instant vient avant le premier");
			}	
		} 
	} 
	
		
	return 0;
}
