#include <iostream>
using namespace std;
main()
{
    int num, sum;
    cout << "Enter a Number :- ";
    cin >> num;
    sum = num * (num + 1);
    sum = sum / 2;
    cout << "Sum of the series is :- " << sum;
}