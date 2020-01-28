#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    //Program to print whether a given number is a SPY number or Not.
    //A number is said to be SPY number if its digits sum and product are equal to each other.
    //Input : 123
    //Output: Sum = 1+2+3 = 6
    //        Product = 1*2*3 = 6
    int n,sum = 0,product = 1,temp;
    cin>>n;
    temp = n;
    while (n>0)
    {
        sum += (n%10);
        product *= (n%10);
        n/=10;
    }
    if(sum == product){
        cout<<temp<<" is a SPY number.";
    }else{
        cout<<temp<<" is a not SPY number.";
    }
    
    return 0;
}
