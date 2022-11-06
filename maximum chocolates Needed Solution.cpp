#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int choco=1*n;
    int wrapper=choco;
    int w;
        while(wrapper>0){
        w=wrapper/3;   
        if(w%3==0){
            choco+=w;
            wrapper+=w;
        }
        else {
            choco+=w;
            wrapper+=w;
            w=wrapper-(w*3);
        } 
        wrapper=w; 
    }
    cout<<"max chocolate "<<choco<<endl;
    return 0;
}
