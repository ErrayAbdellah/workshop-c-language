#include <stdio.h>



int main() {
	float moyenne;
	
    printf("Entrer moyenne : ");
    scanf("%f",&moyenne);
    
    if (moyenne<10)
        	printf("Il est recale");
        else if(moyenne>=10 && moyenne<12)
        	printf("Il obtient la mention passable");
        else if(moyenne>=12 && moyenne< 14)
        	printf("Il obtient la mention assez bien");
        else if(moyenne>=14 && moyenne<16)
        	printf("Il obtient la mention bien");
        else(moyenne>=16);
        	printf("Il obtient la mention tres bien");

                
	return 0;
}
