#include <IRremote.h>

int porta_receptor = 2;
int porta_a = 3;
int porta_b = 4;
int porta_c = 6;
int porta_d = 7;
int porta_e = 8;
int porta_f = 9;
int porta_g = 10;
int porta_ponto = 5;
IRrecv receptor(porta_receptor);
decode_results resultados;

void setup()
{
  Serial.begin(9600);
  receptor.enableIRIn();
  pinMode(porta_a,OUTPUT);
  pinMode(porta_b,OUTPUT);
  pinMode(porta_c,OUTPUT);
  pinMode(porta_d,OUTPUT);
  pinMode(porta_e,OUTPUT);
  pinMode(porta_f,OUTPUT);
  pinMode(porta_g,OUTPUT);
  pinMode(porta_ponto,OUTPUT);
}

void loop() {
  if (receptor.decode(&resultados)) {
    Serial.println(resultados.value, HEX);
    if(resultados.value == 0xFD30CF){
      // 0
      digitalWrite(porta_a,HIGH);
      digitalWrite(porta_b,HIGH);
      digitalWrite(porta_c,HIGH);
      digitalWrite(porta_d,HIGH);
      digitalWrite(porta_e,HIGH);
      digitalWrite(porta_f,HIGH);
      digitalWrite(porta_g,LOW);
      digitalWrite(porta_ponto,LOW);

    }else{
      if(resultados.value == 0xFD08F7){
        // 1
        Serial.println("1");
        digitalWrite(porta_a,LOW);
        digitalWrite(porta_b,HIGH);
        digitalWrite(porta_c,HIGH);
        digitalWrite(porta_d,LOW);
        digitalWrite(porta_e,LOW);
        digitalWrite(porta_f,LOW);
        digitalWrite(porta_g,LOW);
        digitalWrite(porta_ponto,LOW);
      }else{
          if(resultados.value == 0xFD8877){
            // 2
            digitalWrite(porta_a,HIGH);
            digitalWrite(porta_b,HIGH);
            digitalWrite(porta_c,LOW);
            digitalWrite(porta_d,HIGH);
            digitalWrite(porta_e,HIGH);
            digitalWrite(porta_f,LOW);
            digitalWrite(porta_g,HIGH);
            digitalWrite(porta_ponto,LOW);
          }else{
            if(resultados.value == 0xFD48B7){
                // 3
              digitalWrite(porta_a,HIGH);
                digitalWrite(porta_b,HIGH);
                digitalWrite(porta_c,HIGH);
                digitalWrite(porta_d,HIGH);
                digitalWrite(porta_e,LOW);
                digitalWrite(porta_f,LOW);
                digitalWrite(porta_g,HIGH);
                digitalWrite(porta_ponto,LOW);
            }else{
              if(resultados.value == 0xFD28D7){
                    // 4
                  digitalWrite(porta_a,LOW);
                    digitalWrite(porta_b,HIGH);
                    digitalWrite(porta_c,HIGH);
                    digitalWrite(porta_d,LOW);
                    digitalWrite(porta_e,LOW);
                    digitalWrite(porta_f,HIGH);
                    digitalWrite(porta_g,HIGH);
                    digitalWrite(porta_ponto,LOW);
              }else{
                  if(resultados.value == 0xFDA857){
                        // 5
                    digitalWrite(porta_a,HIGH);
                        digitalWrite(porta_b,LOW);
                        digitalWrite(porta_c,HIGH);
                        digitalWrite(porta_d,HIGH);
                        digitalWrite(porta_e,LOW);
                        digitalWrite(porta_f,HIGH);
                        digitalWrite(porta_g,HIGH);
            digitalWrite(porta_ponto,LOW);
                }else{
                if(resultados.value == 0xFD6897){
                            // 6
                      digitalWrite(porta_a,HIGH);
                            digitalWrite(porta_b,LOW);
                            digitalWrite(porta_c,HIGH);
                            digitalWrite(porta_d,HIGH);
                            digitalWrite(porta_e,HIGH);
                            digitalWrite(porta_f,HIGH);
                            digitalWrite(porta_g,HIGH);
                                      digitalWrite(porta_ponto,LOW);
                  }else{
                    if(resultados.value == 0xFD18E7){
                              // 7
                              digitalWrite(porta_a,HIGH);
                              digitalWrite(porta_b,HIGH);
                              digitalWrite(porta_c,HIGH);
                              digitalWrite(porta_d,LOW);
                              digitalWrite(porta_e,LOW);
                              digitalWrite(porta_f,LOW);
                              digitalWrite(porta_g,LOW);
                              digitalWrite(porta_ponto,LOW);
                            }else{
                if(resultados.value == 0xFD9867){
                                    // 8
                                  digitalWrite(porta_a,HIGH);
                                    digitalWrite(porta_b,HIGH);
                                    digitalWrite(porta_c,HIGH);
                                    digitalWrite(porta_d,HIGH);
                                    digitalWrite(porta_e,HIGH);
                                    digitalWrite(porta_f,HIGH);
                                    digitalWrite(porta_g,HIGH);
                                    digitalWrite(porta_ponto,LOW);
                              }else{
                                  if(resultados.value == 0xFD58A7){
                                        // 9
                                    digitalWrite(porta_a,HIGH);
                                        digitalWrite(porta_b,HIGH);
                                        digitalWrite(porta_c,HIGH);
                                        digitalWrite(porta_d,HIGH);
                                        digitalWrite(porta_e,LOW);
                                        digitalWrite(porta_f,HIGH);
                                        digitalWrite(porta_g,HIGH);
                                        digitalWrite(porta_ponto,LOW);
                                }else{
                                      // Ponto
                                      digitalWrite(porta_a,LOW);
                                      digitalWrite(porta_b,LOW);
                                      digitalWrite(porta_c,LOW);
                                      digitalWrite(porta_d,LOW);
                                      digitalWrite(porta_e,LOW);
                                      digitalWrite(porta_f,LOW);
                                      digitalWrite(porta_g,LOW);
                                      digitalWrite(porta_ponto,HIGH);
                                }
                              }
                            }
              }
            }
          }
        }
      }
      }
    }
    receptor.resume();
    delay(100);
  }
}
