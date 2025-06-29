//Interest Earned Program

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
/* Initialize variables: principal is the balance in the savings account, rate is the interest rate, T is the number of times the interest is compounded per year, and amount is the amount of money accumulated after one year, including interest.The values of these variables are inputted by the user.*/
double principal, rate, T, amount;
    cout << "Enter the principal: $ ";
    cin >> principal;
    cout << "Enter the interest rate (do not include the % symbol): ";
    cin >> rate;
    cout << "Enter the number of times the interest is compounded (T is 4 if the interest is compounded quarterly): ";
    cin >> T;

    //Calculate the amount of money accumulated after one year, including interest.
   amount = principal * pow((1 + ((rate / 100) / T)), (T * 1));


    //Output the results, with all variables except T having two decimal places.
    cout << fixed << setprecision(2);
    cout << "Interest Rate: " << setw(13) << rate << "%" << endl;
    cout << "Times Compounded: " << setprecision(0) << setw(10) << T << endl;
    cout << "Principal:" << setprecision(2) << setw(11) << "$ " << principal << endl;
    cout << "Interest:" << setw(12) << "$ " << setw(7) << amount - principal << endl;
    cout << "Amount in Savings: $ " << amount << endl;
    
}
