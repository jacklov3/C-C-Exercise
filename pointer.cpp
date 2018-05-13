#include <iostream>
using namespace std;
int main()
{
    char string[] = "Hello World!";
    cout<<"转换前字符串为："<<string<<endl;
    char *s=string;
    while(*s!='\0'){
        if(*s>='a'&&*s<='z')
            *s-=32;
        ++s;
    } 
    cout<<"转换后字符串为："<<string<<endl;
    return 0;
}
