#include <iostream>

using namespace std;

void heapSort(int b[], int n);
#include "uno.h"
#include "heapsort.h"
#include "doc.h"
using namespace datos;

int main()
{
   int a[100],n;
   cout << "Ingrese el tamanio: ";
   cin>> n;
    insertarElementos(a,n);
   heapSort(a,n);
   cout << endl;
  mostrarElementos(a,n);

    return 0;
}

