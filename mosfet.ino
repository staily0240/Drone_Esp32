#define fadePin 3

void setup(){
pinMode(fadePin, OUTPUT);
Serial.begin(9600);
}

loop void(){

for(int i = 0; i<360; i++){
//converte ângulo 0-360 em radianos (necessário para função sin)
float rad = DEG_TO_RAD * i;

//calcula o seno do ângulo como número entre 0 e 255
int sinOut = constrain((sin(rad) * 128) + 128, 0, 255);

analogWrite(fadePin, sinOut);

Serial.println(sinOut);
atraso(15);
}
}
