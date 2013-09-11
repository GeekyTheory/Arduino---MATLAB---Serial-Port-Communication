/*
     Arduino + Matlab: Serial communication
	
Mario Pérez Esteso
http://www.geekytheory.com
https://www.youtube.com/user/telecoreference

https://twitter.com/geekytheory

Facebook page! Join us with a LIKE!
https://www.facebook.com/geekytheory
*/


int potenciometro_pin=0; //Analog 0
int valor_potenciometro=0;

void setup(){
  Serial.begin(9600);
}

void loop(){
  valor_potenciometro=analogRead(potenciometro_pin);
  Serial.println(valor_potenciometro);
  delay(100);
}

