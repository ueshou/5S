************************* V 2.5.0 Version (FW FBD V 1.5.15 y LADDER V 1.4.15) ***********************

IMPORTANTE:

	- Si la visualizaci�n del Millenium deja de funcionar despues haber descargado a partir de una tarjeta de memoria, tiene que cargar el programa de nuevo con un millenium programado con software  CLSM3 V2.5 AC7.

Evoluci�n del software:

	- Modificaci�n del software del controlador debido a la evoluc�n del hardware.

*************************** Versi�n V 2.4.7 (FW FBD V 1.4.14 y LADDER V 1.3.14) ************************

IMPORTANTE:

	- Los errores o las saturaciones no son gestionados pore las funciones del c�lculo ADD-SUB 2 entradas.

Correcci�n de anomal�as sobre: 

	- Funci�n regulador (V1.1): problema de configuraci�n  durante la utilizaci�n de los bloques REGULADOR
	- Funci�n Flow (V1.2): correcci�n del tiempo de ejecuci�n
	- Funci�n Level (V1.1): correcci�n de nombre de slots (dll)
	- Funci�n DE TRANSFERENCIA 50 (V1.1)
	- Funci�n DE TRANSFERENCIA 50 TIMER(V1.1)
	- Funci�n DEFROST (V1.1).


Evoluci�n de las funciones siguientes:

	- Funci�n REGISTRO CON DECALAGE bit (V2.0): a�adido de la memorizacion en caso de corte de luz. 
	- Funci�n REGISTRO CON CDECALAGE Mot (V2.0): a�adido de la memorizacion en caso de corte de luz. 
 	- Funci�n BOOLEANA (V1.4): ajuste del tama�o de la ventana de configuraci�n al formato Netbooks

Evoluci�n software:

	- Compatible con Windows 7 (32 y 64 bits).
	- posibilidad de guardar las Macros de la barra de herramientas.
	- posibilidad de crear su propia biblioteca de funciones en la barra de herramientas.
	- reorganizaci�n de los bloques en funci�n de sus utilizaciones
	- 44 o 76 slots disponibles seg�n el tipo de controlador (+ 12 slots).

*************************** Versi�n V 2.3.1 ************************

FW FBD V 1.3.13
FW LD  V 1.2.12

Correcci�n de alias del bloque de funci�n Mensaje


*************************** Versi�n V 2.3.0 ************************

FW FBD V 1.3.13
FW LD  V 1.2.12

Soluci�n de problemas y mejora del compilador


*************************** Versi�n V 2.2.0 (FW V 1.2.11) ************************

Informaci�n sobre la programaci�n en lenguaje FDB:
Como hay varias rutas posibles, el tiempo de compilaci�n puede prolongarse considerablemente. Utilice la funci�n de 
visualizaci�n de dependencias para reestructurar el programa y reducir en la medida de lo posible las interdependencias 
(por ejemplo:  reagrupar los grafcets o bloques interdependientes en macros).

IMPORTANTE: Despu�s de una transferencia de la aplicaci�n mediante cartucho, el controlador est� en MARCHA si su versi�n 
de firmware se ha modificado durante la transferencia.

*************************** Versi�n V 1.1.4 (FW V 1.1.05) ************************

- IMPORTANTE: Durante la operaci�n de actualizaci�n del firmware (por cartucho 88 970 108 o por PC), la alimentaci�n del 
controlador no debe interrumpirse antes de finalizar la transferencia. En caso de corte de alimentaci�n durante la transferencia 
del firmware, el producto puede parecer da�ado.
VUELVA A CONECTAR LA ALIMENTACI�N (pantalla vac�a en el controlador con pantalla o parpadeo r�pido del LED en el 
controlador sin pantalla) e inicie de nuevo la operaci�n de actualizaci�n del firmware (men�: Controlador/Actualizar el software 
y el idioma del controlador). 

- IMPORTANTE: Tras cada conexi�n, el controlador se pone en "FUNCIONAMIENTO sin restablecer los valores almacenados", 
independientemente del estado en que se encontrara antes del corte de alimentaci�n, excepto en el caso de un fallo de bloqueo.


La funci�n de CONVERSI�N de los programas de Millenium 2 a Millenium 3 que se ofrece en este software supone una importante 
ayuda para el usuario. El usuario debe comprobar el resultado de esta conversi�n antes de que se utilice en un equipo.
Durante esta conversi�n:
- una funci�n inexistente en el software Millenium 3 se eliminar� del programa.
- las entradas/salidas no reconocidas en la configuraci�n del hardware Millenium 3 seleccionado se 
"colocan" en la hoja de edici�n en lugar de hacerlo en los plots de entradas/salidas. El usuario 
deber� colocarlas en plots compatibles o modificar la configuraci�n del hardware 
(men�: Controlador/Selecci�n del controlador).


- IMPORTANTE: La conexi�n de las extensiones debe realizarse sin estar conectado a la toma de corriente. 
Consulte las instrucciones de uso suministradas con la extensi�n. 

