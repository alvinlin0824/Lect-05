// One day a man came to make a deal with Mr. Wang.
// He plans to buy the agricultural products of Mr. Wang's farm regularly.
// He gave Mr. Wang a list, which contained the quantity of each transaction he made.
// But after the list was sent out, it was found that the order of the transactions was reversed, so I quickly notified Mr. Wang.
// Mr. Wang still has some doubts about this list, so please come and help him sort out the list.

// Input Format
// Enter an integer N(0 at the beginning, there are N integers in the next line, representing the N[i],(0

// Output Format
// Print the list in reverse order.
// There is a space after each output, and a blank line after the last space

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
    
    int temp;
    for (int i = 0; i < N/2; i++)
    {
        temp = arr[i];
        // swap
        arr[i] = arr[N-i-1];
        arr[N-i-1] = temp;
    }
    
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    
    
    return 0;
}