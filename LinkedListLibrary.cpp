#include "LinkedListLibrary.h"
#include <iostream>

LinkedListLibrary::LinkedListLibrary() {
   // Front of nodes list
   headNode = nullptr;
}

LinkedListLibrary::~LinkedListLibrary() {
   while(headNode != nullptr) {
      BookNode* tempNode = headNode->GetNext();
      delete headNode;
      headNode = tempNode;
   }
}

int LinkedListLibrary::InsertSorted(BookNode* newNode, int counter) {
   BookNode* currNode, nextNode;

   // Special case for head node
   if (headNode == nullptr || headNode->GetBookISBN() >= newNode->GetBookISBN()) {
      newNode->SetNext(headNode);
      headNode = newNode;
   }
   else {
      // Locate the node before insertion point
      currNode = headNode;

      while (currNode->GetNext() && currNode->GetNext()->GetBookISBN() < newNode->GetBookISBN()) {
         currNode = currNode->GetNext();
      }
      currNode->insertAfter(newNode);
   }

   ++counter;
   return counter;
}

void LinkedListLibrary::PrintLibrary() const {
   BookNode* currNode;

   currNode = headNode->GetNext();
   while (currNode != nullptr) {
      currNode->PrintBookInfo();
      cout << endl;
      currNode = currNode->GetNext();
   }
}