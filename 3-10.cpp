#include<iostream>
using namespace std;

int maxnum(int a,int b)
{
    while(b!=0)
    {
        int temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}

int main()
{
    int m,n;
    cout<<"请输入两个整数";
    cin>>m>>n;

    int max=maxnum(m,n);
    int min=m*n/max;
    cout<<"最大公约数是"<<max<<endl;
    cout<<"最小公倍数是"<<min<<endl;
    return 0;
}
