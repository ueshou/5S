************************* V 2.5.0 Version (FW FBD V 1.5.15 und LADDER V 1.4.15) ***********************

ACHTUNG:

	- falls das Display der Millenium nach der Programmübertragung mittels Speichermoduls nicht funktioniert, ist es nötig das Programm erneut unter Verwendung der Softwareversion CLSM3 V2.5 AC7 in das Speichermodul zu laden.

Softwareentwicklung:

	-  Anpassung der Steuerungssoftware aufgrund einer Harwareänderung.

************************* V 2.4.7 Version (FW FBD V 1.4.14 und LADDER V 1.3.14) ***********************

ACHTUNG:

	- Die Fehler und die Überlastungen sind nicht beherrscht bei den Rechnungsfunktionen ADD-SUB mit 2 Engängen

Defektkorrekturen für :

	- PID-REGLER Funktion (V1.1) : Problem für die Parametrisierung bei der Benutzung von zwei Regulatorblöcke.
	- FLOW Funktion (V1.2) : Korrektur der Ausführungszeit.
	- LEVEL Funktion (V1.1) : Korrektur der Slotanzahl (dll).
	- ÜBERTRAGUNGS Funktion 50 (V1.1).
	- TIMER ÜBERTRAGUNGS Funktion 50 (V1.1).
	- DEFROST Funktion (V1.1).

Weiterentwicklung der folgenden Funktionen :

	- SCHIEBEREGISTER Funktion (V2.0) : Zusatz der Speicherung bei Stromausfall.
	- WORTVERSCHIEBUNG Funktion (V2.0) : Zusatz der Speicherung bei Stromausfall.
	- BOOLESCHE Funktion (V1.4) : Anpassung der Größe des Parametrisierungsfenesters auf dem Netbookformat.

Softwareevolution :

	- Kompatibel mit Windows 7 (32 und 64 Bit).
	- Möglichkeit, die Makros in der Funktionsleiste zu speichern.
	- Erstellungsmöglichkeit von einer eigenen Funktionsbibliothek in der Funktionsleiste.
	- Reorganisierung der Blöcke entsprechend ihrer Benutzung.
	- 44 oder 76 verfügbare Slots entsrepechend des Controllertyps (+ 12 Slots).
	
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
Wenn viele Pfade möglich sind, kann die Kompilierung viel Zeit in Anspruch nehmen. Verwenden Sie die Funktion "Anzeige der Abhängigkeiten", 
um das Programm neu zu strukturieren und um so die gegenseitigen Abhängigkeiten so weit wie möglich zu verringern (Beispiel:  Gruppierung der 
voneinander abhängigen Grafcets oder Blöcke in Makros).

Nach einer Programmübertragung durch verwendung einem Speichermodul wird der Controller in RUN Modus sein, wenn Firmware des Controllers und
 Firmware des Speichermoduls nicht mehr übereinstimmen.

*************************** Version V 1.1.4 (FW V 1.1.05) ************************

- WICHTIG: Während der Aktualisierung der Firmware (per Speichermodul 88 970 108 oder per PC) darf die Stromversorgung der Steuerung nicht 
vor Beendigung der Übertragung unterbrochen werden. Bei einer Unterbrechung der Stromversorgung während der Übertragung der Firmware 
kann das Produkt beschädigt werden.
SCHALTEN SIE DIE STEUERUNG WIEDER EIN (leerer Bildschirm an Steuerungen mit Bildschirm oder schnelles Blinken der LED an Steuerungen 
ohne Bildschirm) und führen Sie die Aktualisierung der Firmware erneut durch (Menü: Steuerung/Software und Sprache der Steuerung aktualisieren). 

- WICHTIG: Nach jedem Einschalten befindet sich die Steuerung unabhängig vom Status vor der Unterbrechung der Stromversorgung im Status 
"EIN ohne Reset der gesicherten Werte", es sei denn, es liegt ein blockierender Fehler vor.


Die in dieser Software enthaltene Funktion zur KONVERTIERUNG von Millenium 2-Programmen in Millenium 3-Programme ist eine Hilfe für den Benutzer. 
Das Ergebnis dieser Konvertierung muss vor der Nutzung in einem Gerät vom Benutzer überprüft werden.
Während dieser Konvertierung:
- wird eine in der Millenium 3-Software nicht vorhandene Funktion aus dem Programm gelöscht.
- werden nicht in der ausgewählten Millenium 3-Hardwarekonfiguration erkannte Ein-/Ausgänge im Bearbeitungsbereich "abgelegt", anstatt den 
Ein-/Ausgangs-Plots zugewiesen zu werden. Der Benutzer muss diese Ein-/Ausgänge dann kompatiblen Plots zuweisen und/oder die Hardwarekonfiguration 
ändern (Menü: Steuerung/Auswahl der Steuerung).


- WICHTIG: Der Anschluss der Erweiterungen muss im spannungslosen Zustand erfolgen. 
Informationen hierzu finden Sie in der der Erweiterung beiliegenden Serviceanweisung. 

