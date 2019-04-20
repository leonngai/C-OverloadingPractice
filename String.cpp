//
// Created by Leon Ngai on 2019-04-19.
//
#include "String.h"
#include <iostream>
using namespace std;


//char *str;
//int len;

String::String(): str(NULL), len(0){}
String::String(const char* source) {
    int length = stringLength(source);
    if (length > 0) {
        str = new char[length + 1];
        strcpy(str, source);
    }
}

String::String(const String& source) {
    int length = stringLength(source.str);
    if (length > 0) {
        str = new char[length + 1];
        strcpy(str, source.str);
    }
}

String& String::operator=(String & source) {
    //check to see if they have same address
    if(this != &source) {
        int length = stringLength(source.str);
        if (length > 0) {
            delete[] str;
            str = new char[length + 1];
            strcpy(str, source.str);
        }
    }

    return *this;
}

String::~String() {
    delete[] str;
}

void String::destroy() {
    delete[] str;
}

String& String::operator+(String& source) {
    int length1 = stringLength(this->str);
    int length2 = stringLength(source.str);

    char* result = new char[length1 + length2 + 1];
    strcpy(result,this->str);
    strcat(result,source.str);

    destroy();

    String* temp = new String(result);
    return *temp;

}

void String::setStr(const char* source) {
    int length = stringLength(source);
    if (length > 0) {
        delete[] str;
        str = new char[length + 1];
        strcpy(str, source);
    }
}
void String::display() {
    const char* temp = str;
    while(*temp != '\0') {
        cout << *temp;
        temp++;
    }
    cout << endl;
}

int String::stringLength(const char * source) {
    const char* temp = source;
    int count = 0;

    while(*temp != '\0') {
        temp++;
        count++;
    }

    return count;
}