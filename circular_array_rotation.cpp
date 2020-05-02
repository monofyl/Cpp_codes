#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , k , q , m;
    cin >> n >> k >> q;
    int arr[n];
    int temp = 0 , ans = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int arr2[n];
    for(int i=0; i<n; i++){
        ans = arr[i];
        arr2[(i+k)%n] = ans;
    }
    while(q>0){
        cin >> m;
        cout << arr2[m] <<endl;
        q--;
    }
    return 0;
}
