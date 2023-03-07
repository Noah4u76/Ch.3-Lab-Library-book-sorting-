#include "BookNode.h"
#include <iostream>

BookNode::BookNode() {
   bookTitle = "";
   bookAuthor = "";
   bookISBN = 0;
   nextNodePtr = nullptr;
}

// Constructor
BookNode::BookNode(string bookTitleInit, string bookAuthorInit, long bookISBNInit) {
   bookTitle = bookTitleInit;
   bookAuthor = bookAuthorInit;
   bookISBN = bookISBNInit;
   nextNodePtr = nullptr;
}

// Constructor
BookNode::BookNode(string bookTitleInit, string bookAuthorInit, long bookISBNInit, BookNode* nextLoc) {
   bookTitle = bookTitleInit;
   bookAuthor = bookAuthorInit;
   bookISBN = bookISBNInit;
   nextNodePtr = nextLoc;
}
// insertAfter
void BookNode::insertAfter(BookNode* nodeLoc){
   BookNode* tmpNext;

   tmpNext = nextNodePtr;
   nextNodePtr = nodeLoc;
   nodeLoc->nextNodePtr = tmpNext;
}

// setNext
void BookNode::SetNext(BookNode* nodeLoc) {
   nextNodePtr = nodeLoc;
}

// Get location pointed by nextNodePtr
BookNode* BookNode::GetNext() const{
   return nextNodePtr;
}

long long BookNode::GetBookISBN() const{
   return bookISBN;
}

// Print book information
void BookNode::PrintBookInfo() const{
   cout << "Title: " << bookTitle << endl;
   cout << "Author: " << bookAuthor << endl;
   cout << "ISBN: " << bookISBN << endl;
}