#include<iostream>
#include<string>

using namespace std;

int main()
{
    //TO DO
const double pi=3.14;
string full_name = "Nguyen Canh Hung";
int my_age = 20;
string my_adress ="TPHCM";
double money = 167.69;
cout<<full_name<<endl;
cout<<my_adress<<endl;
cout<<my_age<<endl;
cout<<money<<endl;
cout<<pi<<endl;
int number1=10;
int number2=20;
int result = number1 % number2;
cout<<result<<endl;
bool ktr= number1==number2;
bool ktr2= number1 != number2;
cout<<ktr<<endl;
cout<<ktr2<<endl;
int number3=3;
int number4=4;
bool ktr3= (number1>number2) && (number3<number4);
bool ktr4= (number1>number2) || (number3<number4);
cout<<ktr3<<endl;
cout<<ktr4<<endl;
   return 0; 
}