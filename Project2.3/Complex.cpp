//Complex.cpp
#include <iostream>
#include <cmath>
#include <string>    
#include <sstream>  
#include "Complex.h"

using namespace std;

Complex Complex::operator-(const Complex& one)
{
    Complex result;
    result.re = re - one.re;
    result.im = im - one.im;
    return result;
}
Complex Complex::operator/(const Complex& one)
{
    Complex result;
    result.re = (re * one.re + im * one.im) / (pow(one.re, 2) + pow(one.im, 2));
    result.im = (one.re * im - re * one.im) / (pow(one.re, 2) + pow(one.im, 2));
    return result;
}
Complex Complex::operator*()
{
    Complex result;
    result.re = re;
    result.im = im;
    return result;
}

Complex::operator string () const
{
    stringstream ss;
    ss << "Im:" << im << " ";
    ss << "Re:" << re;

    return ss.str();
}

istream& operator >> (istream& in, Complex& r) {
    std::cout << "Enter the complex:\n";
    std::cout << "Re = "; in >> r.re;
    std::cout << "Im = "; in >> r.im;
    cout << endl;
    return in;
}

ostream& operator << (ostream& out, const Complex& r)
{
    out << string(r);
    return out;
}

Complex::Complex() {
    im = 0;
    re = 0;
}

Complex::Complex(double r, double i) {
    re = r;
    im = i;
}

Complex::Complex(const Complex& c) {
    re = c.re;
    im = c.im;
}

Complex& Complex::operator ++() {
    re++;
    return *this;
}

Complex& Complex::operator --() {
    re--;
    return *this;
}

Complex Complex::operator ++(int) {
    Complex n(*this);
    im++;
    return n;
}

Complex Complex::operator --(int) {
    Complex n(*this);
    im--;
    return n;
}
