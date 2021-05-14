*************************** Version V 2.5.0 (FW FBD V 1.5.15 et LADDER V 1.4.15) ************************

IMPORTANT :

	- Si l'affichage du Millenium devient non fonctionnel suite � un chargement � partir d'une cartouche m�moire, alors il faut r��crire votre cartouche en utilisant un Millenium programm� avec un atelier CLSM3 V2.5 AC7.	

Evolution logiciel :

	- Modification du logiciel du contr�leur suite � une �volution hardware.

*************************** Version V 2.4.7 (FW FBD V 1.4.14 et LADDER V 1.3.14) ************************

IMPORTANT :

	- Les erreurs ou les saturations ne sont pas g�r�es sur les fonctions de calcul ADD-SUB 2 entr�es. 

Corrections d'anomalies sur :

	- Fonction REGULATEUR (V1.1) : probl�me de param�trage lors de l'utilisation de deux blocs REGULATEUR. 
	- Fonction Flow (V1.2) : correction du temps d'ex�cution.
	- Fonction Level (V1.1) : correction du nombre de slots (dll).
	- FONCTION DE TRANSFERT 50 (V1.1).
	- FONCTION DE TRANSFERT TIMER 50 (V1.1).
	- FONCTION DEFROST (V1.1).		

Evolution des fonctions suivantes : 

	- Fonction REGISTRE A DECALAGE Bit (V2.0) : ajout de la sauvegarde sur coupure secteur.
	- Fonction REGISTRE A DECALAGE Mot (V2.0) : ajout de la sauvegarde sur coupure secteur.
	- Fonction BOOLEENNE (V1.4) : ajustement de la taille de la fen�tre de param�trage au format Netbooks.

Evolution software :

	- Compatibilit� Windows 7 (32 et 64 bits).
	- Possibilit� de sauvegarder les Macros dans la barre d'outils.
	- Possibilit� de cr�er sa propre biblioth�que de fonctions dans la barre d'outils.
	- R�organisation des blocs en fonction de leurs utilisations.
	- 44 ou 76 slots disponibles suivant le type de contr�leur (+ 12 slots).


*************************** Version V 2.3.1 ************************

FW FBD V 1.3.13
FW LD  V 1.2.12

Correction d'alias du bloc fonction Message


*************************** Version V 2.3.0 ************************

FW FBD V 1.3.13
FW LD  V 1.2.12

Corrections de bugs et am�lioration du compilateur


*************************** Version V 2.2.0 (FW V 1.2.11) ************************

Remarques sur la programmation en langage FDB:
Lorsqu'il y a beaucoup de chemins possibles, le temps de compilation peut devenir long. Utiliser 
la fonction "affichage d�pendances" pour restructurer le programme afin de r�duire autant que possible
les interd�pendances (par exemple :  regrouper  les grafcets ou blocs interd�pendants dans des macros).

IMPORTANT : Apr�s un transfert de l�application par cartouche, le contr�leur est en MARCHE si sa version 
de firmware a �t� modifi�e lors du transfert


*************************** Version V 1.1.4 (FW V 1.1.05) ************************

- IMPORTANT : Lors d'op�ration de mise � jour de Firmware (par cartouche 88 970 108 ou par PC),
l'alimentation du contr�leur ne doit pas �tre interrompue avant la fin du transfert. En cas de 
coupure d'alimentation pendant le transfert du Firmware le produit peut para�tre endommag�.
LE REMETTRE SOUS TENSION (�cran vierge sur contr�leur avec �cran ou clignotement rapide de la 
LED sur contr�leur sans �cran) et recommencez l'op�ration de mise � jour de Firmware (Menu : 
Contr�leur/Mettre � jour le logiciel et la langue du contr�leur). 

- IMPORTANT : Apr�s chaque mise sous tension, le contr�leur est en "MARCHE sans RAZ des valeurs 
sauvegard�es" quel que soit l'�tat avant coupure de l'alimentation ; sauf si pr�sence d'un 
d�faut bloquant.


La fonction de CONVERSION des programmes Millenium 2 en Millenium 3 propos�e dans ce logiciel 
est une aide apport�e � l'utilisateur. Le r�sultat de cette conversion doit �tre v�rifi� par 
l'utilisateur avant d'�tre utilis� dans un �quipement.
Lors de cette conversion :
- une fonction inexistante dans le logiciel Millenium 3 sera supprim�e du programme.
- les entr�es/sorties non reconnues dans la configuration mat�rielle Millenium 3 choisie seront 
"pos�es" sur la feuille d'Edition au lieu d'�tre sur des plots d'entr�es/sorties. L'utilisateur 
devra alors les placer sur des plots compatibles et/ou changer la configuration mat�rielle 
(Menu : Contr�leur/Choix du contr�leur).


- IMPORTANT : la connexion des extensions doit se faire hors tension. 
Se r�f�rer � l'Instruction de Service fournie avec l'extension. 

