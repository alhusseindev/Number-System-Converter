#include <iostream>
#include <bitset>


int convertToBinary(std::string str_num){
    int binary;
    binary = (int) std::bitset<64>(str_num).to_ulong();
    return binary;
}


int main(){
    std::cout << "Please should your preferrence:\n1= Conversion\n2= Calculation" << std::endl;
    int choice;
    char operation;
    std::cin >> choice;
    std::cout << "Please choose your input system" << std::endl;
    std::cout << "1= Hex\n2= Oct\n3= Dec\n4= Binary" << std::endl;
    int user_input;
    std::string user_number;
    //int user_number;
    std::cin >> user_input;
    int binary_n;
    int num1;
    int num2;
    if(choice == 1){
        switch(user_input){
            case 1:
                try{
                    int result;
                    std::cout << "Please enter the Hex number you would like to convert" << std::endl;
                    std::cin >> std::hex >> user_number;
                    result = convertToBinary(user_number);
                    std::cout << "The octal conversion of your number is: " << std::oct << user_number << std::endl;
                    std::cout << "The Dec conversion of your number is: " << std::dec << user_number << std::endl;
                    std::cout << "The binary conversion of your number is: " << result << std::endl;
                }catch(...){
                    std::cerr << "Make sure you are entering an Hex number" << std::endl;
                }
                break;
            case 2:
                try{
                    int result;
                    std::cout << "Please enter the Oct number you would like to convert" << std::endl;
                    std::cin >> std::oct >> user_number; //user inputs oct number
                    result = convertToBinary(user_number);
                    std::cout << "The Hex conversion of your number is: " << std::hex << user_number << std::endl;
                    std::cout << "The Dec conversion of your number is: " << std::dec << user_number << std::endl;
                    std::cout << "The binary conversion of your number is: " << result << std::endl;
                }catch(...){
                    std::cerr << "Make sure you are entering an Oct number" << std::endl;
                }
                break;
            case 3:
                try{
                    int result;
                    std::cout << "Please enter the Dec number you would like to convert" << std::endl;
                    std::cin >> std::dec >> user_number; //user inputs dec number
                    result = convertToBinary(user_number);
                    std::cout << "The Hex conversion of your number is: " << std::hex << user_number << std::endl;
                    std::cout << "The octal conversion of your number is: " << std::oct << user_number << std::endl;
                    std::cout << "The binary conversion of your number is: " << result << std::endl;
                }catch(...){
                    std::cerr << "Make sure you are entering a Dec number" << std::endl;
                }
                break;
            case 4:
                std::cout << "Please enter the Binary number you would like to convert" << std::endl;
                std::cin >> user_number;
                try{
                    binary_n = convertToBinary(user_number);
                    std::cout << "The Hex conversion of your number is: " << std::hex << binary_n << std::endl;
                    std::cout << "The Dec conversion of your number is: " << std::dec << binary_n << std::endl;
                    std::cout << "The octal conversion of your number is: " << std::oct << binary_n << std::endl;
                }catch(...){
                    std::cerr << "Make sure you are entering a binary number" << std::endl;
                }
                break;
            default:
                std::cout << "Please choose an option from the available options [1 - 4]" << std::endl;
        }
    }else if(choice == 2){
        std::cout << "What operations would you like to use\n+\n-\n*\n/\n" << std::endl;
        std::cin >> operation;
        //calculation
        switch(operation){
            case '+':
                switch(user_input){
                    case 1:
                        try{
                            std::cout << "Please enter the first number" << std::endl;
                            std::cin >> std::hex >> num1;
                            std::cout << "Please enter the second number" << std::endl;
                            std::cin >> std::hex >> num2;
                            int result = num1 + num2;
                            std::cout <<"The result is: " << std::hex << result << std::endl;
                        }catch(...){
                            std::cerr << "Make sure you are entering right input" << std::endl;
                        }
                        break;
                    case 2:
                        try{
                            std::cout << "Please enter the first number" << std::endl;
                            std::cin >> std::oct >> num1;
                            std::cout << "Please enter the second number" << std::endl;
                            std::cin >> std::oct >> num2;
                            int result = num1 + num2;
                            std::cout <<"The result is: " << std::oct << result << std::endl;
                        }catch(...){
                            std::cerr << "Make sure you are entering right input" << std::endl;
                        }
                        break;
                    case 3:
                        try{
                            std::cout << "Please enter the first number" << std::endl;
                            std::cin >> std::dec >> num1;
                            std::cout << "Please enter the second number" << std::endl;
                            std::cin >> std::dec >> num2;
                            int result = num1 + num2;
                            std::cout <<"The result is: " << std::dec << result << std::endl;
                        }catch(...){
                            std::cerr << "Make sure you are entering right input" << std::endl;
                        }
                        break;
                    case 4:
                        try{
                            std::string mybinary_num;
                            std::string mybinary_num2;
                            std::cout << "Please enter the first number" << std::endl;
                            std::cin >> mybinary_num;
                            int mybinary_num_int = convertToBinary(mybinary_num);
                            std::cout << "Please enter the second number" << std::endl;
                            std::cin >> mybinary_num2;
                            int mybinary_num2_int = convertToBinary(mybinary_num2);
                            int result = mybinary_num_int + mybinary_num2_int;
                            std::cout <<"The result is: " << result << " in Decimal System after conversion" << std::endl;
                        }catch(...){
                            std::cerr << "Make sure you are entering right input" << std::endl;
                        }
                        break;
                }
            break;
            case '-':
                switch(user_input){
                    case 1:
                        try{
                            std::cout << "Please enter the first number" << std::endl;
                            std::cin >> std::hex >> num1;
                            std::cout << "Please enter the second number" << std::endl;
                            std::cin >> std::hex >> num2;
                            int result = num1 - num2;
                            std::cout <<"The result is: " << std::hex << result << std::endl;
                        }catch(...){
                            std::cerr << "Make sure you are entering right input" << std::endl;
                        }
                        break;
                    case 2:
                        try{
                            std::cout << "Please enter the first number" << std::endl;
                            std::cin >> std::oct >> num1;
                            std::cout << "Please enter the second number" << std::endl;
                            std::cin >> std::oct >> num2;
                            int result = num1 - num2;
                            std::cout <<"The result is: " << std::oct << result << std::endl;
                        }catch(...){
                            std::cerr << "Make sure you are entering right input" << std::endl;
                        }
                        break;
                    case 3:
                        try{
                            std::cout << "Please enter the first number" << std::endl;
                            std::cin >> std::dec >> num1;
                            std::cout << "Please enter the second number" << std::endl;
                            std::cin >> std::dec >> num2;
                            int result = num1 - num2;
                            std::cout <<"The result is: " << std::dec << result << std::endl;
                        }catch(...){
                            std::cerr << "Make sure you are entering right input" << std::endl;
                        }
                        break;
                    case 4:
                        try{
                            std::string mybinary_num;
                            std::string mybinary_num2;
                            std::cout << "Please enter the first number" << std::endl;
                            std::cin >> mybinary_num;
                            int mybinary_num_int = convertToBinary(mybinary_num);
                            std::cout << "Please enter the second number" << std::endl;
                            std::cin >> mybinary_num2;
                            int mybinary_num2_int = convertToBinary(mybinary_num2);
                            int result = mybinary_num_int - mybinary_num2_int;
                            std::cout <<"The result is: " << result << " in Decimal System after conversion" << std::endl;
                        }catch(...){
                            std::cerr << "Make sure you are entering right input" << std::endl;
                        }
                        break;
                }

            break;
            case '*':
                switch(user_input){
                    case 1:
                        try{
                            std::cout << "Please enter the first number" << std::endl;
                            std::cin >> std::hex >> num1;
                            std::cout << "Please enter the second number" << std::endl;
                            std::cin >> std::hex >> num2;
                            int result = num1 * num2;
                            std::cout <<"The result is: " << std::hex << result << std::endl;
                        }catch(...){
                            std::cerr << "Make sure you are entering right input" << std::endl;
                        }
                        break;
                    case 2:
                        try{
                            std::cout << "Please enter the first number" << std::endl;
                            std::cin >> std::oct >> num1;
                            std::cout << "Please enter the second number" << std::endl;
                            std::cin >> std::oct >> num2;
                            int result = num1 * num2;
                            std::cout <<"The result is: " << std::oct << result << std::endl;
                        }catch(...){
                            std::cerr << "Make sure you are entering right input" << std::endl;
                        }
                        break;
                    case 3:
                        try{
                            std::cout << "Please enter the first number" << std::endl;
                            std::cin >> std::dec >> num1;
                            std::cout << "Please enter the second number" << std::endl;
                            std::cin >> std::dec >> num2;
                            int result = num1 * num2;
                            std::cout <<"The result is: " << std::dec << result << std::endl;
                        }catch(...){
                            std::cerr << "Make sure you are entering right input" << std::endl;
                        }
                        break;
                    case 4:
                        try{
                            std::string mybinary_num;
                            std::string mybinary_num2;
                            std::cout << "Please enter the first number" << std::endl;
                            std::cin >> mybinary_num;
                            int mybinary_num_int = convertToBinary(mybinary_num);
                            std::cout << "Please enter the second number" << std::endl;
                            std::cin >> mybinary_num2;
                            int mybinary_num2_int = convertToBinary(mybinary_num2);
                            int result = mybinary_num_int * mybinary_num2_int;
                            std::cout <<"The result is: " << result << " in Decimal System after conversion" << std::endl;
                        }catch(...){
                            std::cerr << "Make sure you are entering right input" << std::endl;
                        }
                        break;
                }

            break;
            case '/':
                switch(user_input){
                    case 1:
                        try{
                            std::cout << "Please enter the first number" << std::endl;
                            std::cin >> std::hex >> num1;
                            std::cout << "Please enter the second number" << std::endl;
                            std::cin >> std::hex >> num2;
                            int result = num1 / num2;
                            std::cout <<"The result is: " << std::hex << result << std::endl;
                        }catch(...){
                            std::cerr << "Make sure you are entering right input" << std::endl;
                        }
                        break;
                    case 2:
                        try{
                            std::cout << "Please enter the first number" << std::endl;
                            std::cin >> std::oct >> num1;
                            std::cout << "Please enter the second number" << std::endl;
                            std::cin >> std::oct >> num2;
                            int result = num1 / num2;
                            std::cout <<"The result is: " << std::oct << result << std::endl;
                        }catch(...){
                            std::cerr << "Make sure you are entering right input" << std::endl;
                        }
                        break;
                    case 3:
                        try{
                            std::cout << "Please enter the first number" << std::endl;
                            std::cin >> std::dec >> num1;
                            std::cout << "Please enter the second number" << std::endl;
                            std::cin >> std::dec >> num2;
                            int result = num1 / num2;
                            std::cout <<"The result is: " << std::dec << result << std::endl;
                        }catch(...){
                            std::cerr << "Make sure you are entering right input" << std::endl;
                        }
                        break;
                    case 4:
                        try{
                            std::string mybinary_num;
                            std::string mybinary_num2;
                            std::cout << "Please enter the first number" << std::endl;
                            std::cin >> mybinary_num;
                            int mybinary_num_int = convertToBinary(mybinary_num);
                            std::cout << "Please enter the second number" << std::endl;
                            std::cin >> mybinary_num2;
                            int mybinary_num2_int = convertToBinary(mybinary_num2);
                            int result = mybinary_num_int / mybinary_num2_int;
                            std::cout <<"The result is: " << result << " in Decimal System after conversion" << std::endl;
                        }catch(...){
                            std::cerr << "Make sure you are entering right input" << std::endl;
                        }
                        break;
                }
            break;
            default:
                std::cout << "Please choose an option from the available options [+ - * /]" << std::endl;

        }
        



    }else{
        std::cerr << "Option not available - only 1 or 2!" << std::endl;
    }
    



}