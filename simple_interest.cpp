#include<iostream>
using namespace std;
int main(){
    float p;//principal amount
    float r;//rate of interest 3%
    float t;//time in days
    cout<<"enter principal amount:";
    cin>>p;
    cout<<"enter rate of interest:";
    cin>>r;
    cout<<"enter time:";
    cin>>t;
    float SI=(p*r*t)/100;//simple interest formula
    cout<<SI;
}