#include "stdafx.h"
#include "Planet.h"


Planet::Planet()
{
}

Planet::Planet(string Name, double SurfaceGravity)
{
	this->Name = Name;
	this->SurfaceGravity = SurfaceGravity;
}
string Planet::getName()
{
	return this->Name;
}
double Planet::CalculateWeight(double weight)
{
	return SurfaceGravity * weight;
}

Planet::~Planet()
{
}
