#include<bits/stdc++.h>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

void mergesort(int arr[], int const begin, int const end){
    if(begin>=end){
        return;
    }

    int mid = begin + (end-begin) / 2;

    mergesort(arr,begin,mid);
    mergesort(arr, mid+1, end);

    vector<int> v(end-begin+1);

    merge(arr+begin,arr+mid+1,arr+mid+1,arr+end+1, v.begin());
    copy(v.begin(), v.end(), arr+begin);
}

int main(){
    int n;
    cout << "Enter size of array: " ;
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Sorted array is: \n";
    mergesort(arr, 0, n-1);

    for(int i =0; i<n; i++){
        cout << arr[i] << " ";
    }
}
