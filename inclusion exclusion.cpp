 #include<bits/stdc++.h>
 using namespace std;

 int main(){
    int n,a,b;
    cin >> n >> a >> b;

    int f1 = n/a;
    int f2 = n/b;
    int f3 = n/(a*b);

    cout << f1 + f2 - f3 << endl;
return 0; 
 }
