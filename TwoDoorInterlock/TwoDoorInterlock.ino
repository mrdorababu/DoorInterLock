

//Inputs

const uint8_t Door_Open_IN_1 = 3;
const uint8_t Door_Open_EMG_1 = 2;


const uint8_t Door_Open_IN_2 = 5;
const uint8_t Door_Open_EMG_2 = 6;


//Outputs

uint8_t Door_Open_Out_1 = 9;
uint8_t Door_Open_Out_2 = 10;


uint8_t Door_Open_Status_1 = A0;
uint8_t Door_Open_Status_2 = A1;



//Led status for Door 

void setup()
{
     pinMode(Door_Open_IN_1, INPUT);
     pinMode(Door_Open_IN_2, INPUT);
     
     
     pinMode(Door_Open_EMG_1, INPUT);
     pinMode(Door_Open_EMG_2, INPUT);
    
          
     pinMode(Door_Open_Out_1, OUTPUT);
     pinMode(Door_Open_Out_2, OUTPUT);
     
     pinMode(Door_Open_Status_1, OUTPUT);
     pinMode(Door_Open_Status_2, OUTPUT); 

    
}

void loop()
{
   if((digitalRead(Door_Open_IN_1) == LOW) || (digitalRead(Door_Open_EMG_1) == HIGH)) {
         digitalWrite(Door_Open_Out_2, HIGH);
         digitalWrite(Door_Open_Status_2, HIGH);
         digitalWrite(Door_Open_Out_1, LOW);
         digitalWrite(Door_Open_Status_1, LOW);
      } 
      else if((digitalRead(Door_Open_IN_2) == LOW) || (digitalRead(Door_Open_EMG_2) == HIGH)) {
         digitalWrite(Door_Open_Out_1, HIGH);
         digitalWrite(Door_Open_Status_1, HIGH);
         digitalWrite(Door_Open_Out_2, LOW);
         digitalWrite(Door_Open_Status_2, LOW);
        }   
      else{
        digitalWrite(Door_Open_Out_2, LOW);
        digitalWrite(Door_Open_Status_2, LOW);
        digitalWrite(Door_Open_Out_1, LOW);
        digitalWrite(Door_Open_Status_1, LOW);
        }
}  

