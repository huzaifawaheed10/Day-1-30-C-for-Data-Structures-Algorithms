#include<iostream>
using namespace std;
int main(){
    float volume;
    float radius;
    cout<<"enter volume:";
    cin>>volume;
    cout<<"enter radius:";
    cin>>radius;
    float V=(4/3)*3.14*(radius*radius*radius);
    cout<<V;
}