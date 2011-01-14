// ComputeArea.cpp

#include <iostream>

int main()
{
	double radius;
	double area;
	
	// Step 1: Read in the radius
	radius = 20;
	
	// Step 2: Compute area
	area = radius * radius * 3.14159;
	
	// Step 3: Display the area
	std::cout << "The area is ";
	std::cout << area << std::endl;
	
	return 0;
}
