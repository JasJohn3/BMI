#pragma once
#ifndef BMI_H
#define BMI_H

#include <iostream>
#include <string>

using namespace std;

class BMI
{
public:
	//Constructor
	BMI();
	//Deconstructor
	~BMI();
	//Overload Constructor
	BMI(string,int,double);

private:
	//MEMBER VARIABLES
	string newName;
	int newHeight;
	double newWeight;


protected:

};
BMI::BMI()
{
}

BMI::~BMI()
{
}

#endif // !BMI_H

