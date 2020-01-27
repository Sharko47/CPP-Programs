#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    //Program to print Size of an Array and String without using inbuilt function.
    int arr[] = {1,2,3,4,5,6,7,8,9,0},arr_len,str_len;
    char str[] = "Sharukh";
    arr_len = sizeof(arr)/sizeof(arr[0]);//Length of arr = 40/4 = 10
    str_len = sizeof(str)/sizeof(str[0])-1;//Length of string will be 8 coz "Sharukh\0" '\0' is used to tell the compiler that string is ending.
    cout<<arr_len<<" "<<str_len;
    return 0;
}
