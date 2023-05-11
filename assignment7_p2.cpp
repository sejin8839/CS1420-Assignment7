/*
file name: Assignment7_p2.cpp
Written by: Sejin Yoon
Date: May 11, 2023
*/


#include<iostream>
using namespace std;

/**
Every Dimension object is specified in two parts centimeters and millimeters.
that is CM and MM
**/
class Dimension
{
    private:
        int CM;
        int MM;
    public:
        void input()
        {
            cout << "Enter centimeters: ";
            cin >> CM;
            cout << "Enter millimeters: ";
            cin >> MM;
        }
        void output()
        {
            cout << CM << " cm " << MM << " mm" << endl;
        }
        Dimension add(Dimension d)
        {
            Dimension result;
            result.MM = (MM + d.MM) % 10;
            result.CM = CM + d.CM + (MM + d.MM) / 10;
            return result;
        }
};

int main()
{
    Dimension L1, L2, total;
    cout << "*Enter Line Segment 1 Dimension (centimetres and millimetres): ";
    L1.input();
    cout << "*Enter Line Segment 2 Dimension (centimetres and millimetres): ";
    L2.input();
    total = L1.add(L2);
    cout << "Dimension: L1 + L2 = ";
    total.output();
    return 0;
}
