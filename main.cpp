// Math Tutor Program

#include <iostream>
#include <iomanip>
#include <random>

using namespace std;

int main()

{
//Initialize the variable for the two random numbers and the correct answer.
  int correctAnswer, number1, number2;
//Create two random numbers between 100 and 999 and store them in number1 and number2
  random_device numberEngine;
  uniform_int_distribution<int> firstNumber(100, 999);
  uniform_int_distribution<int> secondNumber(100, 999);
  number1 = firstNumber(numberEngine);
  number2 = secondNumber(numberEngine);

//Calculate the correct answer 
  correctAnswer = number1 + number2;

//Display the two random numbers and prompt the user to calculate the correct answer
  cout << "Calculate " << number1 << " + " << number2 << ". Then, press the Enter key when you are ready to view the correct answer." << endl;
//Display the correct answer after the user presses the Enter key
  cin.get();
  cout << "The correct answer is: " << correctAnswer << endl;
}