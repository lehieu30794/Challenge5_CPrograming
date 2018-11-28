/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: LEHIEU
 *
 * Created on November 27, 2018, 2:42 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void transpose (int n, int m, const float A[n][m], float AT[m][n])
    {
          
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                AT[j][i] = A[i][j];
        }
        
    }


int main(int argc, char** argv) {
    
        FILE *filePointer;
        char fileName[100];
        
        int row, col;
        
        
      

        printf ("Enter the name of the file.txt you want to open: ");
        scanf ("%s", &fileName);

        if ((filePointer = fopen(fileName, "r+")) == NULL)
            printf("Can't open file to read and update");
        
       
        fscanf(filePointer, "%d", &row);
        
        fscanf(filePointer, "%d", &col);
        
        
        float tempNumber[row][col];
        float result[col][row];
        
        printf("Original 2D array\n");
        for (int i = 0; i < row; i++)
        {
            for (int n = 0; n < col; n++)
            {
                
                fscanf(filePointer, "%f", &tempNumber[i][n]);
                
                printf("%f ", tempNumber[i][n]);
            }
            printf("\n");
        }
        
        transpose (row, col, tempNumber, result);
        
       
        printf("\n\nTransposed Version\n");
        for (int i = 0; i < row; i++)
        {
            for (int n = 0; n < col; n++)
            {
               printf("%f ", result[i][n]);
            }
            printf("\n");
        }
       
        
        //while (fscanf(filePointer, "%f", &tempNumber) != EOF)
        //    printf ("%f \n", tempNumber);
 
        
    
    
    
    

    return (EXIT_SUCCESS);
}

