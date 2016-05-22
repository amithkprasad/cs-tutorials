#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
 int num,fact=1;
 cout<< "enter integer";
 cin>>num;
 while(num!=0)
 {
   
   fact*=num;
   --num;
 }
 cout<< "the factorial is "<<fact;
}
