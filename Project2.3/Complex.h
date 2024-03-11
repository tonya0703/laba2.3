//Complex.h
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

class Complex
{
    double re, im;
public:
    Complex();
    Complex(double, double);
    Complex(const Complex&);
    ~Complex() { };

    double GetRe() const { return re; }
    double GetIm() const { return im; }
    void SetRe(double value) { re = value; }
    void SetIm(double value) { im = value; }

    Complex operator-(const Complex& one);
    Complex operator/(const Complex& one);
    Complex operator*();

    operator string () const;

    friend istream& operator >> (istream& in, Complex& r);
    friend ostream& operator << (ostream& out, const Complex& r);

    Complex& operator ++();
    Complex& operator --();
    Complex operator ++(int);
    Complex operator --(int);
};

