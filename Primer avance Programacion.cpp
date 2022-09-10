#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

void main() {
	int opc ;
	char articulo[20];
	

	system("color 02");
	cout << "\t-----Menu-----" << endl;
	cout << "\t1. Agregar articulo " << endl;
	cout << "\t2. Limpiar pantalla" << endl;
	cout << "\t3. Salir" << endl;
	cin >> opc;

	switch (opc)
	{
	case 1:
		system("cls");
		agregar();
		break;

	case 2:
		system("cls");
		cout << "Pantalla Limpia" << endl;
		break;

	default:
		system("cls");
		cout << "Saliendo" << endl;
		break;
	}
}
void agregar() {
	for (int 1 = 0, 1 < 3, 1++) {
		cout << "Ingresa el nombre" << 1 + 1 << ",";
		getline(cin, articulo[1]);
	}

}
system("pause>null");