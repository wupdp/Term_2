#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{   
    int rows;
    printf("Enter the number of rows\n");
    rows=InitX(rows,1,99);
    int** mas;
    mas=massive2Init(rows);
    printf("________________________\n");
    massive2Show(mas,rows);
    printf("________________________\n");
    ex2(mas,rows);
    massive2Show(mas,rows);
    freemassive(mas,rows);
    return 0;
}