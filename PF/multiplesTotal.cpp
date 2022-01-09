#include <iostream>
using namespace std;
main(){
int num1,num2,total,total1,total2;
cout << "Enter an Integer Number 1 :- ";
cin >> num1;
cout << "Enter an Integer Number 2 :- ";
cin >> num2;
cout << "Multiples of " << num1 << " are :- " << num1 << " " << num1*2 << " " << num1*3 << " " << num1*4 << " " << num1*5 <<endl; 
cout << "Multiples of " << num2 << " are :- " << num2 << " " << num2*2 << " " << num2*3 << " " << num2*4 << " " << num2*5  <<endl; 
total1 = num1 + num1*2 + num1*3 + num1*4 + num1*5; 
total2 = num2 + num2*2 + num2*3 + num2*4 + num2*5; 
total= total1+total2;
cout << "The total of first five multiples of " << num1 << " and " << num2 << " is " << total;

} 