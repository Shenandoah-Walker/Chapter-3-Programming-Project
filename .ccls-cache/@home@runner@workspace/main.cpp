//Interest Earned Program

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
/* Initialize variables: principal is the balance in the savings account, rate is the interest rate, T is the number of times the interest is compounded per year, and amount is the amount of money accumulated after one year, including interest.The values of these variables are inputted by the user.*/
double principal, rate, T, amount;
    cout << "Enter the principal: ";
    cin >> principal;
    cout << "Enter the interest rate: ";
    cin >> rate;
    cout << "Enter the number of times the interest is compounded (T is 4 if the interest is compounded quarterly): ";
    cin >> T;

    //Calculate the amount of money accumulated after one year, including interest.
   amount = principal * pow((1 + (rate / T)), (T * 1));

    //Output the results.
    cout << "Interest Rate: $" << rate << endl;
    cout << "Times Compounded: " << T << endl;
    cout << "Principal: $" << principal << endl;
    cout << "Interest: $" << amount - principal << endl;
    cout << "Amount in Savings: $" << amount << endl;
    
}
