//
// Created by Leon Ngai on 2019-04-18.
//

#ifndef OPERATORPRACTICE_NUMBER_H
#define OPERATORPRACTICE_NUMBER_H

class Number {
public:
    int* n;

    Number();
    explicit Number(int n);
    Number& operator=(const Number& source);
    Number(const Number& source);

    Number operator+(const Number& source);
    Number operator-(const Number& source);
    Number operator*(const Number& source);
    Number operator/(const Number& source);
    Number operator%(const Number& source);

    Number& operator++();
    Number& operator--();
    Number operator++(int);
    Number operator--(int);

    Number& operator+=(const Number&source);
    Number& operator-=(const Number&source);
    Number& operator*=(const Number&source);
    Number& operator/=(const Number&source);
    Number& operator%=(const Number&source);

    void copy(const Number& source);
    void destroy();

    friend std::ostream& operator<< (std::ostream &out, const Number &number);
};

#endif //OPERATORPRACTICE_NUMBER_H
