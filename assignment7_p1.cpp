/*
file name: Assignment7_p1.cpp
Written by: Sejin Yoon
Date: May 11, 2023
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Doctor {
    private:
        string name;
        int id;
        string tel_no;
        
    public:
        void input() {
            cout << "Enter name of the doctor: ";
            getline(cin, name);
            cout << "Enter ID of the doctor: ";
            cin >> id;
            cout << "Enter telephone number of the doctor: ";
            cin.ignore();
            getline(cin, tel_no);
        }
        
        void output() {
            cout << setw(12) << id << setw(12) << name << setw(12) << tel_no << endl;
        }
};

class Patient {
    private:
        string name;
        int ward_no;
        float fees;
        int doctor_id;
        
    public:
        void input() {
            cout << "Enter name of the patient: ";
            getline(cin, name);
            cout << "Enter ward number of the patient: ";
            cin >> ward_no;
            cout << "Enter fees charged to the patient: ";
            cin >> fees;
            cout << "Enter ID of the doctor who is treating the patient: ";
            cin >> doctor_id;
        }
        
        void output() {
            cout << setw(12) << name << setw(12) << ward_no << setw(12) << fees << setw(12) << doctor_id << endl;
        }
};

int main() {
    const int NO_OF_DOCTORS = 3;
    const int NO_OF_PATIENTS = 5;
    
    Doctor doctors[NO_OF_DOCTORS];
    Patient patients[NO_OF_PATIENTS];
    
    cout << "***Enter the details of the " << NO_OF_DOCTORS << " doctors (ID, name and telephone number)***" << endl;
    for (int i = 0; i < NO_OF_DOCTORS; i++) {
        cout << "#" << i + 1 << " Doctor: " << endl;
        doctors[i].input();
    }
    
    cout << "***Enter the details of the " << NO_OF_PATIENTS << " patients (name, ward number, fees and doctor ID)***" << endl;
    for (int i = 0; i < NO_OF_PATIENTS; i++) {
        cout << "#" << i + 1 << " Patient: " << endl;
        patients[i].input();
    }
    
    cout << "***DOCTOR DETAILS***" << endl;
    cout << setw(12) << "ID" << setw(12) << "Name" << setw(12) << "Tel No" << endl;
    for (int i = 0; i < NO_OF_DOCTORS; i++) {
        doctors[i].output();
    }
    
    cout << "***PATIENT DETAILS***" << endl;
    cout << setw(12) << "Name" << setw(12) << "Ward No" << setw(12) << "Fees" << setw(12) << "Doctor's ID" << endl;
    for (int i = 0; i < NO_OF_PATIENTS; i++) {
        patients[i].output();
    }
    
    return 0;
}
