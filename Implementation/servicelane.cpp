#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,t;
    cin>>n>>t;
    int width[n];
    for(int i =0 ;i< n;i++){
        cin>>width[i];
    }
    while(t--){
        int i,j;
        cin>>i>>j;
        int lowestVehical = width[i];
        for(int k =i+1; k <= j;k++){
            if (lowestVehical > width[k]){
                lowestVehical = width[k];
            }
        }
        cout<<lowestVehical<<endl;
    }
    return 0;
}

