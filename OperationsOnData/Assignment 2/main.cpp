#include <iostream>

/*Program to calculate area and volume of a box.*/

int main(){

	float length, width, height;
	std::cout << "Welcome to the Box Calculator. " 
	 << "Please enter the length, width and height information." << std::endl;

	std::cout << "Length: ";
	std::cin >> length;
	std::cout << "Width: ";
	std::cin >> width;
	std::cout << "Height: ";
	std::cin >> height;

	int base_area = length * width;
	int volume = base_area * height;

	std::cout << "The area is " << base_area << "." << std::endl;
	std::cout << "The volume is " << volume << "." << std::endl;

	 return 0;
}