#include<bits/stdc++.h>
using namespace std;
void selection_sort(int n,int arr[]) {          ////tc is all o(n square)
    for(int i=0;i<n-1;i++) {
        int mini=i;
        for(int j=i;j<n;j++) {
            if(arr[j]<arr[mini]) {
                mini=j;
            }
        }
        // arr[i]=arr[i]+arr[mini];         ///// this may give error
        // arr[mini]=arr[i]-arr[mini];
        // arr[i]=arr[i]-arr[mini];
        int temp;
        temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;

    }
    for(int i=0;i<n;i++) {
        cout<<" "<<arr[i];
    }


}int main() {
    int a,n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
  selection_sort(n,arr);
   
}
