// Define Pins
#define BLUE 3
#define GREEN 5
#define RED 6

int redValue = 255;
int greenValue = 128;
int blueValue = 0;




void setup() {
pinMode(RED, OUTPUT);//cause they all outputing a strength to the rgb pins
pinMode(GREEN, OUTPUT);
pinMode(BLUE, OUTPUT);

Serial.begin(9600);
randomSeed(analogRead(A0));//random number bacause A0 is not plugged in so its random

//redValue = random(256);//starts at 4 random values 0-255
//greenValue = random(256);
//blueValue = random(256);
}


void loop() {

  analogWrite(RED, redValue);//update the values of the pins
  analogWrite(GREEN, greenValue);
  analogWrite(BLUE, blueValue);  

  redValue += random(-5,2);//change all their values by this amount
  greenValue += random(-3,3);
  blueValue += random(-2,5);


  redValue = constrain(redValue, 0, 255);//constrain it no no massive jumps
  greenValue = constrain(greenValue, 0, 255);
  blueValue = constrain(blueValue, 0, 255);

  Serial.print("Red: "); // Prints the text
  Serial.println(redValue); // Prints the text

  Serial.print("Green: "); // Prints the text
  Serial.println(greenValue); // Prints the text


  Serial.print("Blue: "); // Prints the text
  Serial.println(blueValue); // Prints the text
  Serial.println();

 delay(15);
}
