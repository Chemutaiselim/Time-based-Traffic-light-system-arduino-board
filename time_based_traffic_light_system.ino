// Declaration of input pins
const int red_pin = 12;
const int yellow_pin = 11;
const int green_pin = 10;
// Declaration of the pin mode (input or output)
void setup() {
 // put your setup code here, to run once:
 pinMode(red_pin, OUTPUT);
 pinMode(yellow_pin, OUTPUT);
 pinMode(green_pin, OUTPUT);
}
void loop() {
 // put your main code here, to run repeatedly:
 // Light the Red led on for 3 secs
 digitalWrite(red_pin, HIGH);
 delay(3000);
 // Light the yellow led on for 2 secs
 digitalWrite(yellow_pin, HIGH);
 delay(2000);
 // Turn red and yellow off and turn on green for 5 sec
 digitalWrite(red_pin, LOW);
 digitalWrite(yellow_pin, LOW);
 digitalWrite(green_pin, HIGH);
 delay(5000);
 // Turn green off and light yellow for 1 sec
 digitalWrite(green_pin, LOW);
 digitalWrite(yellow_pin, HIGH);
 delay(1000);
 // Finally turn off the yellow LED
 digitalWrite(yellow_pin, LOW);
}
