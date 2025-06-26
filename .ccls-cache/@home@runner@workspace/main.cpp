// Math Tutor Program

#include <iostream>
#include <iomanip>
#include <random>

using namespace std;

int main()

{
//Initialize the variable for the two random numbers and the correct answer
int correctAnswer, number1, number2;
  
//Create two random numbers between 100 and 999 and store them in number1 and number2
  random_device numberEngine;
  uniform_int_distribution<int> firstNumber(100, 999);
  uniform_int_distribution<int> secondNumber(100, 999);
number1 = firstNumber(numberEngine);
number2 = secondNumber(numberEngine);


cout << "Calculate " << number1 << " + " << number2 << ". Then, press any key when you are ready to view the correct answer." << endl;

//Calculate the correct answer
  correctAnswer = number1 + number2;
  cout << "The correct answer is " << correctAnswer << endl;
}