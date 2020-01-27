#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    //Proogram to print the sum of digits of a number using for loop.
    int n,i,sum = 0;
    cin>>n;
    for(i = n;i>0;i/=10){
        sum += (i%10);
    }
    cout<<"Sum : "<<sum;
    return 0;
}
