#ifndef DoorInterLock_h
#define DoorInterLock_h

#include <Arduino.h>

/*---------------- Inputs--------------------*/

// Door inputs 
const uint8_t Door_Open_IN_1 = 2;
const uint8_t Door_Open_IN_2 = 3;
const uint8_t Door_Open_IN_3 = 4;

//Emergensy inputs
const uint8_t EMG_IN_1 = 5;
const uint8_t EMG_IN_2 = 6;
const uint8_t EMG_IN_3 = 7;


/*---------------Outputs----------------------*/

// Outpout to contrl EM-lock
const uint8_t Door_Open_Out_1 = 9;
const uint8_t Door_Open_Out_2 = 10;
const uint8_t Door_Open_Out_3 = 11;

//Output to show status of the Door
const uint8_t Door_Open_Status_1 = A0;
const uint8_t Door_Open_Status_2 = A1;
const uint8_t Door_Open_Status_3 = A2;


/*-------------Functions-----------------------*/ 

void PinConfig();   // configure pins fof input and output
void DoorStatus();  // Read the door status and control the EM-lock

#endif
