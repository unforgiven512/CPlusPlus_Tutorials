// ComputeArea1.cpp

#include <iostream>

int main()
{
	// Step 1: Read in the radius
	double radius;
	std::cout << "Enter a radius: ";
	std::cin >> radius;
	
	// Step 2: Compute area
	double area = radius * radius * 3.14159;
	
	// Step 3: Display the area
	std::cout << "The area is " << area << std::endl;
	
	return 0;
}
