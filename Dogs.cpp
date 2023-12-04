#include "Dogs.h"
#include <fstream>
#include <stdexcept>
#include <iostream>

using namespace std;

Dogs::Dogs()
{
    string DogFile;

    cout << "Enter a file name: ";
    cin >> DogFile;

    ifstream inputFile(DogFile + ".txt");
    if (!inputFile.is_open())
    {
        throw runtime_error("Error opening data file.");
    }

    string country;
    int population;

    while (inputFile >> country >> population)
    {
        m_dogs[country] = population;
        m_dogPopulation += population;
    }

    inputFile.close();
}

int Dogs::getDogPopulation()
{
    return m_dogPopulation;
}

int Dogs::getCountryPopulation()
{
    string country;
    cout << "Enter the country name: ";
    cin >> country;

    try
    {
        int population = m_dogs.at(country);
        cout << "Population of dogs in " << country << ": " << population << endl;
        return population;
    }

    catch (const out_of_range& e)
    {
        cout << "Country not found in the data." << endl;
        return 0;
    }
}
