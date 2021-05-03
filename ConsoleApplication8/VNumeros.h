#pragma once
#include <vector>
using namespace std;
class vNumeros {
	vector<int> arr;
public:
	vNumeros() {}
	~vNumeros() {}
	void AgregarNumero(int numero) {
		arr.push_back(numero);
	}
};