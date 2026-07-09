#include "Hospital.h"
#include "Patient.h"
#include "Doctor.h"
#include "Appointment.h"
int main()
{
  Hospital hospital;
  Patient *Mostafa = new Patient("223344", "Mostafa Mohammed", 20, "0123456789");
  Doctor *SigmaDoctor = new Doctor("123456", "Sigma Doctor", "Heart Surgical");
  Patient *Yehia = new Patient("442133", "Yehia Mohammed", 20, "01234567449");
  hospital.registerPatient(Mostafa);
  hospital.registerDoctor(SigmaDoctor);
  hospital.bookAppointment(Mostafa->getID(), SigmaDoctor->getID(), "7/9/2026", "10:01 AM", "normal");
  hospital.registerPatient(Yehia);
  hospital.bookAppointment(Yehia->getID(), SigmaDoctor->getID(), "7/10/2026", "12:44 PM", "urgent");
  hospital.showAllAppointments();
  cout << endl
       << endl;
  hospital.showDoctorSchedule(SigmaDoctor->getID());
  hospital.cancelAppointment("APT1");
  cout << endl
       << endl;
  hospital.showAllAppointments();
  cout << endl
       << endl;
  hospital.showDoctorSchedule(SigmaDoctor->getID());
  delete Mostafa;
  delete Yehia;
  delete SigmaDoctor;
  return 0;
}

// bookAppointment(string patientID, string doctorID, string date, string time, string priority)