#ifndef PROCESSING_APPLICATIONS_APPLICATIONS_H
#define PROCESSING_APPLICATIONS_APPLICATIONS_H
#include <bits/stdc++.h>
using namespace std;
struct Applications {
private:
    string appointment;
    int number = 0;
    string name;
    string date;
public:
    void set_appointment(const string& appointment) { this->appointment = appointment; }
    void set_number(int number) { this->number = number; }
    void set_name(const string& names)  { name = names; }
    void set_date(const string& date1) { date = date1; }
    string get_appointment() { return appointment;}
    int get_number() { return number;}
    string get_name() { return name;}
    string get_date() { return date;}
};


#endif //PROCESSING_APPLICATIONS_APPLICATIONS_H
