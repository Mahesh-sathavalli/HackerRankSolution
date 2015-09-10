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
   int mat[n];
   for (int i =0 ; i < n;i++){
            cin>>mat[i];
    }
    float count_positive = 0;
    float count_negative = 0;
    float count_zero = 0;
    for(int i = 0;i < n;i++){
        if(mat[i] > 0){
            count_positive = count_positive +1;
        }else if(mat[i] < 0){
            count_negative = count_negative + 1;
        }else{
            count_zero = count_zero + 1;
        }
    }
    cout<<(count_positive/n) << "\n";
    cout<<(count_negative/n) << "\n";
    cout<<(count_zero/n) << "\n";
    return 0;
}

