#include <iostream>
using namespace std;

int getAge();
void displayAge(int age);

// ========================
int main()
{ 
  int age;

  // function prototypes above main
  age = getAge();  // function calls
  displayAge(age); //

  return 0;
  
}
// ========================

// ========================
int getAge()
{
  int age;

  cout << "Enter your age: ";
  cin >> age;

  return age;
}
// ========================

void displayAge(int age)
{
  cout << "You are " << age << " years old.";
}