#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

struct Lyric {
  unsigned long time;
  const char* line1;
  const char* line2;
};

Lyric lyrics[] = {
  {0, "I said", "ooooohh"},
  {3500, "I'm Blinded by", "the lights"},
  {6000, "No, I can't ", "sleep until I"},
  {8100, "feel your touch"},
  {11000, "I said", "ooooohh"},
  {14000, "I'm Drowning", "in the night"},
  {17000, "oh, when I'm", "like this"},
  {19000, "you're the one ", "I trust"},
  {22000, "Hey", "Hey"},
  {21000, "Hey", "Hey"}
};

const int totalLyrics = sizeof(lyrics) / sizeof(lyrics[0]);
int current = 0;
unsigned long startTime;

void setup() {
  lcd.init();
  lcd.backlight();
  startTime = millis();
}

void loop() {
  if (current < totalLyrics &&
      millis() - startTime >= lyrics[current].time) {

    lcd.clear();

    lcd.setCursor(0, 0);
    lcd.print(lyrics[current].line1);

    lcd.setCursor(0, 1);
    lcd.print(lyrics[current].line2);

    current++;
  }

  if (current >= totalLyrics) {
    delay(5000);
    current = 0;
    startTime = millis();
  }
}
