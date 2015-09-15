#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool perfectSquare(long a){
    long sqrtA = (long) sqrt(a);
    if (sqrtA* sqrtA == a){
        return true;
    }else{
        return false;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t-- > 0){
        long a,b;
        cin>>a>>b;
        long rootA,rootB;
        rootA = (long)(sqrt(a));
        rootB = (long)(sqrt(b));
        if (a==b && perfectSquare(a)){
            cout<<"1"<<endl;
        }else if(perfectSquare(a)){
            cout<<rootB-rootA+1 <<endl;
        }else{
            cout<<rootB-rootA<<endl;
        }
        
    }
    return 0;
}

