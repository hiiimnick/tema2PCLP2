#pragma once
#include "libraries.h"
#include "student.h"

class grupa
{
public:
	void adaugaStudent(const student&);
	void stergeStudent(int);
	void modificaDate(int, const student&);
	bool inGrupa(int) const;
	void nrStudenti() const;
	void stergeSubCinci();
	void afisBurseMerit() const;
	void afisBurseStudii() const;
	virtual void situatie(int) const;
private:
	std::vector<student> grupa;
};