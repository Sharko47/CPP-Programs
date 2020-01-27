#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    //Program to find if a number is a perfect number or not.
    //A positive integer that is equal to the sum of its proper divisor is called Perfect Number.
    //eg: 6,28,496.
    int n,i,sum = 0;
    cin>>n;
    for(i=1;i<=n/2;i++){
        if(n%i==0){
            sum += i;
        }
    }
    (sum==n)?cout<<"Perfect Number":cout<<"Not a Perfect Number";
    return 0;
}
