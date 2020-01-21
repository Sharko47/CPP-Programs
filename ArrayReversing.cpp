#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    //Program to reverse an array.
    int n;
    cin>>n;
    int arr[n+1];
    int left = 0;
    int right = n-1;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    while(left<right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
    cout<<"Reversed Array:\t";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}