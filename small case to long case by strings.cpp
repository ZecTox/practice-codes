#include<bits/stdc++.h>
using namespace std;

int main(){
    
   string str = "huafajsdhfskjfbkjds";
   
   // convert into upper case
   
   for( int i=0; i<str.size(); i++){
       if(str[i] >= 'a' && str[i] <='z')
       str[i] -= 32;
   }
   cout << str << endl;
    
    return 0;
}
