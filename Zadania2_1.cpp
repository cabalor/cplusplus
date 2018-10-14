#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>



int main(){

        std::cout<< "podawaj liczby az do wcisniecia 0"<< std::endl;

int liczba, chain =0, temp =0, najwieksza =0, nChain =1;

    do{
        std::cin >> liczba;

        if(liczba==temp){
            chain++;
        } else  if (liczba!=temp) {
        if(chain > nChain){
            nChain = chain;
            najwieksza = temp;
        }
        chain = 1;
        temp = liczba;
        }

//&& liczba!=0
    }
    while (liczba != 0);


    std::cout << "najdluzszy lancuch to "<< nChain << " a byla to liczba "<< najwieksza<<std::endl;


}
