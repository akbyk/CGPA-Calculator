#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "LinkedList.h"
#include "StringLinkedList.h"

class Calculator
{


    public:



        Calculator();
        void dersEkle();
        void dersSil();
        void dersleriGoruntule();
        float cgpaHesapla();
        virtual ~Calculator();

    protected:

    private:
        StringLinkedList dersAdi;
LinkedList vizeNot;
LinkedList finalNot;
LinkedList finalAgirligi;
LinkedList kredi;
LinkedList dersOrtalamasi;
};

#endif // CALCULATOR_H
