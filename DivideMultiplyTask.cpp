#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    //Write a program which takes an positive integer n,if n is even the divide it by 2(n/2), else multiply it
    //by 3 and add 1 (3n+1). Repeat this task until the number becomes 1.
    int n,result = 0;
    cin>>n;
    while(n!=1){
        cout<<n<<" ";
        if(n%2 == 0){
            n/= 2;
        }
        else{
            n = 3 * n + 1;
        }
    }
    cout<<1;
    return 0;
}
