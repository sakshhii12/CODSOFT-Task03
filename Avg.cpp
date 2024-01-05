/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
   int numStudents;
   cout << "Enter the number of students: ";
   cin >> numStudents;

   vector<pair<string, int>> students;

   for (int i = 0; i < numStudents; i++) {
       string name;
       int grade;

       cout << "Enter the name of student " << i + 1 << ": ";
       cin >> name;
       cout << "Enter the grade of " << name << ": ";
       cin >> grade;

       students.push_back({name, grade});
   }

   // Calculate average grade
   int totalGrade = 0;
   for (const auto& student : students) {
       totalGrade += student.second;
   }
   double averageGrade = static_cast<double>(totalGrade) / numStudents;

   // Find highest and lowest grades
   int highestGrade = students[0].second;
   int lowestGrade = students[0].second;
   for (const auto& student : students) {
       highestGrade = max(highestGrade, student.second);
       lowestGrade = min(lowestGrade, student.second);
   }

   // Display results
   cout << "\nAverage grade: " << averageGrade << endl;
   cout << "Highest grade: " << highestGrade << endl;
   cout << "Lowest grade: " << lowestGrade << endl;

   return 0;
}
