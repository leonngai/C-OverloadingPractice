//
// Created by Leon Ngai on 2019-04-18.
//

#include "Number.h"
#include <iostream>
using namespace std;

Number::Number() {
    n = new int[1];
    n[0] = 0;
}

Number::Number(int n) {
    this->n = new int[1];
    this->n[0] = n;
}

//copy constructor
Number::Number(const Number& source) {
    copy(source);
}

////assignment operator
Number& Number::operator=(const Number &source) {
    if (this != &source) {
        destroy();
        copy(source);
    }

    return *this;
}

Number Number::operator+(const Number&source) {
    Number temp(this->n[0] + source.n[0]);
    return temp;
}

Number Number::operator-(const Number&source) {
    Number temp(this->n[0] - source.n[0]);
    return temp;
}

Number Number::operator*(const Number&source) {
    Number temp(this->n[0] * source.n[0]);
    return temp;
}

Number Number::operator/(const Number&source) {
    Number temp(this->n[0] / source.n[0]);
    return temp;
}

Number Number::operator%(const Number&source) {
    Number temp(this->n[0] % source.n[0]);
    return temp;
}

Number& Number::operator+=(const Number&source) {
    this->n[0] += source.n[0];
    return *this;
}

Number& Number::operator-=(const Number&source) {
    this->n[0] -= source.n[0];
    return *this;
}

Number& Number::operator*=(const Number&source) {
    this->n[0] *= source.n[0];
    return *this;
}

Number& Number::operator/=(const Number&source) {
    this->n[0] /= source.n[0];
    return *this;
}

Number& Number::operator%=(const Number&source) {
    this->n[0] %= source.n[0];
    return *this;
}

Number& Number::operator++() {
    this->n[0]++;
    return *this;
}

Number Number::operator++(int) {
    Number temp(this->n[0]);
    this->n[0]++;
    return temp;
}

Number& Number::operator--() {
    this->n[0]--;
    return *this;
}

Number Number::operator--(int) {
    Number temp(this->n[0]);
    this->n[0]--;
    return temp;
}

std::ostream& operator<< (std::ostream &out, const Number &number)
{
    out << number.n[0] << endl;
    return out;
}

void Number::copy(const Number& source) {
    n = new int[1];
    n[0] = source.n[0];
}

void Number::destroy() {
    delete[] n;
}

