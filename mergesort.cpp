
#include<bits/stdc++.h>
using namespace std; ///merge sort
void merge(int *arr,int low,int high,int mid) {
    int left=low,right=mid+1;
    vector<int> temp;
    while(left<=mid && right<=high)
    if(arr[left]<=arr[right]) {
        temp.push_back(arr[left]);
        left++;
    }
    else {
        temp.push_back(arr[right]);
        right++;
    }
    while(left<=mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high) {
        temp.push_back(arr[right]); right++;
    }
    for(int i=0;i<temp.size();i++) {
        arr[low+i]=temp[i];
    }
}
void mergesort(int *arr,int low,int high) {
    if(low>=high) return;
    int mid=(low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,high,mid);
}
int main() {
    int arr[6]={4,5,6,2,3,1};
    int n=6;
    int low=0,high=n-1;
    mergesort(arr,low,high);
    for(int i=0;i<n;i++) {
        cout<<" "<<arr[i];
    }
}
