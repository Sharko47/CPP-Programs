#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    //Program to convert decimal number to Binary number.
    int n,i = -1,temp;
    cin>>n;
    temp = n;
    int *arr = new int [n];
    while(n!=0){
        i++;
        arr[i] = n%2;
        n/=2;
    }
    cout<<"Binary equivalent of "<<temp<<" -> ";
    for(int j = i;j>=0;j--){
        cout<<arr[j];
    }
    return 0;
}
