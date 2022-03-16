#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int s_studentId , char s_name[]) {
          studentId = s_studentId;
          strcpy( name ,s_name );
  
}

// Display StudentId and Name
void Student::display() {

         cout<<"student id :"<<studentId<<endl;
         cout<<"name : "<<name<<endl;
}
