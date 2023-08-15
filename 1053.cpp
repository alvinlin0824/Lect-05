// Input Format
// Number 1 Number 2 Number 3 Number 4 Number 5 Number 6

// Output Format
// Number 1
// Number 2 Number 3
// Number 4 Number 5 Number 6
// (A space must be added after each number)


#include<stdio.h>
#include<stdlib.h>
int main(){
    
    int *arr[3];

    arr[0] = (int *)malloc(sizeof(int));
    arr[1] = (int *)malloc(sizeof(int)*2);
    arr[2] = (int *)malloc(sizeof(int)*3);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <= i; j++)
        {
           scanf("%d",&arr[i][j]);
        }
    }

    printf("%d\n", arr[0][0]);
    printf("%d %d\n", arr[1][0], arr[1][1]);
    printf("%d %d %d\n", arr[2][0], arr[2][1], arr[2][2]);
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //        printf("%d\n",arr[i][j]);
    //     }
    // }
    
    return 0;
}