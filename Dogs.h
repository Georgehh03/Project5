#ifndef DOGS_H
#define DOGS_H

#include <string>
#include <unordered_map>


class Dogs
{
    public:
        Dogs();
        int getDogPopulation();
        int getCountryPopulation();
         //may or may not need



    protected:

    private:
        int m_dogPopulation = 0;
        unordered_map <string,int> m_dogs;
};

#endif // DOGS_H
