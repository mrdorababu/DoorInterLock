#include "DoorInterLock.h"


void PinConfig(){
  
     pinMode(Door_Open_IN_1, INPUT);
     pinMode(Door_Open_IN_2, INPUT);
     pinMode(Door_Open_IN_3, INPUT);
     
     pinMode(EMG_IN_1, INPUT);
     pinMode(EMG_IN_2, INPUT);
     pinMode(EMG_IN_3, INPUT);
          
     pinMode(Door_Open_Out_1, OUTPUT);
     pinMode(Door_Open_Out_2, OUTPUT);
     pinMode(Door_Open_Out_3, OUTPUT);

     pinMode(Door_Open_Status_1, OUTPUT);
     pinMode(Door_Open_Status_2, OUTPUT);
     pinMode(Door_Open_Status_3, OUTPUT);
  }


  
void DoorStatus(){
  
   if ((digitalRead(Door_Open_IN_1)== HIGH) && (digitalRead(Door_Open_IN_2)== HIGH) && (digitalRead(Door_Open_IN_3)== HIGH) )
  {
    digitalWrite(Door_Open_Status_1,LOW);
    digitalWrite(Door_Open_Status_2,LOW);
    digitalWrite(Door_Open_Status_3,LOW);
     
    digitalWrite(Door_Open_Out_1,LOW);
    digitalWrite(Door_Open_Out_2,LOW);
    digitalWrite(Door_Open_Out_3,LOW);  
  }
  else if ((digitalRead(Door_Open_IN_1)== LOW) && (digitalRead(Door_Open_IN_2)== HIGH) && (digitalRead(Door_Open_IN_3)== HIGH))
   {
    digitalWrite(Door_Open_Status_1,HIGH);
    digitalWrite(Door_Open_Status_2,LOW);
    digitalWrite(Door_Open_Status_3,LOW);

    digitalWrite(Door_Open_Out_1,LOW);
    digitalWrite(Door_Open_Out_2,HIGH);
    digitalWrite(Door_Open_Out_3,HIGH);
    }
  else if ((digitalRead(Door_Open_IN_1)== HIGH) && (digitalRead(Door_Open_IN_2)== LOW) && (digitalRead(Door_Open_IN_3)== HIGH))
   {
    digitalWrite(Door_Open_Status_1,LOW);
    digitalWrite(Door_Open_Status_2,HIGH);
    digitalWrite(Door_Open_Status_3,LOW);

    digitalWrite(Door_Open_Out_1,HIGH);
    digitalWrite(Door_Open_Out_2,LOW);
    digitalWrite(Door_Open_Out_3,HIGH);
   
   }
  else if ((digitalRead(Door_Open_IN_1)==HIGH) && (digitalRead(Door_Open_IN_2)==HIGH) && (digitalRead(Door_Open_IN_3)==LOW))
   {
    digitalWrite(Door_Open_Status_1,LOW);
    digitalWrite(Door_Open_Status_2,LOW);
    digitalWrite(Door_Open_Status_3,HIGH);

    digitalWrite(Door_Open_Out_1,HIGH);
    digitalWrite(Door_Open_Out_2,HIGH);
    digitalWrite(Door_Open_Out_3,LOW); 
   }

  else 
   {
    digitalWrite(Door_Open_Status_1,LOW);
    digitalWrite(Door_Open_Status_2,LOW);
    digitalWrite(Door_Open_Status_3,LOW);
 
    digitalWrite(Door_Open_Out_1,HIGH);
    digitalWrite(Door_Open_Out_2,HIGH);
    digitalWrite(Door_Open_Out_3,HIGH);  
  }

 if (digitalRead(EMG_IN_1) == HIGH)
 {
     digitalWrite(Door_Open_Out_1,LOW);
     delay(10000);
 }
 else;

   if (digitalRead(EMG_IN_2) == HIGH)
   {
     digitalWrite(Door_Open_Out_2,LOW);
     delay(10000);
   }
  else;

  if (digitalRead(EMG_IN_3) == HIGH)
   {
     digitalWrite(Door_Open_Out_3,LOW);
     delay(10000);
   }
  else;
  
  }
