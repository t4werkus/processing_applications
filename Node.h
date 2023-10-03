#ifndef PROCESSING_APPLICATIONS_NODE_H
#define PROCESSING_APPLICATIONS_NODE_H

#include "Applications.h"
struct Node {
    Applications value;
    Node* pNode;
    explicit Node (Applications data) : value(std::move(data)), pNode(nullptr) {}
};
#endif //PROCESSING_APPLICATIONS_NODE_H
