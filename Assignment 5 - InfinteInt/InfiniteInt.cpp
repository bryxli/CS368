#include "InfiniteInt.h"
#include <iostream>

InfiniteInt::InfiniteInt(){
    digits={0};
}

InfiniteInt::InfiniteInt(unsigned long long val){
    digits={};
    string value=to_string(val);
    for(unsigned int i=0;i<value.length();i++){
      int digit=stoi(""+value.at(i));
      digits->push_back(digit);
    }
}

InfiniteInt::InfiniteInt(vector<unsigned int>* new_digits){
    vector<unsigned int>::iterator iterator;
    for(auto i:*new_digits){
      iterator=digits->begin();
      digits->insert(iterator,i);
    }
}

InfiniteInt::InfiniteInt(const InfiniteInt &obj){
      digits=obj.digits;
}

InfiniteInt::~InfiniteInt(){
    delete this;
}

InfiniteInt& InfiniteInt::operator=(const InfiniteInt &obj){
    digits=obj.digits;
    return *this;
}

ostream& InfiniteInt::operator<<(ostream& os){
    for(auto i:*digits){
        os<<i;
    }
    return os;
}

istream& InfiniteInt::operator>>(istream& is){
    unsigned int temp;
    is>>temp;
    return is;
}

bool InfiniteInt::operator<(const InfiniteInt &obj){
    string x,y;
    for(auto i:*digits){
        x+=i;
    }
    for(auto i:*obj.digits){
        y+=i;
    }
    unsigned int a=stoi(x);
    unsigned int b=stoi(y);
    return (a<b);
}

bool InfiniteInt::operator>(const InfiniteInt &obj){
    string x,y;
    for(auto i:*digits){
        x+=i;
    }
    for(auto i:*obj.digits){
        y+=i;
    }
    unsigned int a=stoi(x);
    unsigned int b=stoi(y);
    return (a>b);
}

bool InfiniteInt::operator<=(const InfiniteInt &obj){
    string x,y;
    for(auto i:*digits){
        x+=i;
    }
    for(auto i:*obj.digits){
        y+=i;
    }
    unsigned int a=stoi(x);
    unsigned int b=stoi(y);
    return (a<=b);
}

bool InfiniteInt::operator>=(const InfiniteInt &obj){
    string x,y;
    for(auto i:*digits){
        x+=i;
    }
    for(auto i:*obj.digits){
        y+=i;
    }
    unsigned int a=stoi(x);
    unsigned int b=stoi(y);
    return (a>=b);
}

bool InfiniteInt::operator==(const InfiniteInt &obj){
    string x,y;
    for(auto i:*digits){
        x+=i;
    }
    for(auto i:*obj.digits){
        y+=i;
    }
    unsigned int a=stoi(x);
    unsigned int b=stoi(y);
    return (a==b);
}

bool InfiniteInt::operator!=(const InfiniteInt &obj){
    string x,y;
    for(auto i:*digits){
        x+=i;
    }
    for(auto i:*obj.digits){
        y+=i;
    }
    unsigned int a=stoi(x);
    unsigned int b=stoi(y);
    return (a!=b);
}

InfiniteInt InfiniteInt::operator+(const InfiniteInt &obj){
    string x,y;
    for(auto i:*digits){
        x+=i;
    }
    for(auto i:*obj.digits){
        y+=i;
    }
    unsigned int a=stoi(x);
    unsigned int b=stoi(y);
    return (InfiniteInt(a+b));
}

InfiniteInt InfiniteInt::operator-(const InfiniteInt &obj){
    string x,y;
    for(auto i:*digits){
        x+=i;
    }
    for(auto i:*obj.digits){
        y+=i;
    }
    unsigned int a=stoi(x);
    unsigned int b=stoi(y);
    return (InfiniteInt(a-b));
}

InfiniteInt InfiniteInt::operator+=(const InfiniteInt &obj){
    string x,y;
    for(auto i:*digits){
        x+=i;
    }
    for(auto i:*obj.digits){
        y+=i;
    }
    unsigned int a=stoi(x);
    unsigned int b=stoi(y);
    unsigned int answer=a+b;
    digits={};
    string value=to_string(answer);
    for(unsigned int i=0;i<value.length();i++){
      int digit=stoi(""+value.at(i));
      digits->push_back(digit);
    }
    return *this;
}

InfiniteInt InfiniteInt::operator-=(const InfiniteInt &obj){
    string x,y;
    for(auto i:*digits){
        x+=i;
    }
    for(auto i:*obj.digits){
        y+=i;
    }
    unsigned int a=stoi(x);
    unsigned int b=stoi(y);
    unsigned int answer=a-b;
    digits={};
    string value=to_string(answer);
    for(unsigned int i=0;i<value.length();i++){
      int digit=stoi(""+value.at(i));
      digits->push_back(digit);
    }
    return *this;
}

InfiniteInt InfiniteInt::operator++(){
    string x;
    for(auto i:*digits){
        x+=i;
    }
    unsigned int a=stoi(x);
    a++;
    digits={};
    string value=to_string(a);
    for(unsigned int i=0;i<value.length();i++){
      int digit=stoi(""+value.at(i));
      digits->push_back(digit);
    }
    return *this;
}

InfiniteInt InfiniteInt::operator--(){
    string x;
    for(auto i:*digits){
        x+=i;
    }
    unsigned int a=stoi(x);
    a--;
    digits={};
    string value=to_string(a);
    for(unsigned int i=0;i<value.length();i++){
      int digit=stoi(""+value.at(i));
      digits->push_back(digit);
    }
    return *this;
}

InfiniteInt InfiniteInt::operator++(int){
    string x;
    for(auto i:*digits){
        x+=i;
    }
    unsigned int a=stoi(x);
    a++;
    digits={};
    string value=to_string(a);
    for(unsigned int i=0;i<value.length();i++){
      int digit=stoi(""+value.at(i));
      digits->push_back(digit);
    }
    return *this;
}

InfiniteInt InfiniteInt::operator--(int){
    string x;
    for(auto i:*digits){
        x+=i;
    }
    unsigned int a=stoi(x);
    a--;
    digits={};
    string value=to_string(a);
    for(unsigned int i=0;i<value.length();i++){
      int digit=stoi(""+value.at(i));
      digits->push_back(digit);
    }
    return *this;
}
