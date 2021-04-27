const byte BOTAO = 12;
const byte LED = 11;

const byte G = 10;
const byte F = 9;
const byte A = 8;
const byte B = 7;
const byte E = 6;
const byte D = 5;
const byte C = 4;
const byte DP = 3;

void setup() {
  
  pinMode(BOTAO, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
  
  pinMode(G, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(DP, OUTPUT); 
  
  Serial.begin(9600);
  
}

void loop(){
  
  byte ledResposta = digitalRead(LED);
  byte botaoResposta = digitalRead(BOTAO);
  
  if(botaoResposta == LOW) {
    
    for (int tempo = 0; tempo <= 9; tempo++) {
      
      digitalWrite(LED, HIGH);
      
      switch(tempo) {
        
        case 1: {
          
          digitalWrite(A, HIGH);
          digitalWrite(B, LOW);
          digitalWrite(C, LOW);
          digitalWrite(D, HIGH);
          digitalWrite(E, HIGH);
          digitalWrite(F, HIGH);
          digitalWrite(G, HIGH);
          digitalWrite(DP, HIGH);
          break;
          
        }
        
        case 2: {
          
          digitalWrite(A, LOW);
          digitalWrite(B, LOW);
          digitalWrite(C, HIGH);
          digitalWrite(D, LOW);
          digitalWrite(E, LOW);
          digitalWrite(F, HIGH);
          digitalWrite(G, LOW);
          digitalWrite(DP, HIGH);
          break;
          
        }
        
        case 3: {
          
          digitalWrite(A, LOW);
          digitalWrite(B, LOW);
          digitalWrite(C, LOW);
          digitalWrite(D, LOW);
          digitalWrite(E, HIGH);
          digitalWrite(F, HIGH);
          digitalWrite(G, LOW);
          digitalWrite(DP, HIGH);
          break;
          
        }
        
        case 4: {
          
          digitalWrite(A, HIGH);
          digitalWrite(B, LOW);
          digitalWrite(C, LOW);
          digitalWrite(D, HIGH);
          digitalWrite(E, HIGH);
          digitalWrite(F, LOW);
          digitalWrite(G, LOW);
          digitalWrite(DP, HIGH);
          break;
          
        }
        
        case 5: {
          
          digitalWrite(A, LOW);
          digitalWrite(B, HIGH);
          digitalWrite(C, LOW);
          digitalWrite(D, LOW);
          digitalWrite(E, HIGH);
          digitalWrite(F, LOW);
          digitalWrite(G, LOW);
          digitalWrite(DP, HIGH);
          break;
          
        }
        
        case 6: {
          
          digitalWrite(A, LOW);
          digitalWrite(B, HIGH);
          digitalWrite(C, LOW);
          digitalWrite(D, LOW);
          digitalWrite(E, LOW);
          digitalWrite(F, LOW);
          digitalWrite(G, LOW);
          digitalWrite(DP, LOW);
          break;
          
        }
        
        case 7: {
          
          digitalWrite(A, LOW);
          digitalWrite(B, LOW);
          digitalWrite(C, LOW);
          digitalWrite(D, HIGH);
          digitalWrite(E, HIGH);
          digitalWrite(F, HIGH);
          digitalWrite(G, HIGH);
          digitalWrite(DP, HIGH);
          break;
          
        }
        
        case 8: {
          
          digitalWrite(A, LOW);
          digitalWrite(B, LOW);
          digitalWrite(C, LOW);
          digitalWrite(D, LOW);
          digitalWrite(E, LOW);
          digitalWrite(F, LOW);
          digitalWrite(G, LOW);
          digitalWrite(DP, HIGH);
          break;
          
        }
        
        case 9: {
          
          digitalWrite(A, LOW);
          digitalWrite(B, LOW);
          digitalWrite(C, LOW);
          digitalWrite(D, LOW);
          digitalWrite(E, HIGH);
          digitalWrite(F, LOW);
          digitalWrite(G, LOW);
          digitalWrite(DP, LOW);
          break;
          
        }
        
        default: {

          digitalWrite(A, LOW);
          digitalWrite(B, LOW);
          digitalWrite(C, LOW);
          digitalWrite(D, LOW);
          digitalWrite(E, LOW);
          digitalWrite(F, LOW);
          digitalWrite(G, HIGH);
          digitalWrite(DP, LOW);
          break;

        }
        
      }
      
      delay(1000);
      
  	}
    
  } else {
    
    digitalWrite(LED, LOW);
    
  }
  
}
