#ifndef LINKEDLISTLIBRARYH
#define LINKEDLISTLIBRARYH

#include "BookNode.h"
using namespace std;

class LinkedListLibrary {
   public:
      //Linked list node
      BookNode* headNode;

      LinkedListLibrary();

      ~LinkedListLibrary();

      int InsertSorted(BookNode* newNode, int counter);

      void PrintLibrary() const;
};

#endif