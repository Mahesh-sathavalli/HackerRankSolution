#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int mat[n][n];
    for (int i =0 ; i < n;i++){
        for (int j = 0; j < n;j++){
            cin>>mat[i][j];
        }
    }
    int sumLtoR = 0;
    int sumRtoL = 0;
    int j = 0;
    for(int i = 0 ; i < n ; i++){
        sumLtoR = sumLtoR + mat[i][j];
        sumRtoL = sumRtoL + mat[i][n-j-1];
        //cout<<sumRtoL<< "\t"<<i<<"t"<<n-j<<"\n";
        j++;
    }
    //cout<<sumLtoR<<"\t"<<sumRtoL;
    cout<<abs(sumLtoR - sumRtoL);
    
    return 0;
}

