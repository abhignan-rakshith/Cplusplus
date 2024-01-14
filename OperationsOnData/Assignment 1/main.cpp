#include <iostream>

/*Notice the (9.0 / 5) for no loss precision.*/

int main(){

	double celsius;
	double fahrenheit;

	std::cout << "Please enter a degree value in Celsius :" << std::endl;
	std::cin >> celsius;

	fahrenheit = (9.0 / 5) * celsius + 32;

	std::cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit." << std::endl;

    return 0;
}