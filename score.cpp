#include<iostream>
using namespace std;
int main() {
    int score;
    cout<<"请给电影打分";
    cin>>score;
    if(score==9||score==10)
    {
        cout<<"你认为电影经典"<<endl;
    }
    else if(score==7||score==8)
    {
        cout<<"你认为电影非常好"<<endl;
    }
    else if(score==6||score==5)
    {
        cout<<"你认为电影一般"<<endl;
    }
    else
    {
        cout<<"你认为电影是烂片"<<endl;
    }
    return 0;
}
