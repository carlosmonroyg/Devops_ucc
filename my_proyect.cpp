#include <stdio.h>
#include <math.h>
#include <iostream>
#include <unistd.h>
#include <cstdlib>

using namespace std;

int main() {

        int ivalor =20;
        int icontador=0;
        int i =0;
        long dsleep=0;
        cout << "+----------------------Programa hilo------------------------" << endl;

        for (i= 1; i <= ivalor; i++) {
               icontador+=i;
               dsleep=1-(1/i);
               
               cout << "ciclo for i = " << icontador << " sleep = " << dsleep <<endl;
               sleep(dsleep);
        }
	cout << "--------------Llamado a otro programa----------------------" << endl;
	system("./bin/geometria");
        cout << "---------------------Fin programa--------------------------" <<  endl;
        return 0;
}
