// Input Format
// Number 1 Number 2 Number 3 Number 4 Number 5 Number 6

// Output Format
// Number 1
// Number 2 Number 3
// Number 4 Number 5 Number 6
// (A space must be added after each number)

#include <stdio.h>
#include <stdlib.h>

int main() {
   int *ptr;
   int n = 6;
   ptr = (int*) malloc(n * sizeof(int));

      for (int i = 0; i < n; ++i) {
         scanf("%d", &ptr[i]);
      }
      
      for (int i = 0; i < n; ++i) {
         if (i == 0) {
            printf("%d\n", ptr[i]);
         }
         else if (i == 1 || i == 2) {
            printf("%d ", ptr[i]);
         }
         else {
            printf("%d\n", ptr[i]);
         }
      }
   
   
   free(ptr);
   return 0;
}



// #include<stdio.h>
// #include<stdlib.h>
// int main(){
    
//     int *arr[3];

//     arr[0] = (int *)malloc(sizeof(int));
//     arr[1] = (int *)malloc(sizeof(int)*2);
//     arr[2] = (int *)malloc(sizeof(int)*3);

    
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//            scanf("%d",&arr[i][j]);
//         }
//     }

//     for (int i = 0; i < 1; i++)
//     {
//         printf("%d\n",arr[0][i]);
//     }

//     for (int i = 0; i < 2; i++)
//     {
//         printf("%d\n",arr[0][i]);
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         printf("%d\n",arr[0][i]);
//     }

//     // arr[0][0] = 10;
//     // arr[1][0] = 20;
//     // arr[1][1] = 30;
//     // arr[2][0] = 40;
//     // arr[2][1] = 50;
//     // arr[2][2] = 60;

//     // for (int i = 0; i < 3; i++)
//     // {
//     //     for (int j = 0; j <= i; j++)
//     //     {
//     //        scanf("%d",&arr[i][j]);
//     //     }
//     // }

//     // printf("%d\n", arr[0][0]);
//     // printf("%d %d\n", arr[1][0], arr[1][1]);
//     // printf("%d %d %d\n", arr[2][0], arr[2][1], arr[2][2]);
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     for (int j = 0; j <= i; j++)
//     //     {
//     //        printf("%d\n",arr[i][j]);
//     //     }
//     // }
    
//     return 0;
// }