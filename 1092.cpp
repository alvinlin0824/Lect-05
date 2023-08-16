// Please write a program order
// Using C/C++ Dynamic Memory Allocation
// Let the user input the array size N (1<=N<=600000)
// Sort using bubble sort or other sorting methods
// Print out the results sorted from smallest to largest
// For example:
// Input: 34 12 5 66 1
// Output: 1 5 12 34 66

#include<iostream>
using namespace std;

int main(){

    int N;
    // dynamic number user define
    int *arr;
    bool changed = true;
    
    // Input length of array
    cin >> N;
    arr = new int[N];
    // Input array
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    
    //Bubble sort
    for (int j = N; j > 1; j--){
        changed = false;
        for (int i = 0; i < j - 1; i++)
        {
            if (arr[i] > arr[i+1])
            { 
                int temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;  
                changed = true; 
            }     
        }

        if (changed == false)    
        {
            break;
        }
        
    }
    
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    
    delete []arr;
    
    return 0;
}