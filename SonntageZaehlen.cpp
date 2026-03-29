/*
Aufgabe 19:

Dir stehen folgende Informationen zur Verfügung

Der 1. Januar 1900 war ein Montag.
Die Monate September, April, Juni und November haben jeweils 30 Tage.
Alle übrigen Monate haben 31 Tage mit Ausnahme des Februars:
Im Normalfall hat er 28 Tage.
In Schaltjahren hat er 29 Tage.

Ein Schaltjahr ist jedes Jahr, das durch 4 teilbar ist.
Ausnahme: Jahre, die durch 100 teilbar sind, sind keine Schaltjahre,
es sei denn, sie sind zusätzlich durch 400 teilbar.

Fragestellung:

Wie viele Sonntage fallen im 20. Jahrhundert 
(vom 1. Januar 1901 bis zum 31. Dezember 2000) 
auf den ersten Tag eines Monats?

*/

#include <iostream>
#include <cmath>


int main (){

    int sonntag = 0;
    int startwert = 1;

    for(int jahr=1900; jahr<=2000; jahr++){ // Jahre durchlaufen 

        for(int monat=1; monat<=12; monat++){ // Monate durchlaufen

            if(startwert ==7){
                sonntag ++;
            }

            // Schaltjahre berechnen:

            if(jahr%4==0 && jahr%100!=0 || jahr%400==0){

                if(monat==2){
                    startwert= ( startwert +29)%7;
                }
                  


            } 



        }


    }



    


}
