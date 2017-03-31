
#include <iostream>

/*
 * Programa que le ofrece jugar al usuario
 * a adivinar un valor entero comprendido entre
 * 0 y 99.
 */
int main() {

	int numeroArriesgado;

	const int numeroSecreto = 7;

	std::cout << "Bienvenido !!!"
	          << std::endl
			  << "Estoy pensando en un numero entre 0 y 99"
			  << std::endl;

	std::cin >> numeroArriesgado;

	if (numeroArriesgado == numeroSecreto) {

		std::cout << "Ganaste" << std::endl;

	} else {

		std::cout << "Perdiste" << std::endl;
	}

	return 0;
}
