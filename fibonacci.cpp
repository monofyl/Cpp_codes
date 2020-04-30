//   Fibonacci series using recursion.

#include<bits/stdc++.h>
using namespace std;

int fib(int num){
    if (num <= 1)
        return num;
    return fib(num-1) + fib(num-2);
}

int main(){
    int n;
    cout << "Enter the upper bound to find fibonacci series ";
    cin >> n;
    int ans = fib(n);
    cout << ans <<endl;
    return 0; 
}
