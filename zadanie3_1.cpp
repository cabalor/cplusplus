#include <iostream>
#include <string>
int gcdRec(int a, int b){

int tmp = (a>b)? a%b : b%a;
 if(tmp ==0){
     return (a>b) ? b:a;
 }
    return (a>b) ? gcdRec(tmp,b) : gcdRec(tmp,a);

}
int sumDigits(int n){
/*int sum =0;
int x = std::to_string(n).length();

for(int i =0; i<x;i++){
        sum = sum + n%10;
        n =n/10;
}
if (sum > 9){
    return sumDigits(sum);
}
 return sum;
 */
 if(n==0){
    return 0;
 }
 return (n%10+sumDigits(n/10));

}
int number =0;
int sum =0;
int numDigits(int n){

if(n>0){
        //std::cout<<"liczba n "<<n<<std::endl;
    number++;
    numDigits(n/10);
} else {
sum = number;
number = 0;
}

return sum;

//return 1 + ((n/10)?numDigits(n/10):0);
}


void printOddEven(int n){

    if(n%2==0 && n>0){
        std::cout<<n<<" ";
        printOddEven(n-2);

    }
    if(n%2 !=0 && n>0){
        std::cout<<n<<" ";
        printOddEven(n-2);


    }

}
void hailstone(int n){
    /*if(n<0){
        std::cout<<"wartosc ponizej 0 lub 0 " << n;
    }
    else*/ if(n==1){
        std::cout<< n << " ";
    }
    else if(n%2 == 0){
        std::cout<< n<< " ";
        hailstone(n/2);

        } else {
        std::cout<< n<<" ";
        hailstone((n*3) + 1);
        }
    //std::cout<<"po operacji "<<n<<std::endl;

}


int main() {

    std::cout << "gcdRec(12, 42) = " << gcdRec(12, 42) << std::endl << "gcdRec(12, 25) = " << gcdRec(12, 25) << std::endl;

    std::cout << "sumDigits(123) = " << sumDigits(123) << std::endl << "sumDigits(971) = " << sumDigits(971) << std::endl;

    std::cout << "numDigits(12345) = " << numDigits(12345) << std::endl << "numDigits(971) = " << numDigits(971) << std::endl;
    std::cout << "printOddEven(15): ";
    printOddEven(15);
    std::cout << std::endl;
    std::cout << "printOddEven(14): ";
printOddEven(14);
    std::cout << std::endl;
    std::cout << "hailstone(13): "; hailstone(13);
    std::cout << std::endl;
}
