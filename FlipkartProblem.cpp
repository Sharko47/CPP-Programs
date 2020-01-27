#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    //Interview Question of Flipkart
    //Title: Distinct Combination to reach given score.
    //Program to print to find number of ways to reach a given score
    //can be reached in a game where move can earn 3 or 5 or 10
    //Eg. Input : 20
    //    Output : 4
    //There are 4 following ways to reach 20->
    //1. (10,10)
    //2. (5,5,10)
    //3. (5,5,5,5)
    //4. (3,3,3,3,3,5)
    int n,i;
    cin>>n;
    int a[n+1] = {0};//Initializing all array elements to zero.
    a[0] = 1;//Base Case.
    for(i = 3;i<=n;i++){
        a[i] += a[i-3];
    }
    
    for(i = 5;i<=n;i++){
        a[i] += a[i-5];
    }
    
    for(i = 10;i<=n;i++){
        a[i] += a[i-10];
    }
    //All the values from 0 to n is filled.
    cout<<"Number of Ways to Reach -> "<<n<<" : "<<a[n];//Printing the nth array element.
    return 0;
}
