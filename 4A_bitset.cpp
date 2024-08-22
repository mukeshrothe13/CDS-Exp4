//Mukesh Rothe //23070123089 //CDS EXP4
#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"A|B: "<<bitset<4>(a|b)<<endl;
    cout<<"A&B: "<<bitset<4>(a&b)<<endl;
    cout<<"A<<B: "<<bitset<4>(a<<b)<<endl;
    cout<<"A>>B: "<<bitset<4>(a>>b)<<endl;
    cout<<"~B: "<<bitset<4>(~b)<<endl;
    cout<<"A^B: "<<bitset<4>(a^b)<<endl;
    return 0;
}
