#include "libraries.h"
#include "grupa.h"
#include "student.h"

int main()
{
	grupa g1;
	g1.adaugaStudent(student(1, "Costel", "Biju", 9.80, 9, 8, 7));
	g1.adaugaStudent(student(2, "Stefan", "Hrusca", 8.70, 7, 8, 9));
	//mai adauga 8 studenti dupa
	g1.afisBurseMerit();
	std::cout << std::endl;
	g1.afisBurseStudii();
	std::cout << std::endl;
	g1.stergeSubCinci();
	g1.nrStudenti();
	std::cout << std::endl;
	std::cout << "Introduceti numarul matricol al studentului pentru a verifica daca este in grupa: ";
	int nrMatCaut; std::cin >> nrMatCaut;
	std::cout << std::endl;
	if (g1.inGrupa(nrMatCaut))
	{
		std::cout << "Studentul cu numarul matricol " << nrMatCaut << " exista in grupa." << std::endl;
		g1.situatie(nrMatCaut);
	}
	else
		std::cout << "Studentul cu numarul matricol " << nrMatCaut << " nu exista in grupa." << std::endl;
	return 0;
}