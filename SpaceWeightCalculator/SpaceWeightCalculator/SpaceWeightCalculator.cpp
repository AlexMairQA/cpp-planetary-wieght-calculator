// SpaceWeightCalculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Planet.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<Planet>SolarSystem = { Planet("Mercury", 0.2), Planet("Venus", 0.9), Planet("Mars", 0.3), Planet("Jupiter", 2.528) };
	cout << "Would you like to visit Mars, Venus, Mercury or Jupiter?" << endl;
	
	string enteredPlanet;
	getline(cin, enteredPlanet);
	double earthWeight;
	double planetWeight;
	cout << "Enter your weight in kgs" << endl;

	
	cin >> earthWeight;
	
	for (auto planet : SolarSystem)
	{
		if (enteredPlanet == planet.getName())
		{
			planetWeight = planet.CalculateWeight(earthWeight);
		}
	}
	if (planetWeight < 20)
	{
		cout << "Wow! You would be really light on " + enteredPlanet +"! ";
	}
	if (planetWeight > 100)
	{
		cout << "Uh oh, you'd have trouble walking on " + enteredPlanet + "! ";
	}
	cout << "Your weight on " + enteredPlanet + " would be " + to_string(planetWeight) + "kgs" << endl;

    return 0;
}

