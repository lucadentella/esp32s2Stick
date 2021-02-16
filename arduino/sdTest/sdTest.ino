#include "SD.h"
#include "SPI.h"

#define HSPI_MISO   2
#define HSPI_MOSI   15
#define HSPI_SCLK   14
#define HSPI_SS     13

SPIClass *spi = NULL;

void setup() {
  
  Serial.begin(115200);

  spi = new SPIClass(HSPI);
  spi->begin(HSPI_SCLK, HSPI_MISO, HSPI_MOSI, HSPI_SS);
  pinMode(HSPI_SS, OUTPUT);
  
  if(!SD.begin(HSPI_SS, *spi)){
      Serial.println("Card Mount Failed");
      return;
  }
  uint8_t cardType = SD.cardType();
  
  if(cardType == CARD_NONE){
      Serial.println("No SD card attached");
      return;
  }
  
  Serial.print("SD Card Type: ");
  if(cardType == CARD_MMC){
      Serial.println("MMC");
  } else if(cardType == CARD_SD){
      Serial.println("SDSC");
  } else if(cardType == CARD_SDHC){
      Serial.println("SDHC");
  } else {
      Serial.println("UNKNOWN");
  }
  
  uint64_t cardSize = SD.cardSize() / (1024 * 1024);
  Serial.printf("SD Card Size: %lluMB\n", cardSize);
}

void loop() {
  // put your main code here, to run repeatedly:

}
