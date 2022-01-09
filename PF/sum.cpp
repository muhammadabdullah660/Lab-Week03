#include <iostream>
using namespace std;
main(){
int num1,num2,sum;
float num;
cout << "Enter Number 1 :- ";
cin >> num1;
cout << "Enter Number 2 :- ";
cin >> num2;
num = num2 - (num1 - 1);
sum = (num/2)*(num1+num2);
cout << "Sum :- " << sum;

}