#include <stdio.h>
int main(){

    int tabuleiro [10][10];
    char linhas[10] = {'A' , 'B' ,  'C' ,  'D' ,  'E' ,  'F' ,  'G' ,  'H' ,  'I', 'J',};
    int i, j;
    printf("   ");
    for (char l = 0; l < 10; l++)
    {
        
        printf("  %c", linhas[l]);
    }
    
    printf("\n");
    for (i = 0; i < 10; i++)
    {
        printf("%2d- ", i+1);
        
        for (j = 0; j < 10; j++)
        {
           tabuleiro[i][j] = 0;
           
            //barco horizontal    
            if (i == 1 && j > 6 && j < 10)
            {
                tabuleiro[i][j] = 3;
                
            }
            //barco vertical
            if (j == 6 && i > 1 && i < 5)
            {
                tabuleiro[i][j] = 3;
            }
            //barco diagonal inferior direito
            if (i == j && i > 6 && j > 6)
            {
                tabuleiro[i][j] = 3;
            }
            //barco diagonal inferios esquerdo
            if (i + j == 9 && i > 5 && j > 0)
            {
                tabuleiro[i][j] = 3;
            }
            //habilidade cone
            if (i == 2 && j < 5)
            {
                tabuleiro[i][j] = 5;
            }if (i == 1 && j > 0 && j < 4)
            {
                tabuleiro[i][j] = 5;
            }if (i == 0 && j == 2)
            {
                tabuleiro[i][j] = 5;
            }
            //habilidade octaedro
            if (i > 3 && i < 7 && j == 1)
            {
                tabuleiro[i][j] = 5;
            }if (i == 5 && j >= 0 && j < 3)
            {
                tabuleiro[i][j] = 5;
            }
            //habilidade cruz
            if (i == 8 && j > 2 && j < 8)
            {
                tabuleiro[i][j] = 5;
            }if (i > 6 && j == 5)
            {
                tabuleiro[i][j] = 5;
            }
            printf(" %d ", tabuleiro[i][j]);
        }
        printf(" \n");
    }  

    return 0;
}