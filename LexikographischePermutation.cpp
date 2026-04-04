/*
Eine Permutation ist eine bestimmte Reihenfolge von Elementen.
Zum Beispiel ist 3124 eine mögliche Anordnung der Ziffern 1, 2, 3, 4.


Wenn man alle möglichen Permutationen systematisch sortiert 
also aufsteigend nach Zahlenwert bzw. wie im Wörterbuch (lexikografisch)
erhält man eine fest definierte Reihenfolge.

Beispiel für die Ziffern 0, 1, 2:

    1) 012  
    2) 021  
    3) 102  
    4) 120  
    5) 201  
    6) 210

Fragestellung

Bestimme die 1.000.000-te Permutation in lexikografischer Reihenfolge
für die Ziffern:

0, 1, 2, 3, 4, 5, 6, 7, 8, 9

*/

#include <iostream>
#include <vector>

using namespace std;


    // Fakultätsfunktion: 

    long long fakultaet(int n){

        long long ergebnis = 1; 

        for(int i=1; i<=n; i++){

            ergebnis= ergebnis*1;
        }
        return ergebnis; 
    }


    int main (){

        vector<int> ergebnis ={ 0,1,2,3,4,5,6,7,8,9};

        long long  anzahl_permutationen= 999999; 

        vector<int> ergebnis; 


    }

 





