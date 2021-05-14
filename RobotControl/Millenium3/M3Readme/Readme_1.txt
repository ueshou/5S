*************************** Version V 2.5.0 (FW FBD V 1.5.15 and LADDER V 1.4.15) ************************

IMPORTANT: 
	- If the display of the Millenium does not work after a program transfer via memory cartridge, it is necessary to rewrite your program to the memory cartridge using software version CLSM3 V2.5 AC7.

Software evolution :

	- Controller software modification due to a hardware evolution.

*************************** Version V 2.4.7 (FW FBD V 1.4.14 and LADDER V 1.3.14) ************************

IMPORTANT:

	- Errors or saturations are not propagate on functions ADD-SUB 2 inputs.

Bug fixes:

	- Function REGULATOR (V1.1): parameterization problem when using two blocks REGULATOR.
	- Function Flow (V1.2): correction of the execution time.
	- Function Level (V1.1): fixed number of slots (dll).
	- TRANSFER FUNCTION 50 (V1.1).
	- TIMER TRANSFER FUNCTION 50 (V1.1).
	- DEFROST FUNCTION (V1.1).

Evolution of the following functions:

	- Function Bit SHIFT REGISTER (V2.0): added save on power failure.
	- Function REGISTER OFFSET Keyword (V2.0): added save on power failure.
	- Boolean function (V1.4): adjusting the size of the window format parameter setting Netbooks.

Evolution software:

	- Compatible with Windows 7 (32 and 64 bit).
	- Possibility to save the macros in the toolbar.
	- Possibility to create its own library of functions in the toolbar.
	- Reorganization of the blocks according to their uses.
	- 44 or 76 slots available depending on the type of controller (+ 12 slots).

*************************** Version V 2.3.1 ************************

FW FBD V 1.3.13
FW LD  V 1.2.12

Correction of alias of Message function block


*************************** Version V 2.3.0 ************************

FW FBD V 1.3.13
FW LD  V 1.2.12

Bugs correction and compiler improvement


*************************** Version V 2.2.0 (FW V 1.2.11) ************************

Notes on programming in FDB language:
When there are several possible paths, the compilation time can get long. Use the "Display of dependencies" 
function to restructure the program in order to reduce the interdependencies as much as possible (for example: 
regroup the grafcets or interdependent blocks into macros).

IMPORTANT : After an application transfer through cartbridge, controler is in RUN if its firmware version 
has been modified during the transfer.

*************************** Version V 1.1.4 (FW V 1.1.05) ************************

- IMPORTANT: During Firmware update (with 88 970 108 cartridge or PC), the controller power supply must not 
be interrupted before the end of the transfer. In the event of power outage during Firmware transfer, the product 
may appear damaged.
SWITCH IT BACK ON (blank screen on controller with screen or rapid flashing of LED on screenless controller) 
and restart the Firmware update (Menu: Controller/Update the controller software and language). 

- IMPORTANT: Each time the controller is switched on, it is "On without reset of saved values" regardless of its 
status before the power outage; except if there is a blocking fault.


The CONVERSION function for converting Millenium 2 programs into Millenium 3 provided by this software 
is to help the user. The result of this conversion must be checked by the user before being used in any device.
During this conversion:
- Functions that do not exist in the Millenium 3 software will be deleted from the program.
- Unrecognized inputs/outputs in the selected Millenium 3 hardware configuration will be 
"placed" on the edit sheet instead of on input/output plots. The user 
should then place them on compatible plots and/or change the hardware configuration 
(Menu: Controller/Controller choice).


- IMPORTANT: Extensions must be connected when switched off. 
Consult the Instructions provided with the extension. 

