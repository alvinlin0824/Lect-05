// Sam, who got an extra drink during Shu Run Drink Season, decides to go hiking.
// After looking at the map, Sam found that the terrain of Taiwan has a lot of ups and downs, 
// so Sam decided to find out the highest 
// and lowest places among the places he saw.

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
    
    // highest
    int highest = arr[0];
    for (int i = 0; i < N; i++)
    {
        if (arr[i] > highest)
        highest = arr[i];
    }
    
    // find highest index
    int highest_index;
    for (int i = 0; i < N; i++) {
        if (arr[i] == highest) {
            highest_index = i;
            break;
        }
    }
    
    cout << highest_index+1 << " " << arr[highest_index] << endl;
 
    // lowest
    int lowest = arr[0];
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < lowest)
        lowest = arr[i];
    }
    
    // find lowest index
    int lowest_index;
    for (int i = 0; i < N; i++) {
        if (arr[i] == lowest) {
            lowest_index = i;
            break;
        }
    }
    
    cout << lowest_index+1 << " " << arr[lowest_index] << endl;

    delete []arr;

    return 0;
}