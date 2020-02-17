#define bottomPin A0
#define topPin A1

int minWet = 1080;
int maxWet = 380;

float soilBottom = 0; 
float soilTop = 0; 
void setup() { 
 Serial.begin(9600); 
} 
void loop() { 
 for (int i = 0; i <= 50; i++) 
 { 
   soilBottom = soilBottom + analogRead(bottomPin);
   soilTop = soilTop + analogRead(topPin); 
   delay(1); 
 } 
 soilBottom = soilBottom/50.0;
 soilTop = soilTop/50.0; 
 int outputBottom = map(soilBottom,minWet,maxWet,0,100);
 int outputTop = map(soilTop,minWet,maxWet,0,100);
 Serial.print(outputTop);
 Serial.print(","); 
 Serial.print(outputBottom);
 Serial.println(); 
} 
