#ifndef BOOKH
#define BOOKH

#include <string>
using namespace std;

class Book{
   public:
      Book();

      Book(string userBookTitle, string userBookAuthor, long userBookISBN);

      long long GetBookISBN() const;

      void PrintInfo() const;
   
   private:
      string bookTitle;
      string bookAuthor;
      long long bookISBN;
};

#endif