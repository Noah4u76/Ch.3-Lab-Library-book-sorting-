#ifndef VECTORLIBRARYH
#define VECTORLIBRARYH

#include "Book.h"
#include <vector>
using namespace std;

class VectorLibrary {
   public:
      VectorLibrary();

      int InsertSorted(const Book &newBook, int counter);

      void PrintLibrary() const;
   
   private:
   // vector library
   vector<Book> library;

};

#endif