#include "BookDB.h"

int main(){
  bool loop=true;
  std::vector<Book> books;
  while(loop){
    int success=0;
    char choice;
    std::cin>>choice;
    int id;
    int year;
    double rating;
    std::cout<<"> ";
    switch(choice){
      case 'p':
        if(books.size()>0){
          print(books);
        }
        else{
          std::cout<<"No entries"<<std::endl;
        }
        break;
      case 'a':
        std::cin>>id>>year>>rating;
        success=addBook(id,year,rating,books);
        if(success==0)
          std::cout<<"Book "<<id<<" added"<<std::endl;
        break;
      case 'd':
        std::cin>>id;
        success=deleteBook(id,books);
        if(success==0){
          std::cout<<"Book "<<id<<" removed"<<std::endl;
        }
        break;
      case 'u':
        std::cin>>id>>year>>rating;
        success=updateBook(id,year,rating,books);
        if(success==0){
          std::cout<<"Book "<<id<<" updated"<<std::endl;
        }
        break;
      case 'c':
        success=calculateAverageRating(books);
        if(success!=-1)
          std::cout<<"Average rating = "<<calculateAverageRating(books)<<std::endl;
        break;
      case 'f':
        int year;
        std::cin>>year;
        if(printByYear(books,year)==false){
          std::cout<<"No entries"<<std::endl;
        }
        break;
      case 's':
        int sort;
        std::cin>>sort;
        sortDB(books,sort);
        break;
      case 'q':
        loop=false;
        std::cout<<"quit"<<std::endl;
        return 0;
      default:
        break;
    }
    if(success==1||success==-1){
      std::cout<<"Error processing command"<<std::endl;
    }
  }
}
