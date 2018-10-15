#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>




const double* aver(const double* arr, size_t size, double& average) {

double avg = 0;
for(int i =0; i<size; i++){

    avg += arr[i];
}

average = avg/size;

double p = arr[0];
int close =0;


for(int j=0; j<size; j++){

    if( abs(average - arr[j]) < abs(average - p)){
        p = arr[j];

        close = j;

    }
    std::cout<< "petal 1 "<<p<< std::endl;
    std::cout<< "petal close "<<close<< std::endl;
}

return &arr[close];

}

int main () {

    using std::cout; using std::endl;

double arr[] = {1,7,5,9,3,16};

size_t size = sizeof(arr)/sizeof(arr[0]);

double average = 0;

const double* p = aver(arr, size, average);

cout << *p << " " << average << endl;
}
