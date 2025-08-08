#include <iostream>// input and output library
using namespace std;// standard namespace for cin and cout

int main (){
    
    int num1,num2,product;// integer variable number
    
    cout<<"Enter a number: ";// output enter number
    cin>>num1;// user input number
    cout<<"Enter another number: ";// output enter another number
    cin>>num2;// user input another number
    product = num1 * num2;// set the value of product as num 1 + num 2
    cout<<"The product of the two numbers is: "<<product;// output product of the numbers
    
    return 0;
}
