#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> v1(n);
    vector<int> v2(m);
    for(int i = 0; i<n; i++){
        cin >> v1[i];
    }

    for(int i = 0; i<m; i++){
        cin >> v2[i];
    }

    vector<int> v;

    int i = 0;
    int j = 0;
    
    while(i<n && j<m){
        if(v1[i]<v2[j]){
            v.push_back(v1[i]);
            i++;
        }else{
            v.push_back(v2[j]);
            j++;
        }
    }

    for(int i =0; i<v.size(); i++){
        cout << v[i] << " ";
    }
}