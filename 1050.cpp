// Declare an array A of length 5
// Use a pointer P to access this array ex:「*(P+i)」
// Let the user enter 5 numbers and find the maximum value and the position of the maximum value
#include<iostream>
using namespace std;
int main(){
    
    int arr[5];
    int *p;
    p = arr;
    
    // Input array
    for (int i = 0; i < 5; i++)
    {
        cin >> p[i];
    }
    
    int Max = p[0];
    for (int i = 0; i < 5; i++)
    {
        if (p[i] > Max) {
            Max = p[i];
        }
    }

    // find index
    int index;
    for (int i = 0; i < 5; i++) {
        if (p[i] == Max) {
            index = i;
            break;
        }
    }


    cout << index+1 << ": " <<p[index];


    return 0;
}