/*recursion is nothing but calling a function itself to make the problem short*/


#include<bits/stdc++.h>
using namespace std;

int Sum(int n){

if(n==0){
    return 0;
}
int prevSum = Sum(n-1);

return n + prevSum;
}

int main(){

int n;
cin >> n;

cout << Sum(n) << endl;

    return 0;
}
