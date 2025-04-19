#define VIBRATION_SENSOR_PIN 4  // Vibration Sensor on GPIO 4
#define BUZZER_PIN 5            // Buzzer on GPIO 5

#define BLYNK_TEMPLATE_ID "TMPL4V6q_Lxzz"
#define BLYNK_TEMPLATE_NAME "Knock System"
#define BLYNK_AUTH_TOKEN "cyCR8a84IK4a7535p1r6YQgsj8N9fmVY"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>


char ssid[] = "";
char pass[] = "";

bool knockDetected = false;
unsigned long lastKnockTime = 0;
unsigned long debounceDelay = 1000; // 1-second debounce


void setup() {
  Serial.begin(115200);

  pinMode(VIBRATION_SENSOR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN, HIGH);  // Start with buzzer off
  // Initialize Blynk
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  Serial.println("Setup completed!");
}

// Knock Handling Function
void alertKnock() {
  // Send notification to phone
  Blynk.logEvent("knock_detected","Someone knocked on the door!");

  // Activate buzzer sound
  digitalWrite(BUZZER_PIN, HIGH);
  delay(1000);  // Buzzer rings for 1 second
  digitalWrite(BUZZER_PIN, LOW);
  delay(1000);
}

void loop() {
   Blynk.run();

  int sensorValue = digitalRead(VIBRATION_SENSOR_PIN);

  // Check if vibration sensor detects a knock
  if (sensorValue == HIGH && !knockDetected) {  // HIGH means knock detected
    knockDetected = true;
    alertKnock();
    Serial.println("CINE E?");
  }
  else{
    knockDetected = false;
    digitalWrite(BUZZER_PIN, HIGH);
  }
}

