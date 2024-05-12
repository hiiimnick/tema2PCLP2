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
	auto i = grupa[nrMat - 1];
	std::cout << "Studentul " << i.getNume() << " " << i.getPrenume() << " cu numarul matricol " << i.getNrMat() << " si media de admitere " << i.getMedAdmi();
	if (i.verifIntegralist())
		std::cout << " este integralist ";
	else
		std::cout << " nu este integralist ";

	if (i.verifBursaMerit())
	{
		std::cout << "si are bursa de merit.";
	}
	else if (i.verifBursaStudii())
	{
		std::cout << "si are bursa de studii.";
	}
	else
		std::cout << "si nu are bursa.";
	std::cout << std::endl;
}
