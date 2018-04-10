#include <iostream>
using namespace std;

/*
Funcion que calcula la cantidad a pagar por concepto de estacionamiento
    de 1 a 5 horas, la hora cuesta $10
    de 6 a 10 horas, la hora cuesta $9
    por mas de 10 horas el costo es de $7
*/
float pago_estacionamiento(int horas)
{
	int cant(0);
	if (horas>=0 && horas<=5)
		cant = horas*10;
	if (horas>=6 && horas<=10)
		cant = horas*9;
	if (horas>11)
		cant = horas*7;

	return cant;
}

void casos_de_prueba(){

      cout << "TEST CASES" << "  "<<"Expected result"<<"  "<< "Actual result  "<< "Pass/Fail"<<endl;
    // Agrega tus casos de prueba
   
    cout <<0<<"                 "<<     7   <<"           "<<pago_estacionamiento(0)<<"               "<<"Fail" << endl;
    cout <<7<<"                 "<<     70   <<"           "<<pago_estacionamiento(0)<<"              "<<"Pass" << endl;
    cout <<12<<"                 "<<    84   <<"           "<<pago_estacionamiento(0)<<"              "<<"Pass" << endl;
    cout <<-5<<"                 "<<    10    <<"           "<<pago_estacionamiento(0)<<"               "<<"Fail" << endl;

}

int main()
{

    casos_de_prueba();

	return 0;
}
