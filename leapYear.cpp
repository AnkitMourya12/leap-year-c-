#include<iostream>
using namespace std;
int main()
{


int year;
cin>>year;
if(year%400==0 &&year%4==0)
{
    cout<<"Its a Leap year"<<endl;

}
else{
    cout<<"It is not a leap year";

}
return 0;
}