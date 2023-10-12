#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int rows,cols;
    
    printf("Enter the number of rows and columns:");
    scanf("%d %d", &rows,&cols);

    //initialize array
    int **array = malloc(sizeof(int *) *rows);
    if(array == NULL)
    {
        printf("Memory could not be allocated");
        exit(1);
    }

    for(int i=0;i<rows;i++)
    {
        array[i] = malloc(sizeof(int)*cols);
    }

    //collecting data
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("Enter array[%d][%d]:",i,j);
            scanf("%d", *(array+i)+j);
        }
    }

    //printing data
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("array[%d][%d]:%d\n",i,j,*(*(array+i)+j));
 
        }
    }

    //free memory
    for(int i=0;i<rows;i++)
    {
        free(array[i]);
    }

    free(array);

}
