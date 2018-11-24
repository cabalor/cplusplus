#include <iostream>
#include <string>



template <typename T>
int maxindex(const T* a, int s){
int maxIndex = 0;
T temp;

for(int i =0; i<s; i++){
    std::cout<< a[i]<<std::endl;
if(temp < a[i]){

    maxIndex = i;
    temp = a[i];

    }
}
return maxIndex;

}


int main(){

int arrInt[] = {1,2,9,4,7};
int sInt = (sizeof(arrInt)/sizeof(*arrInt));
int x = maxindex(arrInt,sInt);

double arrDouble[] = {1.2, 3.4, 2.2, 2.1, 1.2};
int sDouble = (sizeof(arrDouble)/sizeof(*arrDouble));
int d = maxindex(arrDouble,sDouble);

std::string arrString[] = {"zu", "kot", "domek"};
int sString = (sizeof(arrString)/sizeof(*arrString));
int s = maxindex(arrString,sString);



std::cout<<"int "<<x<< " double "<< d << " string "<<s<<std::endl;
}

