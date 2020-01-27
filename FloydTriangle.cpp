#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    //Program to print Floyd Triangle using Number.
    int n,i,j,count = 1;
    cin>>n;
    cout<<"Floyd Triangle of Numbers->"<<endl;
    for(i = 1;i<=n;i++){
        for(j = 1;j<=i;j++){
            cout<<count++<<" ";
        }
        cout<<endl;
    }
    return 0;
}
