#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char stra[50]="china";
    char strb[]="Beijing";
    char strc[]="shanghai";
    cout<<stra<<'\t'<<strb<<endl;
    strcpy(stra,strb);
    cout<<stra<<'\t'<<strb<<endl;
    strcat(stra,strc);
    cout<<stra<<'\t'<<strb<<endl;
    int x1,x2,x3;
    x1=strcmp("China","Russia");
    x2=strcmp("China","China");
    x3=strcmp("China","Beijing");
    cout<<"x1="<<x1<<endl;
    cout<<"x2="<<x2<<endl;
    cout<<"x3="<<x3<<endl;
    cout<<stra<<"length is:"<<strlen(stra)<<endl;
    return 0;
}
