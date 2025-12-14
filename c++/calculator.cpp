//calculator project

#include <iostream>

int main(){

    char operation;
    double  num1;
    double num2;
    double result;

    std::cout << "******* CALCULATOR ******* \n"; // start

    std::cout << "Enter either +, -, * or /: ";
    std::cin >> operation;

    std::cout << "Enter number 1: ";
    std::cin >> num1;

    std::cout << "Enter number 2: ";
    std::cin >> num2;

    switch(operation){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 != 0){
                result = num1 / num2;
            } else {
                std::cout << "Error: Division by zero!" << std::endl;
                return 1;
            }
            break;
        default:
            std::cout << "Error: Invalid operation!" << std::endl;
            return 1;
    }

    std::cout << "Result: " << result << std::endl;
    std::cout << "******* CALCULATOR *******";  //end 


    return 0;
}

// end of code 