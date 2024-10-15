#include <iostream>
#include <string>
using namespace std;

class Student {
  private:
    string name;
    int id;
    double gpa; 

    public:
      void setName(string n){
        name = n;
      }
      void setID(int i) {
        id = i;
      }
      void setGPA(double g) {
        if (g >= 0.0 && g <= 4.0){
          gpa = g;
        }else{
          cout << "Invalid GPA" << endl;
          gpa = 0.0;
        }
      }
      string getName() {
        return name;
      }
      int getID () {
        return id;
      }
      double getGPA () {
        return gpa;
      }
};
int main (){
  Student student;
  string name;
  int id;
  double gpa;
  cout << "Enter student name: ";
  getline(cin,name);
  cout << "Enter student ID: ";
  cin >> gpa;
  cout << "Enter student GPA: ";
  cin >> gpa;

  student.setName(name);
  student.setID(id);
  student.setGPA(gpa);

  cout << "\n Student Information: " << endl;
  cout << "Name: " << student.getName() << endl;
  cout << "ID: " << student.getID() << endl;
  cout << "GPA: " << student.getGPA() << endl;

  return 0;
}