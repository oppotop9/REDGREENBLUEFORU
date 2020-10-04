int R = 9; int G = 10; int B =11; 



void setup() {
  tone(8,500,250);
  delay(500);
  
  pinMode(R, OUTPUT);

  pinMode(B, OUTPUT);

  pinMode(G, OUTPUT);
  
  Serial.begin(9600);
}

void loop(){
  
    analogWrite(R, 255); // RED 
    analogWrite(B, 0); 
    analogWrite(G, 0); 

    delay(500); 

    analogWrite(R, 0); // green
    analogWrite(B, 0); 
    analogWrite(G, 255); 

    delay(500);

    analogWrite(R, 255); // yellow
    analogWrite(B, 0); 
    analogWrite(G, 255); 

    delay(500);

    analogWrite(R, 0); // blue
    analogWrite(B, 255); 
    analogWrite(G, 0); 
    
    delay(500);
    
    analogWrite(R, 150); // Violet
    analogWrite(B, 150); 
    analogWrite(G, 0); 
    
    delay(500);
    
    analogWrite(R, 150); // Grey
    analogWrite(B, 150); 
    analogWrite(G, 150); 
  
    delay(500);
  
    analogWrite(R, 255); // White
    analogWrite(B, 255); 
    analogWrite(G, 255); 
  
    delay(500);
    
}
