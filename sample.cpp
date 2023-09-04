#include <cmath>
#include <cstdio>
#include <vector>
#include<limits.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        int k=0;
        vector<int> v;
        for(int j=0;j<n;j++){
            for(int i=0;i<n;i++){
               if(arr[i][j]==1){
                    k++;
               }
            if(i=n-1){
                v.push_back(n-k);
                cout<<v[j]<<" "<<n-k<<endl;
                k=0;
                }
                /*
1 1 0 1 0
0 0 0 0 1
1 0 0 1 0
0 0 1 0 1
0 0 0 0 0*/
            }}
        int res;
        int s=v.size();
        int l=INT_MIN;
        for(int i=0;i<s;i++){
           if(l<v[i] and l!=v[i]){
               l=v[i];
               res=i;
           }
        }
        v.clear();
        cout<<res<<endl;
    }
    return 0;
}