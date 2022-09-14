/*
Challenge 5 :
Écrivez un programme en C pour trier une liste d'éléments en utilisant l'algorithme de tri par fusion (merge sort).
*/


#include <stdio.h>
 
    void fusion(int tab[], int debut, int milieu, int fin)
    {
        int n1 = milieu - debut + 1;
        int n2 = fin - milieu;
     
        int G[n1], D[n2];
     
        for (int i = 0; i < n1; i++)
            G[i] = tab[debut + i];
        for (int j = 0; j < n2; j++)
            D[j] = tab[milieu + 1 + j];
     
        
        int i, j, k;
        i = 0;
        j = 0;
        k = debut;
     
        while (i < n1 && j < n2)
        {
            if (G[i] <= D[j])
            {
                tab[k] = G[i];
                i++;
            }
            else
            {
                tab[k] = D[j];
                j++;
            }
            k++;
        }
     
        
        while (i < n1)
        {
            tab[k] = G[i];
            i++;
            k++;
        }
     
        while (j < n2)
        {
            tab[k] = D[j];
            j++;
            k++;
        }
    }
     
     
    
    void triFusion(int tab[], int debut, int fin)
    {
        if (debut < fin)
        {
     
          
            int m = (debut + fin) / 2;
     
            triFusion(tab, debut, m);
            triFusion(tab, m + 1, fin);
     
            
            fusion(tab, debut, m, fin);
        }
    }
     
    void afficher(int tab[], int n)
    {
        for (int i = 0; i < n; i++)
            printf("%d ", tab[i]);
        printf("\n");
    }
     
     
    int main()
    {
        int tab[100];
        int n ,i;
     	printf("Donner la taille d'une tableu ");
     	scanf("%d",&n);
     		for(i=0;i<n;i++)
		 { 
		 	printf("T[%d] <= ",i+1);
		 	scanf("%d",&tab[i]);
		 }
        triFusion(tab, 0, n - 1);
     
        printf("Tableau trie: \n");
        afficher(tab, n);
    }
