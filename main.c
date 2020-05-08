#include <stdio.h>
#include <stdlib.h>

void taskSixFour(){

    int m = 0; // column
    int n = 0; // row

    printf("Your need write two integer value fto create a two dimensional array");
    printf("\r\n");
    printf("m = ");
    scanf("%d", &m);
    printf("n = ");
    scanf("%d", &n);

    // init two dimensional array
    int **array = malloc(m * sizeof (int*));
    for(int i= 0; i < m; i++)
        array[i] = malloc(n * sizeof (int));

    // set values to array
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            array[i][j] = (i + n) * (j + m);

    // display array
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", array[i][j]);
        printf("\r\n");
    }


    // delete one column
    m--;
    int **temp = malloc(m * sizeof (int*));
    for(int i= 0; i < m; i++)
        temp[i] = malloc(n * sizeof (int));


    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            temp[i][j] = array[i][j];

    free(array);

    array = temp;

    printf("Arrey after remove one column");
    printf("\r\n");

    // display array
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", array[i][j]);
        printf("\r\n");
    }

}

void taskSixFive(){
    // init matrix
    printf("Write an Integer value to create a matrix M, m on n");
    printf("\r\n");
    printf("m = ");
    int m = 0;
    scanf("%d", &m);
    int matrix[m];

    // init row vector
    printf("Write an Integer value to create a row vector A");
    printf("\r\n");
    printf("p = ");
    int p = 0;
    scanf("%d", &p);
    int rowVector[p];

    // set data to matrix
    for (int i = 0; i < m; i++)
        matrix[i] = rand() % 21;

    printf("Display Matrix");
    printf("\r\n");

    // display matrix
    for (int i = 0; i < m; i++)
        printf("%d\t", matrix[i]);

    printf("\r\n");
    printf("Display Row Vector");
    printf("\r\n");

    // set data to rowVector
    for (int i = 0; i < p; i++)
        rowVector[i] = rand() % 21;

    // display rowVector
    for (int i = 0; i < p; i++)
        printf("%d\t", rowVector[i]);

    // init multy vector
    int multyVector[m][p];

    // set data to multyVector
    for(int i = 0; i < m; i++)
        for(int j = 0; j < p; j++){
            multyVector[i][j] = matrix[i] * rowVector[j];
        }

    printf("\r\n");
    printf("Display MultyVector");
    printf("\r\n");

    // display multyVector
    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++){
            printf("%d\t", multyVector[i][j]);
        }
        printf("\r\n");
    }
}

void taskSixSix(){
    printf("Write an Integer value to create a square array");
    printf("\r\n");
    printf("x = ");
    int x = 0;
    scanf("%d", &x);
    int array[x][x];

    for(int i = 0; i < x; i++)
        for(int j = 0; j < x; j++)
            array[i][j] = (i + j) % 2 == 0 ? 0 : 1;

    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < x; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\r\n");
    }
}

int main()
{
    srand(time(NULL));
    taskSixFive();
    return 0;
}
