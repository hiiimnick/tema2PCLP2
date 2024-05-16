#include "libraries.h"
#include "grupa.h"
#include "student.h"

int main()
{
	grupa CALC1_G1;
	CALC1_G1.adaugaStudent(student(1, "Costel", "Biju", 9.80, 9, 8, 7));
	CALC1_G1.adaugaStudent(student(2, "Stefan", "Hrusca", 8.70, 7, 8, 9));
	CALC1_G1.adaugaStudent(student(3, "Ion", "Popescu", 9.20, 9, 9, 9));
	CALC1_G1.adaugaStudent(student(4, "Vasile", "Ionescu", 7.50, 4, 4, 4));
	CALC1_G1.adaugaStudent(student(5, "Mihai", "Alexandru", 9.60, 5, 2, 3));
	CALC1_G1.adaugaStudent(student(6, "Andrei", "Pop", 8.90, 8, 9, 9));
	CALC1_G1.adaugaStudent(student(7, "Marius", "Popescu", 9.40, 9, 9, 9));
	CALC1_G1.adaugaStudent(student(8, "Cristian", "Popa", 7.80, 5, 5, 1));
	CALC1_G1.adaugaStudent(student(9, "Mihai", "Cismigiu", 9.70, 9, 9, 9));
	CALC1_G1.adaugaStudent(student(10, "Andrei", "Popa", 8.40, 8, 9, 9));
	CALC1_G1.afisBurseMerit();
	std::cout << std::endl;
	CALC1_G1.afisBurseStudii();
	std::cout << std::endl;
	CALC1_G1.stergeSubCinci();
	CALC1_G1.nrStudenti();
	std::cout << std::endl;
	std::cout << "Introduceti numarul matricol al studentului pentru a verifica daca este in grupa: ";
	int nrMatCaut; std::cin >> nrMatCaut;
	std::cout << std::endl;
	if (CALC1_G1.inGrupa(nrMatCaut))
	{
		std::cout << "Studentul cu numarul matricol " << nrMatCaut << " exista in grupa." << std::endl;
		CALC1_G1.situatie(nrMatCaut);
	}
	else
		std::cout << "Studentul cu numarul matricol " << nrMatCaut << " nu exista in grupa." << std::endl;
	return 0;
}