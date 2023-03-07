#include "Book.h"
#include <iostream>

Book::Book() {
   bookTitle = "";
   bookAuthor = "";
   bookISBN = 0;
}

Book::Book(string userBookTitle, string userBookAuthor, long userBookISBN) {
   bookTitle = userBookTitle;
   bookAuthor = userBookAuthor;
   bookISBN = userBookISBN;
}

long long Book::GetBookISBN() const{
   return bookISBN;
}

void Book::PrintInfo() const{
   cout << "Title: " << bookTitle << endl;
   cout << "Author: " << bookAuthor << endl;
   cout << "ISBN: " << bookISBN << endl;
}