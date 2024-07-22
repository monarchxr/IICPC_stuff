#include<bits/stdc++.h>
using namespace std;

//my code for sum_of_2_values, resulted in TLE
//O(n^2) time complexity

int main(){
    int n,x;
    cin >> n >> x;
    int arr[n];

    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i]+arr[j]==x){
                cout << i+1 << " " << j+1;
                return 0;
            }
        }
    }

    cout << "IMPOSSIBLE";
}