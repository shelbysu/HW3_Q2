//
// Created by Shelby on 11/7/2021.
//
#include "Triangle.h"

#include <iostream>

using namespace std;

void Triangle::draw()
{
    int i, j, k;
    for (i = 1; i <= height - i; i++)
    {
        for (j = 1; j <= height - 1; j++)
        {
            cout << " ";
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}