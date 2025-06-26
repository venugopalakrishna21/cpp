#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int n,int arr[]) {   ///swapping 1st two them 2nd 3rd then 3rd 4th like that in loop
    for(int i=n-1;i>=0;i--) {
        int count=0;
        for(int j=0;j<= i-1;j++) {       ////tc is worst o(n square), best o(n)
            if(arr[j]>arr[j+1]) {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                count++;
            }
        }
        if(count==0) {
            break;
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
    bubble_sort(n,arr);
   
}
