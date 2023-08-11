// N=6
// A[i]={1, 3, 2, 5, 6, 3}
// Single and double positions are swapped, A[0] and A[1] are swapped, A[2] and A[3] are swapped, and so on.
// Answer "3 1 5 2 3 6 \n" , each output is followed by a space and a newline at the end

#include<iostream>
using namespace std;
int main(){
    
    int N;
    // dynamic number user define
    int *arr;
    
    // Input length of array
    cin >> N;
    arr = new int[N];
    // Input array
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    // swap 
    for (int i = 0; i <= N; i+=2)
    {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    delete []arr;

    return 0;
}