#include "Hospital.h"
#include "Patient.h"
#include "Doctor.h"

int main()
{
  Hospital hospital;

  // Doctors
  Doctor *drAhmed = new Doctor("DOC001", "Ahmed Hassan", "Cardiology");
  Doctor *drSara = new Doctor("DOC002", "Sara Khalid", "Neurology");
  Doctor *drOmar = new Doctor("DOC003", "Omar Tarek", "Orthopedics");

  hospital.registerDoctor(drAhmed);
  hospital.registerDoctor(drSara);
  hospital.registerDoctor(drOmar);

  // Patients
  Patient *Mostafa = new Patient("PAT001", "Mostafa Mohammed", 20, "0123456789");
  Patient *Yehia = new Patient("PAT002", "Yehia Mohammed", 22, "0111234567");
  Patient *Layla = new Patient("PAT003", "Layla Ahmed", 30, "0109876543");
  Patient *Karim = new Patient("PAT004", "Karim Samir", 45, "0155556666");
  Patient *Nour = new Patient("PAT005", "Nour Ibrahim", 28, "0122223333");
  Patient *Hana = new Patient("PAT006", "Hana Wael", 35, "0144445555");
  Patient *Tarek = new Patient("PAT007", "Tarek Adel", 50, "0166667777");

  hospital.registerPatient(Mostafa);
  hospital.registerPatient(Yehia);
  hospital.registerPatient(Layla);
  hospital.registerPatient(Karim);
  hospital.registerPatient(Nour);
  hospital.registerPatient(Hana);
  hospital.registerPatient(Tarek);

  // Appointments
  hospital.bookAppointment("PAT001", "DOC001", "7/9/2026", "09:00 AM", "normal");
  hospital.bookAppointment("PAT002", "DOC001", "7/9/2026", "10:00 AM", "urgent");
  hospital.bookAppointment("PAT003", "DOC002", "7/9/2026", "11:00 AM", "normal");
  hospital.bookAppointment("PAT004", "DOC002", "7/10/2026", "09:30 AM", "urgent");
  hospital.bookAppointment("PAT005", "DOC003", "7/10/2026", "02:00 PM", "normal");
  hospital.bookAppointment("PAT006", "DOC003", "7/11/2026", "03:00 PM", "urgent");
  hospital.bookAppointment("PAT007", "DOC001", "7/11/2026", "04:00 PM", "normal");

  // Show all
  cout << "========== ALL APPOINTMENTS ==========" << endl;
  hospital.showAllAppointments();

  // Cancel some
  hospital.cancelAppointment("APT003");
  hospital.cancelAppointment("APT005");

  cout << endl
       << "========== AFTER CANCELLATIONS ==========" << endl;
  hospital.showAllAppointments();

  cout << endl
       << "========== DR AHMED SCHEDULE ==========" << endl;
  hospital.showDoctorSchedule("DOC001");

  cout << endl
       << "========== DR SARA SCHEDULE ==========" << endl;
  hospital.showDoctorSchedule("DOC002");

  cout << endl
       << "========== DR OMAR SCHEDULE ==========" << endl;
  hospital.showDoctorSchedule("DOC003");

  // Test non-existent
  cout << endl
       << "========== CANCEL NON-EXISTENT ==========" << endl;
  hospital.cancelAppointment("APT999");

  // Cleanup
  delete drAhmed;
  delete drSara;
  delete drOmar;
  delete Mostafa;
  delete Yehia;
  delete Layla;
  delete Karim;
  delete Nour;
  delete Hana;
  delete Tarek;

  return 0;
}