#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    long long int num[5];
    cin>> n;
    for(int i =0; i < n;i++){
        cin>>num[i];
    }
    long long int sum = 0;
    for(int j = 0; j < n;j++){
        sum = sum + num[j];
    }
    cout<<sum;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

