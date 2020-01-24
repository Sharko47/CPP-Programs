#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    //Program to print the elements only if it's adjacent elements are even. Else print -1 as the output.
    //Note: The first and last elements has only one adjacent element.
    int n, i;
    cin >> n;
    int *arr = new int[n + 1];
    for (i = 0; i < n; i++)
    {
        cin >> *(arr + i);
    }
    for (i = 0; i < n; i++)
    {
        if (i == 0 && arr[i+1]%2==0)
        {
          cout<<*(arr+i)<<" ";
        }
        else if(i==n-1 && arr[i-1]%2==0){
            cout<<*(arr+i)<<" ";
        }
        else if((*(arr+i+1)%2==0) && (*(arr+i-1)%2==0)){
            cout<<*(arr+i)<<" ";
        }else{
            cout<<-1<<" ";
        }
    }
    return 0;
}
