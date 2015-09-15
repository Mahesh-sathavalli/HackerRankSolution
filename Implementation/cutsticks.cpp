#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void sort(int n,int array[]){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if (array[i] < array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    int sticks[n];
    for(int i =0 ;i < n;i++){
        cin>>sticks[i];
    }
    sort(n,sticks);
    int ans = 0;
    int count = n;
    int *array = sticks;
    do{
        cout<<count<<endl;
        int min = array[0];
        for(int i =0 ;i < n;i++){
            array[i]-=min;
        }
        while((count)>0 and (array[0]==0)){
            count--;
            array++;
        }
    }while(count >0);
    
   
    return 0;
}

