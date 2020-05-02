//Jumping on the clouds revisited

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , k;
    cin >> n >> k;
    vector<int> v;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    int energy_level = 100;
    int i=0;
    do{
        i = (i+k)%n;
        if(v[i] == 1)
            energy_level = energy_level-3;
        if(v[i] == 0)
            energy_level = energy_level-1;
    }while(i != 0);
    cout << energy_level << endl;
    return 0;
}
