#include <iostream>
#include <string>
#include <utility> // you can use std::swap
using namespace std;



void getMinMax(double &a, double& b, double& c, double*& ptrMin, double*& ptrMax) {
            std::cout << a << " "<< b << " "<< c<< std::endl;


            if(a>b){
                if(a>c){
                    std::cout<< "a najwieksze"<<std::endl;
                    *&ptrMax = &a;
                    if(b>c){
                        *&ptrMin = &c;
                    } else {
                    *&ptrMin = &b;
                    }
                } else {
                    std::cout<< "c najwieksze"<<std::endl;
                    *&ptrMax = &c;
                    if(a>b){
                        *&ptrMin = &b;
                    } else {
                    *&ptrMin = &a;
                    }
                }
            } else {
                if(b > c){
                    std::cout<< "b najwieksze"<<std::endl;
                    *&ptrMax = &b;
                    if(a>c){
                        *&ptrMin = &c;
                    } else {
                    *&ptrMin = &a;
                    }
                } else {
                    std::cout<< "c najwieksze"<<std::endl;
                    *&ptrMax = &c;
                    if(a>b){
                        *&ptrMin = &b;
                    } else {
                    *&ptrMin = &a;
                    }
                }
            }



     }
void getMinMax(double *a, double* b, double* c, double** ptrMin, double** ptrMax) {

           std::cout << *a << " "<< *b << " "<< *c<< std::endl;

            if(*a>*b){
                if(*a>*c){
                    std::cout<< "a najwieksze"<<std::endl;
                    *ptrMax = &*a;
                    if(*b>*c){
                        *ptrMin = &*c;
                    } else {
                        *ptrMin = &*b;
                    }
                } else {
                    std::cout<< "c najwieksze"<<std::endl;
                    *ptrMax = &*c;
                    if(*a>*b){
                      *ptrMin = &*b;
                    } else {
                    *ptrMin = &*a;
                    }
                }
            } else {
                if(*b > *c){
                    std::cout<< "b najwieksze"<<std::endl;
                    *ptrMax = &*b;
                    if(*a>*c){
                      *ptrMin = &*c;
                    } else {
                        *ptrMin = &*a;
                    }
                } else {
                    std::cout<< "c najwieksze"<<std::endl;
                    *ptrMax = &*c;
                    if(*a>*b){
                      *ptrMin = &*b;
                    } else {
                    *ptrMin = &*a;
                    }
                }
            }


         }
void ord3(double& a, double& b, double& c) {

        double temp = b;
        b=a;
        a=temp;
             }
void ord3(double* a, double* b, double* c) {

        double temp = *c;
    *c=*a;
    *a = temp;
                 }
int main() {

            double a, b, c, *ptrMin, *ptrMax;

            a = 2; b = 1; c = 3;
            ord3(a, b, c);
            cout << a << " " << b << " " << c << endl;

            a = 3; b = 2; c = 1;
            ord3(&a, &b, &c);
            cout << a << " " << b << " " << c << endl;

            a = 2; b = 3; c = 1;
            ptrMin = ptrMax = nullptr;
            getMinMax(a, b, c, ptrMin, ptrMax);
            std:: cout << "Min = " << *ptrMin << "; " << "Max = " << *ptrMax << std::endl;

            a = 3; b = 1; c = 2;
            ptrMin = ptrMax = nullptr;
            getMinMax(&a, &b, &c, &ptrMin, &ptrMax);
            std:: cout << "Min = " << *ptrMin << "; " << "Max = " << *ptrMax << std::endl;

                }
