#include<bits/stdc++.h>
using namespace std;

void addone(int *n) {
    (*n)++;
}

int main(){
    
    int n = 1;
    cout << n <<endl;
    addone(&n);
    cout << n << endl;
    
    return 0;
}
