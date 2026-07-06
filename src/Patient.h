#pragma once
#include <iostream>
#include <string>

using namespace std;
class Patient
{
private:
  string patientID;
  string name;
  int age;
  string phone;

public:
  Patient(string pID = "unknown", string pName = "unknown", int pAge = 0, string pPhone = "");
  string getID();
  string getName();
  int getAge();
  string getPhone();
};