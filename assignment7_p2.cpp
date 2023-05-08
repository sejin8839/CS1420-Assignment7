/*
file name: Assignment7_p2.cpp
Written by: 
Date:
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
            
            // Student TODOS
        }
        void output()
        {
             // Student TODOS
        }
    Dimension add(Dimension d)
    {

        // Student TODOS

    }
};
int main()
{
    Dimension L1,L2,total;
    
    cout<<"*Enter Line Segment 1 Dimension (centimetres and millimetres): ";
    L1.input();
   cout<<"*Enter Line Segment 2 Dimension (centimetres and millimetres): ";
    L2.input();
    total=L1.add(L2);
    cout<<"Dimension: L1 + L2 = ";
    total.output();
}
