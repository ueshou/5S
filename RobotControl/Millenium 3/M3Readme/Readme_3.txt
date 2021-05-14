************************* V 2.5.0 Version (FW FBD V 1.5.15 y LADDER V 1.4.15) ***********************

IMPORTANTE:

	- Si la visualizaciôn del Millenium deja de funcionar despues haber descargado a partir de una tarjeta de memoria, tiene que cargar el programa de nuevo con un millenium programado con software  CLSM3 V2.5 AC7.

Evolución del software:

	- Modificación del software del controlador debido a la evolucón del hardware.

*************************** Versión V 2.4.7 (FW FBD V 1.4.14 y LADDER V 1.3.14) ************************

IMPORTANTE:

	- Los errores o las saturaciones no son gestionados pore las funciones del cálculo ADD-SUB 2 entradas.

Corrección de anomalías sobre: 

	- Función regulador (V1.1): problema de configuración  durante la utilización de los bloques REGULADOR
	- Función Flow (V1.2): corrección del tiempo de ejecución
	- Función Level (V1.1): corrección de nombre de slots (dll)
	- Función DE TRANSFERENCIA 50 (V1.1)
	- Función DE TRANSFERENCIA 50 TIMER(V1.1)
	- Función DEFROST (V1.1).


Evolución de las funciones siguientes:

	- Función REGISTRO CON DECALAGE bit (V2.0): añadido de la memorizacion en caso de corte de luz. 
	- Función REGISTRO CON CDECALAGE Mot (V2.0): añadido de la memorizacion en caso de corte de luz. 
 	- Función BOOLEANA (V1.4): ajuste del tamaño de la ventana de configuración al formato Netbooks

Evolución software:

	- Compatible con Windows 7 (32 y 64 bits).
	- posibilidad de guardar las Macros de la barra de herramientas.
	- posibilidad de crear su propia biblioteca de funciones en la barra de herramientas.
	- reorganización de los bloques en función de sus utilizaciones
	- 44 o 76 slots disponibles según el tipo de controlador (+ 12 slots).

*************************** Versión V 2.3.1 ************************

FW FBD V 1.3.13
FW LD  V 1.2.12

Corrección de alias del bloque de función Mensaje


*************************** Versión V 2.3.0 ************************

FW FBD V 1.3.13
FW LD  V 1.2.12

Solución de problemas y mejora del compilador


*************************** Versión V 2.2.0 (FW V 1.2.11) ************************

Información sobre la programación en lenguaje FDB:
Como hay varias rutas posibles, el tiempo de compilación puede prolongarse considerablemente. Utilice la función de 
visualización de dependencias para reestructurar el programa y reducir en la medida de lo posible las interdependencias 
(por ejemplo:  reagrupar los grafcets o bloques interdependientes en macros).

IMPORTANTE: Después de una transferencia de la aplicación mediante cartucho, el controlador está en MARCHA si su versión 
de firmware se ha modificado durante la transferencia.

*************************** Versión V 1.1.4 (FW V 1.1.05) ************************

- IMPORTANTE: Durante la operación de actualización del firmware (por cartucho 88 970 108 o por PC), la alimentación del 
controlador no debe interrumpirse antes de finalizar la transferencia. En caso de corte de alimentación durante la transferencia 
del firmware, el producto puede parecer dañado.
VUELVA A CONECTAR LA ALIMENTACIÓN (pantalla vacía en el controlador con pantalla o parpadeo rápido del LED en el 
controlador sin pantalla) e inicie de nuevo la operación de actualización del firmware (menú: Controlador/Actualizar el software 
y el idioma del controlador). 

- IMPORTANTE: Tras cada conexión, el controlador se pone en "FUNCIONAMIENTO sin restablecer los valores almacenados", 
independientemente del estado en que se encontrara antes del corte de alimentación, excepto en el caso de un fallo de bloqueo.


La función de CONVERSIÓN de los programas de Millenium 2 a Millenium 3 que se ofrece en este software supone una importante 
ayuda para el usuario. El usuario debe comprobar el resultado de esta conversión antes de que se utilice en un equipo.
Durante esta conversión:
- una función inexistente en el software Millenium 3 se eliminará del programa.
- las entradas/salidas no reconocidas en la configuración del hardware Millenium 3 seleccionado se 
"colocan" en la hoja de edición en lugar de hacerlo en los plots de entradas/salidas. El usuario 
deberá colocarlas en plots compatibles o modificar la configuración del hardware 
(menú: Controlador/Selección del controlador).


- IMPORTANTE: La conexión de las extensiones debe realizarse sin estar conectado a la toma de corriente. 
Consulte las instrucciones de uso suministradas con la extensión. 

