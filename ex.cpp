#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    /*
    Interview Question of ZOHO
    Program to print pattern given below->
    5     1
     4   2
       3
     2   4
    1     5
    */
   int n,i,j,temp;
   cin>>n;
   temp = n;
   for(i = n;i>=1;i--){
       for(j = 1;j<=n;j++){
           if(j == (n-i)+1){
               cout<<i;
           }
           else if(j == temp){
               cout<<(n-i)+1;
               temp--;
           }
           else{
               cout<<"  ";
           }
       }
       cout<<endl;
   }
    return 0;
}
