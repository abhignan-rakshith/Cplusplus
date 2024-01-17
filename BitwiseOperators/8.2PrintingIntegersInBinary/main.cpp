#include <iostream>
#include <bitset>

/*
Learn how to use std::showbase, std::dec, std::oct, std::hex and std::bitset
*/


int main(){

    unsigned short int data {255};

    std::cout << "data (dec) : " <<std::showbase <<  std::dec << data << std::endl;
    std::cout << "data (oct) : " <<std::showbase <<  std::oct << data << std::endl;
    std::cout << "data (hex) : " <<std::showbase <<  std::hex << data << std::endl;
    std::cout << "data (bin) : " << std::bitset<16>(data) << std::endl;
   
    return 0;
}