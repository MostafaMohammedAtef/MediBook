#include "Patient.h"
#include <iostream>
#include <string>

using namespace std;

Patient::Patient(string pID, string pName, int pAge, string pPhone) : patientID(pID), name(pName), age(pAge), phone(pPhone) {}

string Patient::getID()
{
  return patientID;
}

string Patient::getName()
{
  return name;
}

int Patient::getAge()
{
  return age;
}

string Patient::getPhone()
{
  return phone;
}
