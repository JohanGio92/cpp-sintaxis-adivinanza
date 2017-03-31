
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

	bool adivinoElSecreto = false;

	for (unsigned int intentosRestantes = 3;
		 (intentosRestantes > 0) && (! adivinoElSecreto);
		 intentosRestantes--) {

		std::cout << "Tenés "
				  << intentosRestantes
				  << " intentos"
				  << std::endl;

		std::cin >> numeroArriesgado;

		adivinoElSecreto = (numeroArriesgado == numeroSecreto);

		if (! adivinoElSecreto) {

			std::cout << "No" << std::endl;

		}
	}

	if (adivinoElSecreto) {

		std::cout << "Ganaste" << std::endl;

	} else {

		std::cout << "Perdiste" << std::endl;

	}

	return 0;
}
