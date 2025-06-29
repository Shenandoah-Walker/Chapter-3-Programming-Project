//Ingredient Adjuster Program

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
//Create variables for the original measurements for the original number of cookies.
const double recipeSugar = 1.5, recipeButter = 1, recipeFlour = 2.75, recipeCookies = 48;
  
/*Create variables for the new measurements for the new number of cookies and initialize the number of cookies entered by the user.*/
double newSugar, newButter, newFlour, newCookies;

//Prompt the user to input the value for newCookies, the number of cookies the user wants to make.
cout << "How many cookies would you like to make? ";
cin >> newCookies;

//Calculate the new measurements for the new number of cookies.
newSugar = (recipeSugar / recipeCookies) * newCookies;
newButter = (recipeButter / recipeCookies) * newCookies;
newFlour = (recipeFlour / recipeCookies) * newCookies;

//Print the new measurements for the new number of cookies to the console.
cout << "To make " << newCookies << " cookie(s), you will need: " << endl;
cout << newSugar << " cup(s) of sugar" << endl;
cout << newButter << " cup(s) of butter" << endl;
cout << newFlour << " cup(s) of flour" << endl;


return 0;
}
