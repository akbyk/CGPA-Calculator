#include "Calculator.h"
#include "LinkedList.h"
#include "StringLinkedList.h"
#include <iostream>
using namespace std;

Calculator::Calculator()
{

}
Calculator::~Calculator()
{
    //dtor
}

void Calculator::dersEkle(){
int tempint;
string tempstring;

cout << "Dersin adini giriniz:"<< endl;
cin >> tempstring;
dersAdi.insertAtEnd(tempstring);


cout << "Aldiginiz vize notunu giriniz:" << endl;
cin >> tempint;
vizeNot.insertAtEnd(tempint);

cout << "Aldiginiz final notunu giriniz:" << endl;
cin >> tempint;
finalNot.insertAtEnd(tempint);

cout << "Final agirligini giriniz:";
cin >> tempint;
finalAgirligi.insertAtEnd(tempint);

cout << "Dersin kredisini giriniz:" << endl;
cin >> tempint;
kredi.insertAtEnd(tempint);

 // Compute weighted average
float finalWeight = finalAgirligi.getTail()->data;
float finalScore = finalNot.getTail()->data;
float vizeScore = vizeNot.getTail()->data;

float weightedScore = (finalScore * (finalWeight / 100.0f)) +
                          (vizeScore * ((100 - finalWeight) / 100.0f));

    dersOrtalamasi.insertAtEnd(weightedScore);
    dersOrtalamasi.display();

}


void Calculator::dersSil(){

}


void Calculator::dersleriGoruntule(){

}

float Calculator::cgpaHesapla(){
float cgpa = 0.0f;


return cgpa;
}


