************************* V 2.5.0 Version (FW FBD V 1.5.15 und LADDER V 1.4.15) ***********************

ACHTUNG:

	- falls das Display der Millenium nach der Programm�bertragung mittels Speichermoduls nicht funktioniert, ist es n�tig das Programm erneut unter Verwendung der Softwareversion CLSM3 V2.5 AC7 in das Speichermodul zu laden.

Softwareentwicklung:

	-  Anpassung der Steuerungssoftware aufgrund einer Harware�nderung.

************************* V 2.4.7 Version (FW FBD V 1.4.14 und LADDER V 1.3.14) ***********************

ACHTUNG:

	- Die Fehler und die �berlastungen sind nicht beherrscht bei den Rechnungsfunktionen ADD-SUB mit 2 Eng�ngen

Defektkorrekturen f�r :

	- PID-REGLER Funktion (V1.1) : Problem f�r die Parametrisierung bei der Benutzung von zwei Regulatorbl�cke.
	- FLOW Funktion (V1.2) : Korrektur der Ausf�hrungszeit.
	- LEVEL Funktion (V1.1) : Korrektur der Slotanzahl (dll).
	- �BERTRAGUNGS Funktion 50 (V1.1).
	- TIMER �BERTRAGUNGS Funktion 50 (V1.1).
	- DEFROST Funktion (V1.1).

Weiterentwicklung der folgenden Funktionen :

	- SCHIEBEREGISTER Funktion (V2.0) : Zusatz der Speicherung bei Stromausfall.
	- WORTVERSCHIEBUNG Funktion (V2.0) : Zusatz der Speicherung bei Stromausfall.
	- BOOLESCHE Funktion (V1.4) : Anpassung der Gr��e des Parametrisierungsfenesters auf dem Netbookformat.

Softwareevolution :

	- Kompatibel mit Windows 7 (32 und 64 Bit).
	- M�glichkeit, die Makros in der Funktionsleiste zu speichern.
	- Erstellungsm�glichkeit von einer eigenen Funktionsbibliothek in der Funktionsleiste.
	- Reorganisierung der Bl�cke entsprechend ihrer Benutzung.
	- 44 oder 76 verf�gbare Slots entsrepechend des Controllertyps (+ 12 Slots).
	
*************************** Version V 2.3.1 ************************

FW FBD V 1.3.13
FW LD  V 1.2.12

Korrektur von Alias der Funktionsblock Meldung 


*************************** Version V 2.3.0 ************************

FW FBD V 1.3.13
FW LD  V 1.2.12

Korrektur von Bugs und Compiler-Verbesserung


*************************** Version V 2.2.0 (FW V 1.2.11) ************************

Hinweise zur Programmierung in der Programmiersprache FBD:
Wenn viele Pfade m�glich sind, kann die Kompilierung viel Zeit in Anspruch nehmen. Verwenden Sie die Funktion "Anzeige der Abh�ngigkeiten", 
um das Programm neu zu strukturieren und um so die gegenseitigen Abh�ngigkeiten so weit wie m�glich zu verringern (Beispiel:  Gruppierung der 
voneinander abh�ngigen Grafcets oder Bl�cke in Makros).

Nach einer Programm�bertragung durch verwendung einem Speichermodul wird der Controller in RUN Modus sein, wenn Firmware des Controllers und
 Firmware des Speichermoduls nicht mehr �bereinstimmen.

*************************** Version V 1.1.4 (FW V 1.1.05) ************************

- WICHTIG: W�hrend der Aktualisierung der Firmware (per Speichermodul 88 970 108 oder per PC) darf die Stromversorgung der Steuerung nicht 
vor Beendigung der �bertragung unterbrochen werden. Bei einer Unterbrechung der Stromversorgung w�hrend der �bertragung der Firmware 
kann das Produkt besch�digt werden.
SCHALTEN SIE DIE STEUERUNG WIEDER EIN (leerer Bildschirm an Steuerungen mit Bildschirm oder schnelles Blinken der LED an Steuerungen 
ohne Bildschirm) und f�hren Sie die Aktualisierung der Firmware erneut durch (Men�: Steuerung/Software und Sprache der Steuerung aktualisieren). 

- WICHTIG: Nach jedem Einschalten befindet sich die Steuerung unabh�ngig vom Status vor der Unterbrechung der Stromversorgung im Status 
"EIN ohne Reset der gesicherten Werte", es sei denn, es liegt ein blockierender Fehler vor.


Die in dieser Software enthaltene Funktion zur KONVERTIERUNG von Millenium 2-Programmen in Millenium 3-Programme ist eine Hilfe f�r den Benutzer. 
Das Ergebnis dieser Konvertierung muss vor der Nutzung in einem Ger�t vom Benutzer �berpr�ft werden.
W�hrend dieser Konvertierung:
- wird eine in der Millenium 3-Software nicht vorhandene Funktion aus dem Programm gel�scht.
- werden nicht in der ausgew�hlten Millenium 3-Hardwarekonfiguration erkannte Ein-/Ausg�nge im Bearbeitungsbereich "abgelegt", anstatt den 
Ein-/Ausgangs-Plots zugewiesen zu werden. Der Benutzer muss diese Ein-/Ausg�nge dann kompatiblen Plots zuweisen und/oder die Hardwarekonfiguration 
�ndern (Men�: Steuerung/Auswahl der Steuerung).


- WICHTIG: Der Anschluss der Erweiterungen muss im spannungslosen Zustand erfolgen. 
Informationen hierzu finden Sie in der der Erweiterung beiliegenden Serviceanweisung. 

