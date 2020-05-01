//Second maximumm number in an array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    sort(arr , arr+n);    
    int max_val = 0;
    for(int i=0; i<n; i++){
        if (arr[i] > max_val)
            max_val = arr[i];
    }    
    int second_max = 0;
    for(int j=0; j<n; j++){
        if (arr[j] < max_val && arr[j] > second_max)
            second_max = arr[j];
    }
    cout << "Max value is : " << max_val << " and second max value is : " << second_max << endl;
    return 0;
}