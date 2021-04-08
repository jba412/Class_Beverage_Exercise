#include <iostream>
#include <string>
using namespace std;

// Create Beverage Class
class Beverage {
private:
	string name;				// Name of beverage
	string carbonation;			// Does it have Carbonation?
	string properties;			// Characteristic of beverage

public:
	Beverage()					// Default Constructor
	{
		name = "";
		carbonation = "";
		properties = "";
	}

	Beverage(string aName, string aCarbonation, string aProperties)		// Overloaded Constructor
	{
		name = aName;
		carbonation = aCarbonation;
		properties = aProperties;
	}

	string getName() const				//  getName() function returns the value name
	{
		return name;
	}

	string getCarbonation() const		//  getCarbonation() function returns the value carbonation
	{
		return carbonation;
	}

	string getProperties() const		//  getProperties() function returns the value properties
	{
		return properties;
	}
};





int main()
{
	// Constant value used for size of array
	const int SIZE = 3;
	
	// Declared and initialized variable
	char answer = '\0';
	
	// Opening prompt that asks user yes or no if they would like to enter program
	cout << "Welcome to the Beverage Information Application." << endl;
	cout << "Press y or n to continue:    ";
	cin >> answer;
	cout << endl;


	if (answer == 'y' || answer == 'Y')
	{
		//Declaration and Initialization of Beverage array object using overloaded constructor from class.
		Beverage beverage[] = { Beverage("Orange Juice", "Not Carbonated", "Made from Oranges"),
								Beverage("Budweiser", "Carbonated", "5% Alcohol"),
								Beverage("Pepsi", "Carbonated", "Made from Syrup") };

		// Loop outputs the array of object beverage to display information about different beverages.
		for (int i = 0; i < SIZE; i++)
		{
			cout << beverage[i].getName() << ", ";
			cout << beverage[i].getCarbonation() << ", ";
			cout << beverage[i].getProperties() << ". " << endl;
		}
	}

	// Program ends	
	cout << endl << "Good Bye!" << endl;
	return 0;
}
