// Chapter 2 Problem 3.cpp
//

#include <iostream>

int main()
{
    int customers = 16500;
	int percentWhoBuyOnePerWeek = 15;
	int percentWhoPreferCitrus = 58;
	int customersWhoBuyOnePerWeek = customers * percentWhoBuyOnePerWeek / 100;
    std::cout << "Number of customers: " << customers << "\n";
	std::cout << "Approximate number of customers who buy at least one drink per week: " << customersWhoBuyOnePerWeek << "\n";
	std::cout << "Approximate number of customers who buy at least one drink per week and prefer citrus-flavored drinks: " << (customersWhoBuyOnePerWeek * percentWhoPreferCitrus / 100) << "\n";
}
