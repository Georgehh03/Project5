#include <iostream>
#include <unordered_map>
#include "Dogs.h"

using namespace std;

int main()
{
    try
    {
        Dogs dogPopulation;

        int choice;
        do
        {
            cout << "Menu: " << endl;
            cout << "1. See the total number of dogs in the world" << endl;
            cout << "2. Input a country name to find out how many dogs are in that country" << endl;
            cout << "3. Quit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
                case 1:
                    cout << "Total number of dogs in the world: " << dogPopulation.getDogPopulation() << endl;
                    break;
                case 2:
                    dogPopulation.getCountryPopulation();
                    break;
                case 3:
                    cout << "Exiting the program" << endl;
                    break;
                default:
                    cout << "Invalid choice. Please try again." << endl;
            }

        }
        while (choice != 3);
    }
    catch (const exception& e)
    {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }

    return 0;
}
