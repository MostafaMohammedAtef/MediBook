#include "Doctor.h"

Doctor::Doctor(string dID, string dName, string dSpecialization) : doctorID(dID), name(dName), specialization(dSpecialization)
{
}

string Doctor::getID()
{
  return doctorID;
}

string Doctor::getName()
{
  return name;
}

string Doctor::getSpecialization()
{
  return specialization;
}
