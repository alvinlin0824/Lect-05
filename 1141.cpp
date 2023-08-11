// N=6
// A[i]={1, 3, 2, 5, 6, 3}
// The average is equal to 20/6 = 3.333 , so output "2\n" a total of two people are greater than the average.

// N=3
// A[i]={2,2,2}
// The average is equal to 6/3=2 so no one is greater than the average, output "0\n"
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

    // average
    double avg = 0;
    for (int i = 0; i < N; i++)
    {
        avg += (double)arr[i]/N;
    }

    // count
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] > avg)
           count +=1;
    }
    
    cout << count << endl;
    delete []arr;

    return 0;
}