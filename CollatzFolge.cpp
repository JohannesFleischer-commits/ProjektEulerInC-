/*
Aufgabe 14:

Für die Menge der positiven ganzen Zahlen ist 
folgende iterative Vorschrift definiert:

Wenn n gerade ist:
n-> n/2
	​
Wenn n ungerade ist:

n-> 3n+1
Wendet man diese Regeln wiederholt an, entsteht eine Zahlenfolge 
(auch Collatz-Folge genannt).

Startet man mit der Zahl n = 13, ergibt sich folgende Sequenz:

13-> 40-> 20-> 10-> 5-> 16-> 8-> 4-> 2-> 1

Diese Folge enthält insgesamt 10 Zahlen 
(inklusive Start- und Endwert)

Aufgabe: 

Welche Startzahl kleiner als eine Million erzeugt 
die längste Collatz-Folge?

*/

#include <iostream>


int main (){

	int maxLaenge=0;
	int besteZahl=0;


	for(int i=1; i<1000000; i ++){

		long long zahl =i; 
		int zaehler=1; 
		
		while(zahl!=1){

			if(zahl%2==0){
				zahl=zahl/2;

			}else{
				zahl=3*zahl+1;
			}
			zaehler++;		
		}

		if(zaehler > maxLaenge){
			maxLaenge = zaehler;
			besteZahl = i; 
		}	
	}

	std::cout <<"Startzahl mit der laengsten Kette ist:" << besteZahl << std::endl;
	std::cout <<"Laenge der Kette ist:" << maxLaenge <<std::endl;

	return 0;
} 
