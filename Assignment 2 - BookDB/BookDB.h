/*
BookDB is a database of books that allows you to add, delete, print, etc.
Sources: https://www.geeksforgeeks.org/structure-sorting-in-c/
Used as a guide for the sortDB() method
*/
#ifndef IFNDEF_H
#define IFNDEF_H

#include <vector>
#include <iostream>
#include <algorithm>
struct Book{
  int ID;
  int year;
  double rating;
};

/**
 * Adds a Book to db
 * @param bookID the ID to assign to the book
 * @param year the publication year to assign to the book
 * @param rating the rating to assign to the book
 * @param db the vector that holds the Book structs
 * @return 1 if the method fails and 0 otherwise
 */
int addBook(int bookID, int year, double rating, std::vector<Book> &db);

/**
 * Updates a Book in db
 * @param bookID the ID to search for
 * @param year the publication year to assign to the book
 * @param rating the rating to assign to the book
 * @param db the vector that holds the Book structs
 * @return 1 if the method fails and 0 otherwise
 */
int updateBook(int bookID, int year, double rating, std::vector<Book> &db);

/**
 * Deletes a Book in db
 * @param bookID the ID to search for
 * @param db the vector that holds the Book structs
 * @return 1 if the method fails and 0 otherwise
 */
int deleteBook(int bookID, std::vector<Book> &db);

/**
 * Finds all Books for a given publication year in db
 * @param year the publication year to search for
 * @param db the vector that holds the Book structs
 * @return a pointer to a vector of Books that holds all found Books
 */
std::vector<Book>* findBooks(int year, const std::vector<Book> &db);

/**
 * Calculates the average rating of all Books in db
 * @param db the vector that holds the Book structs
 * @return the average rating of all Books in db or -1 if the method fails
 */
double calculateAverageRating(const std::vector<Book> &db);

/**
 * Prints out the ID, publication year, and rating of all Books in db
 * @param db the vector that holds the Book structs
 */
void print(const std::vector<Book> &db);

/**
 * Prints out the ID, publication year, and rating of all Books for
 * a given publication year in db
 * @param db the vector that holds the Book structs
 * @param year the publication year to to search for
 * @return false if the method fails and true otherwise
 */
bool printByYear(const std::vector<Book> &db, int year);


/**
 * Sorts the Books in db
 * @param db the vector that holds the Book structs
 * @param sortingMethod the desired sorting method (1-3) to use on db
 * @return 1 if the method fails and 0 otherwise
 */
int sortDB(std::vector<Book> &db, int sortingMethod);

#endif
