*************************** Version V 2.5.0 (FW FBD V 1.5.15 et LADDER V 1.4.15) ************************

IMPORTANT :

	- Si l'affichage du Millenium devient non fonctionnel suite à un chargement à partir d'une cartouche mémoire, alors il faut réécrire votre cartouche en utilisant un Millenium programmé avec un atelier CLSM3 V2.5 AC7.	

Evolution logiciel :

	- Modification du logiciel du contrôleur suite à une évolution hardware.

*************************** Version V 2.4.7 (FW FBD V 1.4.14 et LADDER V 1.3.14) ************************

IMPORTANT :

	- Les erreurs ou les saturations ne sont pas gérées sur les fonctions de calcul ADD-SUB 2 entrées. 

Corrections d'anomalies sur :

	- Fonction REGULATEUR (V1.1) : problème de paramètrage lors de l'utilisation de deux blocs REGULATEUR. 
	- Fonction Flow (V1.2) : correction du temps d'exécution.
	- Fonction Level (V1.1) : correction du nombre de slots (dll).
	- FONCTION DE TRANSFERT 50 (V1.1).
	- FONCTION DE TRANSFERT TIMER 50 (V1.1).
	- FONCTION DEFROST (V1.1).		

Evolution des fonctions suivantes : 

	- Fonction REGISTRE A DECALAGE Bit (V2.0) : ajout de la sauvegarde sur coupure secteur.
	- Fonction REGISTRE A DECALAGE Mot (V2.0) : ajout de la sauvegarde sur coupure secteur.
	- Fonction BOOLEENNE (V1.4) : ajustement de la taille de la fenêtre de paramètrage au format Netbooks.

Evolution software :

	- Compatibilité Windows 7 (32 et 64 bits).
	- Possibilité de sauvegarder les Macros dans la barre d'outils.
	- Possibilité de créer sa propre bibliothèque de fonctions dans la barre d'outils.
	- Réorganisation des blocs en fonction de leurs utilisations.
	- 44 ou 76 slots disponibles suivant le type de contrôleur (+ 12 slots).


*************************** Version V 2.3.1 ************************

FW FBD V 1.3.13
FW LD  V 1.2.12

Correction d'alias du bloc fonction Message


*************************** Version V 2.3.0 ************************

FW FBD V 1.3.13
FW LD  V 1.2.12

Corrections de bugs et amélioration du compilateur


*************************** Version V 2.2.0 (FW V 1.2.11) ************************

Remarques sur la programmation en langage FDB:
Lorsqu'il y a beaucoup de chemins possibles, le temps de compilation peut devenir long. Utiliser 
la fonction "affichage dépendances" pour restructurer le programme afin de réduire autant que possible
les interdépendances (par exemple :  regrouper  les grafcets ou blocs interdépendants dans des macros).

IMPORTANT : Après un transfert de l’application par cartouche, le contrôleur est en MARCHE si sa version 
de firmware a été modifiée lors du transfert


*************************** Version V 1.1.4 (FW V 1.1.05) ************************

- IMPORTANT : Lors d'opération de mise à jour de Firmware (par cartouche 88 970 108 ou par PC),
l'alimentation du contrôleur ne doit pas être interrompue avant la fin du transfert. En cas de 
coupure d'alimentation pendant le transfert du Firmware le produit peut paraître endommagé.
LE REMETTRE SOUS TENSION (écran vierge sur contrôleur avec écran ou clignotement rapide de la 
LED sur contrôleur sans écran) et recommencez l'opération de mise à jour de Firmware (Menu : 
Contrôleur/Mettre à jour le logiciel et la langue du contrôleur). 

- IMPORTANT : Après chaque mise sous tension, le contrôleur est en "MARCHE sans RAZ des valeurs 
sauvegardées" quel que soit l'état avant coupure de l'alimentation ; sauf si présence d'un 
défaut bloquant.


La fonction de CONVERSION des programmes Millenium 2 en Millenium 3 proposée dans ce logiciel 
est une aide apportée à l'utilisateur. Le résultat de cette conversion doit être vérifié par 
l'utilisateur avant d'être utilisé dans un équipement.
Lors de cette conversion :
- une fonction inexistante dans le logiciel Millenium 3 sera supprimée du programme.
- les entrées/sorties non reconnues dans la configuration matérielle Millenium 3 choisie seront 
"posées" sur la feuille d'Edition au lieu d'être sur des plots d'entrées/sorties. L'utilisateur 
devra alors les placer sur des plots compatibles et/ou changer la configuration matérielle 
(Menu : Contrôleur/Choix du contrôleur).


- IMPORTANT : la connexion des extensions doit se faire hors tension. 
Se référer à l'Instruction de Service fournie avec l'extension. 

