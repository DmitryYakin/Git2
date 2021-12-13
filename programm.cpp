#include "funcs.h"
#include <iostream>
using namespace std;
int main()
{
    double a,b,i;
cout<<"Enter operation's number which u wanna do"<<endl;
cout<<"1 - Sum, 2- Minus, 3 - Umnozhenie, 4 - delenie"<<endl;
cin>>i;
cout<< "enter 2 numbers"<<endl;
cin>>a>>b;
switch (i){
case 1: cout<< Plus(a,b) <<endl;
break;
case 2:  cout<<Minus(a,b )<<endl;
break;
case 3:  cout<<"rabotaem nad etim" <<endl;
break;
case 4: cout<<"rabotaem nad etim" <<endl;
break;
default: cout<<"Sorry but u enter wrong symbol"<<endl;
break;
}
    system("pause");
return 0;
}