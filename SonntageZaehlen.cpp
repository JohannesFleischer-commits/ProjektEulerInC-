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
    int tage_in_monate = 31;

    for(int jahr=1900; jahr<=2000; jahr++){ // Jahre durchlaufen 

        for(int monat=1; monat<=12; monat++){ // Monate durchlaufen
            tage_in_monate= 31; 
                       
            if(jahr>=1901 && startwert==7){ // Ab 1901 prüfen
                sonntag++;
            }

            if (monat==4 || monat==6 || monat==9 || monat ==11){
                tage_in_monate =30;
            }

            if (monat==2){

                //Schaltjahr prüfen

                if((jahr%4== 0 && jahr%100 != 0 ) || (jahr %400 ==0)){    
                    tage_in_monate=29;
                }else{
                    tage_in_monate=28;
                }
            }    

            // Wochentage weiterrechnen 

            startwert = startwert +tage_in_monate;

            while(startwert > 7){
                startwert=startwert-7;
            }
        } 
    }

    std::cout<<" Anzahl der Sonntag ist:"<< sonntag<< std::endl;

    return 0;

}
