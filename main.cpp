#include <iostream>
#include <cstring>
#include <string>
#include "logic.h"

using namespace std;

int main()
{
    string firstW;

    cout << "Введите 1 слово: " << endl;
    cin >> firstW;

    cout << mixer(firstW) << endl;

    return 0;
}