//
// Created by Shelby on 11/7/2021.
//
#include <iostream>
using namespace std;
#include "Rectangle.h"

void Rectangle::draw()
{
    for(int i=1; i<=height; i++)
    {
        for(int j=1; j<=width; j++)
        {
            cout << "*";
        }
        cout<< endl;
    }
}
