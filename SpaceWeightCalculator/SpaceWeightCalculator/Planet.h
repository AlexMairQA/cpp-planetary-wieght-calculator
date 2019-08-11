#pragma once
#include <string>
using namespace std;

class Planet
{
private:
	string Name;
	double SurfaceGravity;
public:
	Planet();
	Planet(string, double);
	string getName();
	double CalculateWeight(double);
	~Planet();
};

