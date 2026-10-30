#include<iostream>
using namespace std;
bool primenum(int n)
{
    if(n<2)
    return false;
    
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
        return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cout<<"请输入一个整数";
    cin>>num;

    if(primenum(num))
    {
        cout<<num<<"是质数"<<endl;
    }
    else
    {
        cout<<num<<"不是质数"<<endl;
    }
    return 0;
