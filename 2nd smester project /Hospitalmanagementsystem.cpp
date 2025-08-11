#include<iostream>
#include<cmath>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
class HospitalmanagementSystem{
public:
void patientmanagement();
void doctormanagement();
void appointmentmanagement();
void billmanagement();
void reports();
};
void HospitalmanagementSystem::patientmanagement(){
    int choice;
    int id = 0, age = 0;
    string name, contact;
    do {
        cout<<"\nPatient Management"<<endl;
        cout<<"1.Add Patient"<<endl;
        cout<<"2.Delete Patient"<<endl;
        cout<<"3.Update Patient"<<endl;
        cout<<"4.View Patients"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Select: ";
        cin>>choice;
        switch(choice){
            case 1: {
                cout<<"Enter Patient ID: ";
                cin>>id;
                cout<<"Enter Patient Name: ";
                cin>>name;
                cout<<"Enter Patient Age: ";
                cin>>age;
                cout<<"Enter Patient Contact Number: ";
                cin>>contact;
                ofstream fout("patients.txt", ios::app);
                fout << id << "," << name << "," << age << "," << contact << endl;
                fout.close();
                cout<<"Patient Added Successfully"<<endl;
                break;
            }
            case 2: {
                cout<<"Enter Patient ID to Delete: ";
                int id1;
                cin>>id1;
                ifstream fin("patients.txt");
                vector<string> lines;
                string line;
                while(getline(fin, line)) {
                    if(line.substr(0, line.find(",")) != to_string(id1))
                        lines.push_back(line);
                }
                fin.close();
                ofstream fout("patients.txt");
                for(const auto& l : lines) fout << l << endl;
                fout.close();
                cout<<"Patient Deleted Successfully"<<endl;
                break;
            }
            case 3: {
                cout<<"Enter Patient ID to Update: ";
                int id2;
                cin>>id2;
                cout<<"Enter New Patient Name: ";
                cin>>name;
                cout<<"Enter New Patient Age: ";
                cin>>age;
                cout<<"Enter New Patient Contact Number: ";
                cin>>contact;
                ifstream fin("patients.txt");
                vector<string> lines;
                string line;
                while(getline(fin, line)) {
                    if(line.substr(0, line.find(",")) == to_string(id2)) {
                        lines.push_back(to_string(id2) + "," + name + "," + to_string(age) + "," + contact);
                    } else {
                        lines.push_back(line);
                    }
                }
                fin.close();
                ofstream fout("patients.txt");
                for(const auto& l : lines) fout << l << endl;
                fout.close();
                cout<<"Patient Updated Successfully"<<endl;
                break;
            }
            case 4: {
                cout<<"All Patients:"<<endl;
                ifstream fin("patients.txt");
                string line;
                while(getline(fin, line)) {
                    size_t p1 = line.find(",");
                    size_t p2 = line.find(",", p1+1);
                    size_t p3 = line.find(",", p2+1);
                    if(p1!=string::npos && p2!=string::npos && p3!=string::npos) {
                        cout << "ID: " << line.substr(0,p1)
                             << ", Name: " << line.substr(p1+1,p2-p1-1)
                             << ", Age: " << line.substr(p2+1,p3-p2-1)
                             << ", Contact: " << line.substr(p3+1) << endl;
                    }
                }
                fin.close();
                break;
            }
            case 5:
                cout<<"Exiting Patient Management..."<<endl;
                break;
            default:
                cout<<"Invalid Choice"<<endl;
                break;
        }
    } while(choice != 5);
}

void HospitalmanagementSystem::doctormanagement(){
    int choice;
    int id = 0;
    string name, specialization, contact;
    do {
        cout<<"\nDoctor Management"<<endl;
        cout<<"1.Add Doctor"<<endl;
        cout<<"2.Delete Doctor"<<endl;
        cout<<"3.Update Doctor"<<endl;
        cout<<"4.View Doctor"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Select: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter Doctor ID: ";
                cin>>id;
                cout<<"Enter Doctor Name: ";
                cin>>name;
                cout<<"Enter Doctor Specialization: ";
                cin>>specialization;
                cout<<"Enter Doctor Contact Number: ";
                cin>>contact;
                cout<<"Doctor Added Successfully"<<endl;
                break;
            case 2:
                cout<<"Enter Doctor ID to Delete: ";
                int id1;
                cin>>id1;
                cout<<"Doctor Deleted Successfully"<<endl;
                break;
            case 3:
                cout<<"Enter Doctor ID to Update: ";
                int id2;
                cin>>id2;
                cout<<"Enter New Doctor Name: ";
                cin>>name;
                cout<<"Enter New Doctor Specialization: ";
                cin>>specialization;
                cout<<"Enter New Doctor Contact Number: ";
                cin>>contact;
                cout<<"Doctor Updated Successfully"<<endl;
                break;
            case 4:
                cout<<"Enter Doctor ID to View: ";
                int id3;
                cin>>id3;
                cout<<"Doctor Details"<<endl;
                cout<<"Doctor ID : "<<id3<<endl;
                cout<<"Doctor Name : "<<name<<endl;
                cout<<"Doctor Specialization : "<<specialization<<endl;
                cout<<"Doctor Contact Number : "<<contact<<endl;
                break;
            case 5:
                cout<<"Exiting Doctor Management..."<<endl;
                break;
            default:
                cout<<"Invalid Choice"<<endl;
                break;
        }
    } while(choice != 5);
}

