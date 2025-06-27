//Interest Earned Program

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
double principal, rate, T, amount;
    cout << "Enter the principal: ";
    cin >> principal;
    cout << "Enter the interest rate: ";
    cin >> rate;
    cout << "Enter the number of times the interest is compounded (T is 4 if the interest is compounded quarterly): ";
    cin >> T;

   amount = principal * pow((1 + (rate / T)), (T * 1));
  cout << amount << endl;
}
