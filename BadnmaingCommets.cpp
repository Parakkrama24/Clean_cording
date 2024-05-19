#include <iostream>

using namespace std;



//This method calculates the employee's yearly salary 
 double calculateAnnualSalary() { 
    int monthlySalary=55000;
 // Set i to monthlySalary
 double i = monthlySalary; 
 // Multiply i by 12 and assign to annualSalary
 double annualSalary = i * 12; 
 return annualSalary;
}

int main(){

    int diatance= 100;
    float speed=5;
    float time = diatance/speed;

    cout <<time<< endl;

    return 0;
}


