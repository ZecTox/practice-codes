#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int a;
    cin >> a;
    
    for(int i=0;i<2*a;i++){
        for(int j=0;j<2*a;j++){
            if(i+j>=(2*a - 1)&&(j-i)>=0)
                cout<<"*";
            else if (j-i<=0 && i+j <= (2*a - 1))
                cout<<"*";
            else 
                cout<<" ";
        }cout<<endl;
    }
    return 0;
}
