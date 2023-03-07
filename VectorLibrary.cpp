#include "VectorLibrary.h"
#include <iostream>

VectorLibrary::VectorLibrary() {
      vector<Book> library;
}

int VectorLibrary::InsertSorted(const Book &newBook, int counter) {
   Book currBook;

   // Add an empty element at end of list
   Book emptyBook;
   library.push_back(emptyBook);

   // Loop through elements starting at the end
   for (int i = library.size() - 2; i >=0; --i) {
      currBook = library.at(i);

      // If the current book's ISBN is larger than newBook's ISBN, shift
      // the current book down 1, count shift operation
      if(currBook.GetBookISBN() > newBook.GetBookISBN()){
         library.at(i + 1) = currBook;
         ++counter;
      }

      // Otherwise, place newBook at the next location (empty slot),
      // count insert operation
      else {
         library.at(i + 1) = newBook;
         ++counter;
         return counter;
      }
   }

   // If we get to the top of the list, place newBook on top
   library.at(0) = newBook;
   ++counter;
   return counter;
}

void VectorLibrary::PrintLibrary() const {
   for (size_t i = 0; i < library.size(); ++i) {
      library.at(i).PrintInfo();
      cout << endl;
   }
}