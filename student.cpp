#include "student.h"
#include "libraries.h"

//CONSTRUCTOR

student::student(int nrm, std::string numes, std::string pnumes, double medieAdmi, double materie1, double materie2, double materie3)
{
	nrMatricol = nrm;
	nume = numes;
	prenume = pnumes;
	medAdmi = medieAdmi;
	mat1 = materie1;
	mat2 = materie2;
	mat3 = materie3;
	medie = (materie1 + materie2 + materie3) / 3.0;
}

//GETTERI

int student::getNrMat() const
{
	return nrMatricol;
}

std::string student::getNume() const
{
	return nume;
}

std::string student::getPrenume() const
{
	return prenume;
}

double student::getMedAdmi() const
{
	return medAdmi;
}

double student::getMat1() const
{
	return mat1;
}

double student::getMat2() const
{
	return mat2;
}

double student::getMat3() const
{
	return mat3;
}

double student::getMedie() const
{
	return medie;
}

//SETTERI

void student::setNrMat(int nr)
{
	this->nrMatricol = nr;
}

void student::setNume(std::string n)
{
	this->nume = n;
}

void student::setPrenume(std::string p)
{
	this->prenume = p;
}

void student::setMedAdmi(double madmi)
{
	this->medAdmi = madmi;
}

void student::setMat1(double m1)
{
	this->mat1 = m1;
}

void student::setMat2(double m2)
{
	this->mat2 = m2;
}

void student::setMat3(double m3)
{
	this->mat3 = m3;
}

//VERIFICATORI

bool student::verifIntegralist() const
{
	return (mat1 >= 5 && mat2 >= 5 && mat3 >= 5); //daca media este mai mare de 5, reiese adevarat
}

bool student::verifBursaMerit() const
{
	return (verifIntegralist() && medAdmi >= 9.50);
}

bool student::verifBursaStudii() const
{
	return (verifIntegralist() && (medAdmi >= 8.50 && medAdmi < 9.50));
}

//DIVERSE

void student::situatie() const
{
	std::cout << "Studentul " << nume << " " << prenume << " cu numarul matricol " << nrMatricol << " si media de admitere " << medAdmi;
	if (verifIntegralist())
		std::cout << " este integralist";
	else
		std::cout << " nu este integralist";

	if (verifBursaMerit())
	{
		std::cout << " si are bursa de merit.";
	}
	else if (verifBursaStudii())
	{
		std::cout << "si are bursa de studii.";
	}
	else
		std::cout << "si un are bursa.";
	std::cout << std::endl;
}
