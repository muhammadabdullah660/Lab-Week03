#include <iostream>
using namespace std;
main(){
float ecat,matric,inter;
float ecat_perct,matric_perct,inter_perct,total; 

cout << "Enter your Inter marks :- ";
cin >> inter;
cout << "Enter your Matric marks :- ";
cin >> matric;
cout << "Enter your ECAT marks :- ";
cin >> ecat;

ecat_perct = ecat/400*30;
matric_perct = matric/1100*25;
inter_perct = inter/1100*45;

total = ecat_perct + matric_perct + inter_perct;

cout << total;
} 