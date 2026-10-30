#include<iostream>
using namespace std;

short int func(unsigned short int a,unsigned short int b)
{
    if(b==0)
    {
        return -1;
    }
    return static_cast<short int>(a/b);
}
int main()
{
    unsigned short int x,y;
    cout<<"请输入两个整数";
    cin>>x>>y;
    short int res=func(x,y);
    if(res==-1)
    {
        cout<<"错误，除数不为0"<<endl;
    }
    else
    {
        cout<<"相除结果="<<res<<endl;
    }
    return 0;
}
