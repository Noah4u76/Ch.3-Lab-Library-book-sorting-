#ifndef BOOKNODEH
#define BOOKNODEH

#include <string>
using namespace std;

class BookNode {
   public:
      BookNode();

      // Constructor
      BookNode(string bookTitleInit, string bookAuthorInit, long bookISBNInit);

      // Constructor
      BookNode(string bookTitleInit, string bookAuthorInit, long bookISBNInit, BookNode* nextLoc);

      // inserAfter
      void insertAfter(BookNode* nodeLoc);
      
      //setNext
      void SetNext(BookNode* nodeLoc);

      // Get location pointed by nextNodePtr
      BookNode* GetNext() const;

      long long GetBookISBN() const;

      // Print book information
      void PrintBookInfo() const;
   
   private:
      string bookTitle;
      string bookAuthor;
      long long bookISBN;
      BookNode* nextNodePtr; // Reference to the next node
};
#endif