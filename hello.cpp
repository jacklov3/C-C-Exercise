#include <iostream>
using namespace std;
#define N 10
void Input(int x[],int length);
void Output(int x[],int length);
void Sort(int x[],int length);
int main()
{
    int a[N];
    Input(a,N);
    cout<<"����ǰ��"<<endl;
    Output(a,N);
    Sort(a,N);
    cout<<"�����:"<<endl;
    Output(a,N);
    return 0;
}
void Input(int x[],int length){
    cout<<"������Ҫ�����"<<length<<"������"<<endl;
    for(int i=0;i<length;i++){
        cin>>x[i];
    }
}
void Output(int x[],int length){
    for(int i=0;i<length;i++)
    cout<<x[i]<<'\t';
    cout<<endl;
}
void Sort(int x[],int length){
    for(int i=0;i<length-1;i++){
         int index=i;
        for(int j=i+1;j<length;j++){
             if(x[j]>x[index]) index=j;
        }
        if(index!=i){
             int temp;
             temp = x[i];
             x[i]=x[index];
             x[index]=temp;
        }
    }
}
