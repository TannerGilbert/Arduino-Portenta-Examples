// the setup function runs once when you press reset or power the board
void setup() {
    // initialize digital pin LED_BUILTIN as an output.
    pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(LED_BUILTIN, HIGH); // turn the LED off after being turned on by pinMode()
}

// the loop function runs over and over again forever
void loop() {
    digitalWrite(LED_BUILTIN, LOW); // turn the LED on (LOW is the voltage level)
    delay(1000); // wait for a second
    digitalWrite(LED_BUILTIN, HIGH); // turn the LED off by making the voltage HIGH
    delay(1000); // wait for a second
}