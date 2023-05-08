/*
file name: Assignment7_p1.cpp
Written by: 
Date:
*/

#include<iostream>
#include<iomanip>
using namespace std;

class Doctor
{
        // Student Todos ...
        public:
            void input()
            {
               // Student Todos ...cin>>id>>name>>tel_no;
            }
            void output()
            {
                // Student Todos ...
            }
};

class Patient
{
        // Student Todos ...
        public:
        void input()
        {
            
           // Student Todos ...
        }
        void output()
        {
           // Student Todos ...
        }
};

class Hospital  // This class is not mandatory it may be included in main function
{
private:
    
  static  const int NO_OF_DOCTORS = 3; 
  static const int NO_OF_PATIENTS = 5;
   Doctor d[NO_OF_DOCTORS];
   Patient p[NO_OF_PATIENTS];

public:
    void input()
    {
        
        cout<<"***Enter the details of the "<<NO_OF_DOCTORS<<" Doctor's (ID, Name and telephone Number) ***"<<endl;
        for(int i=0;i<=NO_OF_DOCTORS-1;i++)
        {
            cout<<"#"<<i+1<<" Doctor: ";
            d[i].input();
        }
      
        cout<<"***Enter the details of the "<< NO_OF_PATIENTS<<"  Patient's (Name, Ward_no,fees and doctor_id)***"<<endl;
     
        for(int i=0;i<=NO_OF_PATIENTS-1;i++)
        {
            cout<<"#"<<i+1<<" Patient: ";
            p[i].input();
        }
    }
    void output()
    {
    
        cout<<"***DOCTOR DETAILS*******"<<endl;
        cout<<setw(12)<<"ID"<<setw(12)<<"Name"<<setw(12)<<"Tel No"<<endl;
        for(int i=0;i<=NO_OF_DOCTORS-1;i++)
        {
            d[i].output();
        }
        cout<<"***PATIENT DETAILS*******"<<endl;
        cout<<setw(12)<<"Name"<<setw(12)<<"Ward No"<<setw(12)<<"Fees"<<setw(12)<<"Doctor's ID"<<endl;
        for(int i=0;i<=NO_OF_PATIENTS-1;i++)
        {
            p[i].output();
        }
    }
};
int main()
{
    // Student Todos ...
}