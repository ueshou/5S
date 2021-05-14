************************* V 2.5.0 Version (FW FBD V 1.5.15 e LADDER V 1.4.15) ***********************

IMPORTANTE:

	- Se il display del Millenium diventa non funzionante dopo aver scaricato un nuovo programma attraverso una cartuccia memoria, allora bisogna riscrivere la vostra cartuccia utilizzando un Millenium programmato con un sw	CLSM3 V2.5 AC7.

Evoluzione del software:

	- Software del controllore modificato a seguito di modifiche hardware.

*************************** Version V 2.4.7 (FW FBD V 1.4.14 e LADDER V 1.3.14) ************************

IMPORTANTE :

        - Gli errori o le saturazioni non sono gestite sulle funzioni di calcolo ADD-SUB 2 ingressi.

Correzioni d'anomalie su:

        - Funzione REGOLATORE (V1.1) : problema di parametraggio nel caso di utilizzazione di due blocchi regolatore.
        - Funzione Flow (V1.2) : correzione del tempo di esecuzione.
        - Funzione livello (V1.1) : correzione del numero di slots.
	- Funzione TRASFERIMENTO 50 (V1.1).
	- Funzione TRASFERIMENTO 50 TIMER (V1.1).
	- Funzione DEFROST (V1.1).

Evoluzioni delle funzioni seguenti:

        - Funzione REGISTRO A SCORRIMENTO Bit (V2.0): aggiunta della memorizzazione su interruzione alimentazione.
        - Funzione REGISTRO A SCORRIMENTO PAROLA (V2.0) : aggiunta della memorizzazione su interruzione alimentazione.
        - Funzione BOLEANA (V1.4) : Aggiustamento della taglia della finestra di parametraggio al formato Netbooks.

Evoluzioni software:
	
	- Compatibile con Windows 7 (32 e 64 bit).
        - Possibilità di salvare le Macro nella barra funzioni.
        - Possibilità di creare la propria biblioteca nella barra funzioni.
        - Riorganizzazione dei blocchi in funzione della loro utilizzazione.
        - 44 o 76 slots disponibili secondo il tipo di controllore (+12 slots)

*************************** Versione V 2.3.1 ************************

FW FBD V 1.3.13
FW LD  V 1.2.12

Correzione alias di blocco funzione Messaggio 


*************************** Versione V 2.3.0 ************************

FW FBD V 1.3.13
FW LD  V 1.2.12

Correzione bug e compilatore migliorato


*************************** Versione V 2.2.0 (FW V 1.2.11) ************************

Note sulla programmazione in linguaggio FDB:
Quando vi sono più percorsi possibili, il tempo di compilazione può risultare lungo. Utilizzare la funzione "visualizzazione dipendenze" 
per ristrutturare il programma allo scopo di ridurre il più possibile le interdipendenze (ad esempio:  raggruppare i grafcet o i blocchi 
interdipendenti nelle macro).

IMPORTANTE: Dopo aver trasferito il programma dalla cartuccia, il PLC è in modalità RUN se il suo firmware è stato modificato durante 
il trasferimento.

*************************** Versione V 1.1.4 (FW V 1.1.05) ************************

- IMPORTANTE: Durante l'operazione di aggiornamento del firmware (mediante cartuccia 88 970 108 o PC), l'alimentazione del controller 
non deve essere interrotta prima della fine del trasferimento. In caso di interruzione dell'alimentazione durante il trasferimento del firmware, 
il prodotto può sembrare danneggiato.
RIACCENDERLO (schermata vuota sul controller con schermo o lampeggiamento rapido del LED sul controller senza schermo) ed eseguire 
nuovamente l'operazione di aggiornamento del firmware (menu: Controller/Aggiorna il software e la lingua del controller). 

- IMPORTANTE: Dopo ogni accensione, il controller è in modalità AVVIO senza reset dei valori salvati indipendentemente dallo stato 
precedente alla mancanza di alimentazione, tranne in presenza di un errore bloccante.


La funzione di CONVERSIONE dei programmi Millenium 2 in Millenium 3 proposta in questo software è un aiuto fornito all'utente. Il risultato di 
questa conversione deve essere verificato dall'utente prima di essere utilizzato in un'apparecchiatura.
Durante questa conversione:
- una funzione inesistente nel software Millenium 3 sarà soppressa dal programma.
- gli ingressi e le uscite non riconosciuti nella configurazione hardware Millenium 3 scelta saranno "posati" sulla pagina di modifica anziché 
essere sui plot degli ingressi/uscite. L'utente dovrà allora posizionarli su dei plot compatibili e/o modificare la configurazione hardware 
(menu: Controller/Scelta del controller).


- IMPORTANTE: la connessione delle estensioni deve avvenire in assenza di alimentazione. 
Fare riferimento alle Istruzioni d'uso fornite con l'estensione. 

