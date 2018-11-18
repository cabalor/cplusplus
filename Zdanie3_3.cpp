#include <iostream>

void sort(int arrays[], int sizee){
    int i, j, temp;
   for (i = 0; i < sizee-1; i++){

       for (j = 0; j < sizee-i-1; j++)
{
           if (arrays[j] > arrays[j+1]){

              temp = arrays[j];
            arrays[j] = arrays[j+1];
            arrays[j+1] = temp;
           }
}
   }
}

void merge(const int* a, size_t dima, const int* b, size_t dimb, int* c){


int i = 0, j = 0, k = 0;


while (i<dima && j <dimb)
    {
        // Check if current element of first
        // array is smaller than current element
        // of second array. If yes, store first
        // array element and increment first array
        // index. Otherwise do same with second array
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < dima) {
        c[k++] = a[i++];

    }
    // Store remaining elements of second array
    while (j < dimb){
        c[k++] = b[j++];
    }

/*

int s = dima + dimb;
for(int i=0; i < s; i++){
        int j;
        //std::cout<< "numer i "<< i << std::endl;

        if(i < dima){
          c[i] = a[i];

            //std::cout<<"wartos a "<< a[i]<<std::endl;
        } else {
            //std::cout<<"wartos b "<< b[i-dima]<<std::endl;

            c[i] = b[i-dima];

        if(i != 0 && c[i] < c[i-1]){
                std::cout<<"wartosci c mniejsza"<<c[i]<< "   wartosc wieksza c " << c[i-1]<<std::endl;
            temp = c[i];
            c[i] = c[i-1];
            c[i -1] = temp;
        }*/

}


    //std::cout<<"dupa "<<c[i]<<std::endl;

//sort(c, s);

/*

int i = 0, j = 0, k = 0;

    // Traverse both array
    while (i<n1 && j <n2)
    {
        // Check if current element of first
        // array is smaller than current element
        // of second array. If yes, store first
        // array element and increment first array
        // index. Otherwise do same with second array
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }

    // Store remaining elements of first array
    while (i < n1)
        arr3[k++] = arr1[i++];

    // Store remaining elements of second array
    while (j < n2)
        arr3[k++] = arr2[j++];
}

*/




void printArr(const int* a, size_t dima, const char* m) {
    std::cout << m << " [ ";
    for (size_t i = 0; i < dima; ++i) {
    std::cout << a[i] << " ";
    }
    std::cout << "]\n";
    }



int main() {

int a[] = {1,4,4,5,8};
int b[] = {1,2,2,4,6,6,9};

constexpr size_t dima = sizeof(a)/sizeof(a[0]);

constexpr size_t dimb = sizeof(b)/sizeof(b[0]);

constexpr size_t dimc = dima + dimb;
int c[dimc];
merge(a,dima,b,dimb,c);
printArr(a,dima,"a");
printArr(b,dimb,"b");
printArr(c,dimc,"c");
}

