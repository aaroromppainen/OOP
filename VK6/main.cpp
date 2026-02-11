#include <iostream>
#include <memory>
#include "student.h"
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
    int selection =0;
    string studentName;
    int studentAge;
    string target;
    vector<Student>studentList;
    vector<Student>::iterator it = studentList.begin();
    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            cout << "Valinta 0" << endl;
            cout << "Anna oppilaan nimi: "; cin >> studentName; cout << endl;
            cout << "Anna oppilaan ika: "; cin >> studentAge; cout << endl;
            studentList.emplace_back(studentName, studentAge);
            cout << "lisättiin: " << studentName << " " << studentAge << endl;
            break;
        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            cout << "valitse 1: Tulosta kaikki oppilaat" << endl;
            for(auto &s : studentList){
                cout << s.getName() << ": " << s.getAge() << endl;
            }
            //cout << "Valinta 1" << endl;
            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            cout << "Valitse 2: " << endl;
            sort(studentList.begin(), studentList.end(), [](const Student &a, const Student &b){
                return a.getName() < b.getName();
            });
            for (auto &s : studentList) {
                s.printStudentInfo();
            }
            break;

        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            cout << "Valitse 3: " << endl;
            sort(studentList.begin(), studentList.end(), [](const Student &a, const Student &b){
                return a.getAge() < b.getAge();
            });
            for (auto &s : studentList) {
                s.printStudentInfo();
            }
            break;


        case 4:
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            cout << "Valinta 4" << endl;
            cout << "Anna oppilaan nimi: "; cin >> target; cout << endl;
            it = find_if(studentList.begin(), studentList.end(), [target](const Student &a){
                return a.getName() == target;
            });
            if(it != studentList.end()) {
                cout << "oppilas löytyi: " << endl; it->printStudentInfo();
            } else {
                cout << "oppilas " << target << "ei löytynyt." << endl;
            }



            break;

    default:
        cout<< "Wrong selection, stopping..."<<endl;
        break;
    }
}while(selection < 5);

return 0;
}
