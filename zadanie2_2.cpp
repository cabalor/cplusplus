
#include <iostream>
#include <string>

bool isPrime(int n){
    if(n <=1){
        return false;
    }
    if(n <= 3){
        return true;
    }

     if (n%2 == 0 || n%3 == 0){
         return false;
     }

     for (int i = 5; i*i <= n; i = i+6){
        if (n%i == 0 || n%(i+2) == 0){
           return false;
        }
}
    return true;

}


int gdc(int a, int b){
 int tmp = (a>b)?a%b:b%a;
 if(tmp ==0){
     return (a>b)?b:a;
 }
    return (a>b)?gdc(tmp,b):gdc(tmp,a);

}


void printDivisors(int n){

 for(int i =1; i<=n;i++){

  if(n%i==0){
   std::cout<<"liczba " << i <<std::endl;
  }
 }

}

int phi(int n){
    int res = 1;
    for(int i =2; i<n; i++){
        if(gdc(i,n) == 1){
            res++;
        }
    }

    return res;
}


int numDivisors(int n){
    int count =0;
 for(int i =1; i<=n;i++){

  if(n%i==0){
   count++;
  }
 }
    return count;
}



int main()
{

    printDivisors(100);
  std::string name;
  std::cout << "Hello, " << isPrime(1) << "!\n";
  std::cout << "Hello, " << gdc(21,15) << "!\n";
  std::cout << "Hello, " << numDivisors(100) << "!\n";
  std::cout << "Hello, " << phi(10) << "!\n";
}
