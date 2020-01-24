#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    //Program to print the maximum number of contiguous even numbers in the array.
    int n,i,count = 0,max_count = 0;
    cin>>n;
    int *arr = new int[n+1];
    for(i = 0;i<n;i++){
        cin>>*(arr+i);
        if(*(arr+i)%2==0){
            count++;
        }else{
            if(max_count<=count){
                max_count = count;
            }
            count = 0;
        }
    }
    cout<<"Maximum Contiguous Even Numbers: "<<max(max_count,count);
    return 0;
}
