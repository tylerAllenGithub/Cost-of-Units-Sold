/*Tyler Allen
CS111
Assignment 3
Program 1
2-26-2015
This program will ask for number of units sold and computes the total cost*/

#include <iostream>
#include <iomanip>
using namespace std;
int num;
double discount;
double total;
int main(){

cout<<"Please enter the number of units sold: ";
cin>>num;
if(num<0)
  {
    cout<<"invalid units"<<endl;
  }
 else{
       if(num>=10&&num<=19)
       {
        discount=.20;
       }
       else if(num>=20&&num<=49)
       {
        discount=.30;
       }
       else if(num>=50&&num<=99)
       {
        discount=.40;
       }
       else if(num>=100)
       {
        discount=.50;
       }
       else
       {
	 discount=1.0;
       }

       total=(double)num*99.00-99.00*num*discount;
       cout<<"$"<<fixed<<setprecision(2)<<total<<endl;
     }

  return 0;
}
