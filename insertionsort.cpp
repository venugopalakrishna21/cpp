#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int n,int arr[]) {  ////tc worst,avg =o(n sq)  best=o(n)
    for(int i=0;i<n;i++) {
        int j=i;            ///check 1 2 then swap then 1 2 3 then swap then 1 2 3 4 ......
        while(j>0 && arr[j-1]>arr[j]) {
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
    for(int i=0;i<n;i++) {
        cout<<" "<<arr[i];
    }
}
int main() {
    int a,n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    insertion_sort(n,arr);
}
