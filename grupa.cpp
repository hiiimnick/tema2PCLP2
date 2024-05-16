#include "grupa.h"


void grupa::adaugaStudent(const student& stud)
{
	grupa.push_back(stud);
}

void grupa::stergeStudent(int nrMat)
{
	for (auto i = grupa.begin(); i < grupa.end(); i++)
	{
		if (i->getNrMat() == nrMat)
		{
			grupa.erase(i);
			break;
		}
	}
}

void grupa::modificaDate(int nrMat, const student& stud)
{
	for(auto i = grupa.begin(); i < grupa.end(); i++)
		if (i->getNrMat() == nrMat)
		{
			i->setNrMat(nrMat);
			break;
		}
}

bool grupa::inGrupa(int nrMat) const
{
	for (auto i = grupa.begin(); i < grupa.end(); i++)
		if (i->getNrMat() == nrMat)
			return true;
	return false;
}

void grupa::nrStudenti() const
{
	std::cout << "Numarul de studenti din grupa este: " << grupa.size() << std::endl;
}

void grupa::stergeSubCinci()
{
	for (auto i = grupa.begin(); i < grupa.end(); i++)
		if (i->getMedie() < 5)
			i = grupa.erase(i);
}

void grupa::afisBurseMerit() const
{
	std::cout << "Studentii din grupa cu bursa de merit sunt:" << std::endl;
	for (auto i = grupa.begin(); i < grupa.end(); i++)
		if(i->verifBursaMerit())
			std::cout << i->getNume() << " " << i->getPrenume() << std::endl;
}

void grupa::afisBurseStudii() const
{
	std::cout << "Studentii din grupa cu bursa de studiu sunt:" << std::endl;
	for (auto i = grupa.begin(); i < grupa.end(); i++)
		if (i->verifBursaStudii())
			std::cout << i->getNume() << " " << i->getPrenume() << std::endl;
}

void grupa::situatie(int nrMat) const
{
	for (auto i = grupa.begin(); i < grupa.end(); i++)
		if (i->getNrMat() == nrMat)
		{
			std::cout << "Situatia studentului este:" << std::endl;
			std::cout << "Nume: " << i->getNume() << std::endl;
			std::cout << "Prenume: " << i->getPrenume() << std::endl;
			std::cout << "Numar matricol: " << i->getNrMat() << std::endl;
			std::cout << std::fixed << std::setprecision(2);
			std::cout << "Medie: " << i->getMedie() << std::endl;
			if(i->verifBursaMerit()) std::cout << "Bursa de merit: DA" << std::endl;
			else if(i->verifBursaStudii()) std::cout << "Bursa de studii: DA" << std::endl;
			break;
		}
}
