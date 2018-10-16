#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>



void minMaxRep(int a[], size_t size, int& mn, size_t& in, int&mx, size_t& ix) {
    int max = a[0], min =a[0];

    for(int i =0; i<size;i++){
        if(a[i] > max){
            max = a[i];
        }
        if(a[i] < min){
            min = a[i];
        }

    //mn = *std::min_element(a,a+size);
    //mx = *std::max_element(a,a+size);

    }
    mn = min;
    mx = max;
    int maxCount =0;
    int minCount =0;

    for(int i =0; i<size; i++){
        if(min == a[i]){
            minCount++;
        }
        if(max ==a[i]){
            maxCount++;
        }
    }
    in = minCount;
    ix = maxCount;

    }



int main()  {
    using std::cout;
int a[]{2,3,4,2,7,4,7,2};
size_t size = sizeof(a)/sizeof(*a);
int mn, mx;
size_t in, ix;
minMaxRep(a,size,mn,in,mx,ix);
cout << "Array: [ ";
for (size_t i = 0;
i < size; ++i) cout << a[i] << " ";
cout << "]\n";
cout << "Min = " << mn << " " << in << " times\n";
cout << "Max = " << mx << " " << ix << " times\n";
}
