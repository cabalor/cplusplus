#include <iostream>
#include <string>
using namespace std;

//#define POL
#define ENG

int sumDigit(int a) {
        int sum = 0;
        while (a > 0) {
                sum += a % 10;
                a /= 10;
        }
        return sum;
}

int main()
{

#if !defined(POL) && !defined(ENG)
#error Nie zdefiniowano jezyka.
#endif
#if defined(POL) && defined(ENG)
#error Zdefiniowano za duzo jezykow.
#endif

        int maxLiczba, maxSuma, liczba, suma;

        maxSuma = 0;
        for (int i = 0; i < 1; i)
        {
#ifdef ENG
                cout << "enter a natural number (0 if done)";
#endif

#ifdef POL
                cout << "wpisz liczbe naturalna (0 jesli koniec)";
#endif
                cin >> liczba;

                if (liczba == 0) {
                        i = 10;
                }
                else {
                        suma = sumDigit(liczba);
                        if (suma > maxSuma) {
                                maxSuma = suma;
                                maxLiczba = liczba;
                        }
                }
        }

#ifdef ENG
        cout << "Max sum of digit was " << maxSuma << " for " << maxLiczba;
#endif

#ifdef POL
                cout << "Najwieksza suma cyfr bylo " << maxSuma << " dla liczby " << maxLiczba;
#endif

        cin.get();
        cin.get();
        return 0;
}
