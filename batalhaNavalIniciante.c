#include <stdio.h>

int main(){

    int tabuleiro [10][10];
    char linhas[10] = {'A' , 'B' ,  'C' ,  'D' ,  'E' ,  'F' ,  'G' ,  'H' ,  'I', 'J',};
    int i, j;

    for (char l = 0; l < 10; l++)
    {
        printf("  %c", linhas[l]);
    }
    
    printf("\n");
    for (i = 0; i < 10; i++)
    {
        printf("%2d", i+1);
        
        for (j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
           
            if (i == 1 && j > 0 && j < 4)
            {
                tabuleiro[i][j] = 3;
                
            }
            if (j == 6 && i > 1 && i < 5)
            {
                tabuleiro[i][j] = 3;
            }
            printf(" %d ", tabuleiro[i][j]);
        }
        
        printf(" \n");
       
            
        
    }  
     

    return 0;
}