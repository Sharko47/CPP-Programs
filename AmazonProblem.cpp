#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    //Interview Question of Amazon
    //Given an integer as a input, write a code to replace all occurence of '0' with '5' in the integer.
    //Note : Use of Array to store all the digits is not allowed.
    int n,result = 0,temp,k = 1;
    cin>>n;
    temp = n;
    while(temp>0)
    {
        int rem = temp%10;
        if(rem == 0){
            rem = 5;
        }
        result = result + rem * k;
        temp=temp/10;
        k=k*10;
        }
    cout<<n<<" -> "<<result<<endl;
    return 0;
}
