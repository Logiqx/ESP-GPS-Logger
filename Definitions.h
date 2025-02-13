#ifndef RTOS5_H
#define RTOS5_H

//#define STATIC_DEBUG        //indien gps test zonder snelheid en met wifi actief
//#define DLS                  //set date on march 26 1:55, to test daylightsaving
#define GPIO12_ACTIF        //if GPIO12 is used as wake up, standard GPIO12 function is not activated !!
#define WAKE_UP_GPIO 39          //default 39
#define GPIO_NUM_xx GPIO_NUM_39   //default GPIO_NUM_39 type is no int
//#define MIN_SPEED_START_LOGGING 2000        //was 2000 min speed in mm/s over 2 s alvorens start loggen naar SD 
#define TIME_DELAY_FIRST_FIX 10 //10 navpvt messages alvorens start loggen
#define TIME_DELAY_NEW_RUN 10 //int time_delay_new_run
#define EPOCH_2022 1640995200 //start of the year 2022 1640995200
#define UBLOX_TYPE_UNKNOWN 0
#define M8_9600BD 1
#define M10_9600BD 2
#define M8_38400BD 3
#define M10_38400BD 4
#define M9_9600BD 5
#define M9_38400BD 6
#define AUTO_DETECT 0xFF
/*Pin definitions**************************************************************************/
#define SPI_MOSI 23
#define SPI_MISO -1//standaard is MISO GPIO 19 !!!!
#define SPI_CLK 18
#define SDCARD_SS 13
#define SDCARD_CLK 14
#define SDCARD_MOSI 15
#define SDCARD_MISO 2
#define RXD2 32 //yellow is Tx Ublox, Beitian white is Tx
#define TXD2 33 //green is Rx Ublox, Beitian green is Rx
#define PIN_BAT 35 //adc for bat voltage
/*Other definitions...**********************************************************************/
#define CALIBRATION_BAT_V 1.7 //voor proto 1
#define VOLTAGE_100 4.2     //reading 100% bat
#define VOLTAGE_0 3.4       //reading 0% bat
#define MINIMUM_VOLTAGE 3.1       // if lower then minimum_voltage, back to sleep.....
#define MINIMUM_VOLTAGE_CHANGE  0.01  //refresh screen if change > 0.01
#define uS_TO_S_FACTOR 1000000UL /* Conversion factor for micro seconds to seconds */
#define TIME_TO_SLEEP  1800UL   //21600UL        /* Time ESP32 will go to sleep (no for 30min, only refresh screen if delta bat > 0.05 V) */
#define WDT_TIMEOUT 60             //60 seconds WDT, opgelet zoeken naar ssid time-out<dan 10s !!!
#define MAX_COUNT_WDT_TASK0 10   // 600 seconds max downloadtime for files !!!
#define MIN_numSV_FIRST_FIX 5     //alvorens start loggen, changed from 4 to 5 7.1/2023
#define MAX_Sacc_FIRST_FIX 2     //alvorens start loggen
#define MIN_numSV_GPS_SPEED_OK 4  //min aantal satellieten voor berekenen snelheid, anders 
#define MAX_Sacc_GPS_SPEED_OK 1   //max waarde Sacc voor berekenen snelheid, anders 0
#define MAX_GPS_SPEED_OK 40       //max snelheid in m/s voor berekenen snelheid, anders 0
#define EEPROM_SIZE 1             //use 1 byte in eeprom for saving type of ublox
#define TIME_OUT_NAV_PVT 10000    //10s time out ubx nav-pvt msg before screen "TROUBLE" 
#endif
