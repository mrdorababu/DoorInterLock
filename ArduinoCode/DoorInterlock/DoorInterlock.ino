// Include header files 

#include "DoorInterLock.h" 


void setup()
{
   PinConfig();  // call the pin configuration function
}

void loop()
{
  DoorStatus(); // Call the read status and control function  
}
