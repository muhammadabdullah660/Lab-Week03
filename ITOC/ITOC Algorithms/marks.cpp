#include <iostream>
using namespace std;
main(){
string name;
float test1,test2,test3,test4,test5,average;
cout << "Enter your Name :-";
cin >> name;
cout << "Enter test 1 marks :- ";
cin >> test1;
cout << "Enter test 2 marks :- ";
cin >> test2;
cout << "Enter test 3 marks :- ";
cin >> test3;
cout << "Enter test 4 marks :- ";
cin >> test4;
cout << "Enter test 5 marks :- ";
cin >> test5;
average = test1+test2+test3+test4+test5;
average= average/5;
cout << " Name :- " << name <<endl;
cout << " Test 1 marks :- " << test1 <<endl;
cout << " Test 2 marks :- " << test2 <<endl;
cout << " Test 3 marks :- " << test3 <<endl;
cout << " Test 4 marks :- " << test4 <<endl;
cout << " Test 5 marks :- " << test5 <<endl;
cout << " Average :- " << average <<endl;

}