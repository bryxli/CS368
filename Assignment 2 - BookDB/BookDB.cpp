#include "BookDB.h"

int addBook(int bookID, int year, double rating, std::vector<Book> &db){
  for(auto i:db){
    if(i.ID==bookID){
      return 1;
    }
  }
  struct Book book={bookID,year,rating};
  db.push_back(book);
  return 0;
}

int updateBook(int bookID, int year, double rating, std::vector<Book> &db){//DOES NOT WORK WONT UPDATE
  for(auto& i:db){
    if(i.ID==bookID){
      i.year=year;
      i.rating=rating;
      return 0;
    }
  }
  return 1;
}

int deleteBook(int bookID, std::vector<Book> &db){
  int counter=0;
  for(auto i:db){
    if(i.ID==bookID){
      db.erase(db.begin()+counter);
      return 0;
    }
    counter++;
  }
  return 1;
}

std::vector<Book>* findBooks(int year, const std::vector<Book> &db){
  std::vector<Book> *books=new std::vector<Book>;
  for(auto i:db){
    if(i.year==year){
      (*books).push_back(i);
    }
  }
  return books;
}

double calculateAverageRating(const std::vector<Book> &db){
  double rating=0;
  if(db.size()>0){
    for(auto i:db){
      rating+=i.rating;
    }
    return rating/db.size();
  }
  return -1.0;
}

void print(const std::vector<Book> &db){
  for(auto i:db){
    std::cout<<i.ID<<", "<<i.year<<", "<<i.rating<<std::endl;
  }
}

bool printByYear(const std::vector<Book> &db, int year){
  bool printed=false;
  for(auto i:db){
    if(i.year==year){
      std::cout<<i.ID<<", "<<i.year<<", "<<i.rating<<std::endl;
      printed=true;
    }
  }
  return printed;
}

bool sortID(Book a, Book b){
  if(a.ID<b.ID)
    return true;
  return false;
}

bool sortYear(Book a, Book b){
  if(a.year<b.year)
    return true;
  if(a.year>b.year)
    return false;
  return sortID(a,b);
}

bool sortRating(Book a, Book b){
  if(a.rating<b.rating)
    return true;
  if(a.rating>b.rating)
    return false;
  return sortID(a,b);
}

int sortDB(std::vector<Book> &db, int sortingMethod){
  switch(sortingMethod){
    case 1:
      std::sort(db.begin(),db.end(),sortID);
      return 0;
    case 2:
      std::sort(db.begin(),db.end(),sortYear);
      return 0;
    case 3:
      std::sort(db.begin(),db.end(),sortRating);
      return 0;
    default:
      return 1;
  }
}
