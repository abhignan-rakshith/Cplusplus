#include <iostream>
/*
This is a C++ 20 feature
The multiplier is initialized in the range based for loop
*/

int main(){


    for(double multiplier{24}; auto i : {1,2,3,4,5,6,7,8,9,10}){
        std::cout << "result : " << ( i * multiplier) << std::endl;
    }
    float multiplier {15.5f};
    std::cout << sizeof(multiplier) << std::endl;
   
    return 0;
}