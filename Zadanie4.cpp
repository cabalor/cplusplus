#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>

#define POL
//#define ENG


int main()
{

#if defined(POL) && defined(ENG)
#error zdefinuj tylko jede kraj
#elif !(defined(POL) || defined(ENG))
#error zdefiniuj kraj
#endif // defined

#ifdef ENG
    std::cout << "wpisuj liczby po angielsk mialo byc ale nie bedzie. press 0 to exit"<<std::endl;
#endif

#ifdef POL
    std::cout << "prosze wpisywac liczby 0 zeby wyjsc"<< std::endl;
#endif

    int liczba, sum, bigest =0, najwieksza;

    do
    {
        sum =0;
        std::cin >> liczba;
        int temp = liczba;

        while (temp > 0)
        {
            sum += temp % 10;
            temp = temp/10;
        }

        if(bigest < sum)
        {
            bigest = sum;
            najwieksza = liczba;
        }
    }
    while (liczba != 0);


    std::cout << "najwieksza  suma to "<<bigest<<" a byla to liczba "<<najwieksza<<std::endl;
}
