//
// Created by Leon Ngai on 2019-04-19.
//

#ifndef STRINGEXAMPLE_STRING_H
#define STRINGEXAMPLE_STRING_H

class String {

private:
    char *str;
    int len;
public:
    String();
    String(const char* source);
    String(const String& source); //copy constructor
    String & operator=(String & source); //Assignment Operator
    String& operator+(String& source);
    ~String(); //destructor
    void display();
    int stringLength(const char * source);
    void setStr(const char* source);
    void destroy();
};

#endif //STRINGEXAMPLE_STRING_H
