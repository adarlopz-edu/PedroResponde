#include <iostream> 
#include <conio.h>
#include <random>
#define enter 13

using namespace std;

int main() {

	cout << "Pedro Responde Version C++" << endl;
	cout << endl << "Escribe Tu Peticion: ";

	char f[] = "Pedro por favor de responder esta pregunta importante";
	char r[100], p[100], q[100];
	char a[100];
	int x = 0, y = 0, w = 0, v = 0, z = 0;

	for (int x = 0; v != 1; x++) {
		p[x] = _getch(); //Lectura en teclado con getch con un ciclo
		if (p[x] == '.') {
			for (w = 0; w == 0; y++) {
				cout << f[x]; //Cuando detecte un primer punto imprimira en pantalla la frase
				r[y] = _getch();
				if (r[y] == '.') { //Cuando detecte un segundo punto le regresa el acceso al teclado al usuario
					w = w + 1;
					cout << f[x + 1];
					cin.getline(a, 100);
					break;
				} x++;
			}
		}
		if (p[x] != '.') {
			if (w == 1) {
				break; //Esto es para cerrar el getch
				//cout << f[x];
			}
			else {
				cout << p[x];
			}
		}
		switch (p[x]) {
		case enter: {
			v = v + 1;
			break;//rompe el getch
		}
		}
	}

	cout << endl << "Escribe Tu Pregunta: ";
	cin.getline(q, 100);
	if (y != 0) {
		cout << endl;
		for (z = 0; z < y; z++) {
			cout << r[z];
		}
		cout << endl;
	}
	else {
		random_device rd;
		default_random_engine eng(rd());
		uniform_int_distribution<int> distr(1, 4);

		int num = distr(eng);
		if (num == 1) {
			cout << endl << "No lo se, tu dime" << endl;
		}
		if (num == 2) {
			cout << endl << "No hay suficiente velocidad de internet, abre la puerta" << endl;
		}
		if (num == 3) {
			cout << endl << "Sabe" << endl;
		}
		if (num == 4) {
			cout << endl << "El diabloo" << endl;
		}
		return 0;
	}
}