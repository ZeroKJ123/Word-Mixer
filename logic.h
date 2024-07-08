#include <iostream>
#include <cstring>
#include <string>
#ifndef LOGIC_H
#define LOGIC_H
 


int civRand(int x, int y)
{
    return (rand() % (x - y) + x);
}

bool mixer(string slovo)
{
    int cikl = 1;
    string result;
    int dlina = strlen(slovo);

    while(cikl == dlina)
    {
        int i = civRand(1, dlina);

        slovo[i] = slovo[cikl]

    }

    result = slovo;

    cout << "Result: " << result << endl;

    return true;
}

#endif 