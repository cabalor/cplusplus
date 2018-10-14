#include <iostream>
#include <cstdio>
#include <cstdlib>




int main() {

	double waga, wzrost, bmi;


	std::cout << "xx " << std::endl;

	std::cout << "podaj wage" << std::endl;

	std::cin >> waga;

	std::cout << "podaj wzrost" << std::endl;

	std::cin >> wzrost;
	/*if (wzrost > 1) {
		wzrost /= 100;
	}*/

	bmi = waga / (wzrost * wzrost);


	std::cout << bmi << std::endl;


}
