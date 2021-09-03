#include <studio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main() {

        int ivalor =0;
        int icontador=0;
        int i =0;

        cout <<"Ingrese un valor para calcular una suma.\n";
        cin >> ivalor;

        for (i= 1; i <= ivalor; i++) {
               icontador+=i;
        }
