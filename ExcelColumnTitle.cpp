#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    //Interview Question of Microsoft
    //Title : COLUMN TITLE IN EXCEL SHEET
    //Program to print the corresponding title of a given column number in excel sheet.
    int n,i = -1,remain,j,temp;
    char str[500],temp_char;
    cin>>n;
    temp = n;
    while(n>0){
        remain = n%26;
        if(remain == 0){
            str[++i] = 'Z';
            n = n/26 - 1;
        }
        else{
            str[++i] = 'A' + (remain -1);
            n = n/26;
        }
    }
    str[++i] = '\0';
    for(j = 0;j<i/2;j++){
        temp_char = str[j];
        str[j] = str[i-j-1];
        str[i-j-1] = temp_char;
    }
    cout<<"Corresponding column title for "<<temp<<" will be : "<<str<<endl;
    return 0;
}
