#include<iostream>
using namespace std;

struct Number
{
    int num1, num2, num3, num4, num5;
};

Number add(Number);

int main()
{
    Number N;
    N.num1=10;
    N.num2=20;
    N.num3=30;
    N.num4=40;
    N.num5=50;
    Number res =add(N);
    cout<<res.num1<<endl;
    cout<<res.num2<<endl;
    cout<<res.num3<<endl;
    cout<<res.num4<<endl;
    cout<<res.num5<<endl;
    return 0;
}

Number add(Number result)
{
    result.num1+=result.num1;
    result.num2+=result.num2;
    result.num3+=result.num1;
    result.num4+=result.num4;
    result.num5+=result.num5;
    return result;
}
