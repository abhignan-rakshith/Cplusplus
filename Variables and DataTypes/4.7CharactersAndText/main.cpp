#include <iostream>

/*
My learning notes:
1. Use single quotes to define a character.
2. Character uses 1 byte in memory.
3. If you store a number in a char variable, it will display ASCII value while printing.
4. We can type caste using static_cast<int> to convert it to integer.
*/

int main(){

	char character1 {'a'};
    char character2 {'r'};
    char character3 {'r'};
    char character4 {'o'};
    char character5 {'w'};
    
    std::cout << character1 << std::endl;
    std::cout << character2 << std::endl;
    std::cout << character3 << std::endl;
    std::cout << character4 << std::endl;
    std::cout << character5 << std::endl;

    //One byte in memory : 2^8 = 256 different values (0 ~ 255)
    std::cout << "-----------------------------------" << std::endl;
    
    char value = 65 ; // ASCII character code for 'A'
    std::cout << "value : " << value << std::endl; // A
    std::cout << "value(int) : " << static_cast<int>(value) << std::endl; 

    return 0;
}