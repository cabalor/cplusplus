#include <iostream>
#include <cstdio>
#include <cstdlib>


#define GETMAX
#define GETMIN



int main() {


    std::cout << "poadj trzy liczby" << std::endl;
	int jeden, dwa, trzy;

	std::cin >> jeden >> dwa >> trzy;

	std::cout << "wyniki " << jeden << dwa << trzy << std::endl;


#if defined(GETMAX)

	std::cout << "najwieksza liczba" << std::endl;

	int mx = jeden;
	if (dwa > mx) mx = dwa;
	if (trzy > mx) mx = trzy;


		std::cout << "najwieksza liczba jest pierwsz liczba "<< mx << std::endl;


#endif

#if defined(GETMIN)

		std::cout << "najwieksza liczba" << std::endl;

		int min = jeden;
		if (dwa < min) min = dwa;
		if (trzy < min) min = trzy;


		std::cout << "najmniejsza liczba jest pierwsz liczba " << min << std::endl;


#endif


		std::cout << "------------ zadanie 3-----------------" << std::endl;


		int j, d, t;

		std::cin >> j >> d >> t;

		std::cout << "wyniki " << j << d << t << std::endl;

		int loop = j;
		if (d > loop) {
			loop = d;
		}
		if (t > loop) {
			loop = t;
		}


		for (int i = loop; i > 0; i--) {
			if (i <= j) {
				std::cout << "*";
			}
			else {
				std::cout << " ";
			}
			if (i <= d) {
				std::cout << "*";
			}
			else {
				std::cout << " ";
			}
			if (i <= t) {
				std::cout << "*";
			}
			else {
				std::cout << " ";
			}
			std::cout <<std::endl;
		}
}





