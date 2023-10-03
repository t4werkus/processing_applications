#ifndef PROCESSING_APPLICATIONS_LIST_H
#define PROCESSING_APPLICATIONS_LIST_H
#include "Applications.h"
struct Node {
    Applications value;
    Node* pNode;
    explicit Node (Applications data) : value(std::move(data)), pNode(nullptr) {}
};

struct List {
    Node* head;
public:
    List() : head(nullptr) {}
    void push_back(const Applications& appointment_after) {
        Node* newNode = new Node(appointment_after);
        newNode->pNode = head;
        head = newNode;
    }
    void display() const {
        Node* current = head;
        while (current != nullptr) {
            cout << "Назначение: " << current->value.get_appointment() << ", Номер: " << current->value.get_number()
                 << ", Имя: " << current->value.get_name() << ", Дата: " << current->value.get_date() << endl;
            current = current->pNode;
        }
    }
    void remove(Applications appointment_after) {
        Node** current = &head;
        while (*current != nullptr) {
            if ((*current)->value.get_appointment() == appointment_after.get_appointment() &&
                (*current)->value.get_number() == appointment_after.get_number() &&
                (*current)->value.get_name() == appointment_after.get_name() &&
                (*current)->value.get_date() == appointment_after.get_date()) {
                Node* temp = *current;
                *current = (*current)->pNode;
                delete temp;
                return;
            }
            current = &((*current)->pNode);
        }
    }
    void find(int number, const string& date) const {
        Node* current = head;
        while (current != nullptr) {
            if (current->value.get_number() == number && current->value.get_date() == date) {
                cout << "Назначение: " << current->value.get_appointment() << ", Номер: " << current->value.get_number()
                     << ", Имя: " << current->value.get_name() << ", Дата: " << current->value.get_date() << endl;
            }
            current = current->pNode;
        }
    }
};





#endif //PROCESSING_APPLICATIONS_LIST_H
