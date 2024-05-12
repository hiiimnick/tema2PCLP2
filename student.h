#pragma once
#include "libraries.h"

class student
{
public:
	
	student(int, std::string, std::string, double, double, double, double);
	int getNrMat() const;
	std::string getNume() const;
	std::string getPrenume() const;
	double getMedAdmi() const;
	double getMat1() const;
	double getMat2() const;
	double getMat3() const;
	double getMedie() const;
	
	void setNrMat(int);
	void setNume(std::string);
	void setPrenume(std::string);
	void setMedAdmi(double);
	void setMat1(double);
	void setMat2(double);
	void setMat3(double);
	
	bool verifIntegralist() const;
	bool verifBursaMerit() const;
	bool verifBursaStudii() const;
	
	void situatie() const;
private:
	int nrMatricol;
	std::string nume;
	std::string prenume;
	double medAdmi;
	double mat1;
	double mat2;
	double mat3;
	double medie;
};

