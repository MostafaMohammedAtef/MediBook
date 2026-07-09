#pragma once
#include <iostream>
#include <string>

using namespace std;

class Doctor
{
private:
  string doctorID;
  string name;
  string specialization;

public:
  Doctor(string dID = "unknown", string dName = "unknown", string dSpecialization = "unknown");

  string getID();
  string getName();
  string getSpecialization();
};