void HospitalmanagementSystem::appointmentmanagement(){
    int choice;
    int id = 0, patientId = 0, doctorId = 0;
    string date, time;
    do {
        cout<<"\nAppointment Management"<<endl;
        cout<<"1.Book Appointment"<<endl;
        cout<<"2.Cancel Appointment"<<endl;
        cout<<"3.Update Appointment"<<endl;
        cout<<"4.View Appointment"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Select: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter Appointment ID: ";
                cin>>id;
                cout<<"Enter Patient ID: ";
                cin>>patientId;
                cout<<"Enter Doctor ID: ";
                cin>>doctorId;
                cout<<"Enter Appointment Date (YYYY-MM-DD): ";
                cin>>date;
                cout<<"Enter Appointment Time (HH:MM): ";
                cin>>time;
                cout<<"Appointment Booked Successfully"<<endl;
                break;
            case 2:
                cout<<"Enter Appointment ID to Cancel: ";
                int id1;
                cin>>id1;
                cout<<"Appointment Cancelled Successfully"<<endl;
                break;
            case 3:
                cout<<"Enter Appointment ID to Update: ";
                int id2;
                cin>>id2;
                cout<<"Enter New Patient ID: ";
                cin>>patientId;
                cout<<"Enter New Doctor ID: ";
                cin>>doctorId;
                cout<<"Enter New Appointment Date (YYYY-MM-DD): ";
                cin>>date;
                cout<<"Enter New Appointment Time (HH:MM): ";
                cin>>time;
                cout<<"Appointment Updated Successfully"<<endl;
                break;
            case 4:
                cout<<"Enter Appointment ID to View: ";
                int id3;
                cin>>id3;
                cout<<"Appointment Details"<<endl;
                cout<<"Appointment ID : "<<id3<<endl;
                cout<<"Patient ID : "<<patientId<<endl;
                cout<<"Doctor ID : "<<doctorId<<endl;
                cout<<"Appointment Date : "<<date<<endl;
                cout<<"Appointment Time : "<<time<<endl;
                break;
            case 5:
                cout<<"Exiting Appointment Management..."<<endl;
                break;
            default:
                cout<<"Invalid Choice"<<endl;
                break;
        }
    } while(choice != 5);
}

void HospitalmanagementSystem::billmanagement(){
    int choice;
    int id = 0, patientId = 0, doctorId = 0;
    float amount = 0.0;
    do {
        cout<<"\nBilling Management"<<endl;
        cout<<"1.Generate Bill"<<endl;
        cout<<"2.View Bill"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Select: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter Bill ID: ";
                cin>>id;
                cout<<"Enter Patient ID: ";
                cin>>patientId;
                cout<<"Enter Doctor ID: ";
                cin>>doctorId;
                cout<<"Enter Amount: ";
                cin>>amount;
                cout<<"Bill Generated Successfully"<<endl;
                break;
            case 2:
                cout<<"Enter Bill ID to View: ";
                int id1;
                cin>>id1;
                cout<<"Bill Details"<<endl;
                cout<<"Bill ID : "<<id1<<endl;
                cout<<"Patient ID : "<<patientId<<endl;
                cout<<"Doctor ID : "<<doctorId<<endl;
                cout<<"Amount : "<<amount<<endl;
                break;
            case 3:
                cout<<"Exiting Billing Management..."<<endl;
                break;
            default:
                cout<<"Invalid Choice"<<endl;
                break;
        }
    } while(choice != 3);
}

void HospitalmanagementSystem::reports(){
    int choice;
    do {
        cout<<"\nReports"<<endl;
        cout<<"1.Patient Report"<<endl;
        cout<<"2.Doctor Report"<<endl;
        cout<<"3.Appointment Report"<<endl;
        cout<<"4.Billing Report"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Select: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Patient Report"<<endl;
                break;
            case 2:
                cout<<"Doctor Report"<<endl;
                break;
            case 3:
                cout<<"Appointment Report"<<endl;
                break;
            case 4:
                cout<<"Billing Report"<<endl;
                break;
            case 5:
                cout<<"Exiting Reports..."<<endl;
                break;
            default:
                cout<<"Invalid Choice"<<endl;
                break;
        }
    } while(choice != 5);
}
int main(){
    HospitalmanagementSystem hms;
    int mainapploop;
    do {
        cout << "1.Patient Management\n2.Doctor Management\n3.Appointment Scheduling\n4.Billing System\n5.Reports\n6.Exit\nSelect:";
        cin >> mainapploop;
        switch(mainapploop){
            case 1:
                hms.patientmanagement();
                break;
            case 2:
                hms.doctormanagement();
                break;
            case 3:
                hms.appointmentmanagement();
                break;
            case 4:
                hms.billmanagement();
                break;
            case 5:
                hms.reports();
                break;
            case 6:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice\n";
        }
    } while (mainapploop != 6);
}