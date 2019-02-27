// Physical device information for board and sensor
#define DEVICE_ID             WiFi.macAddress()     // already configured
#define DEVICE_NAME           "FEATHER ESP12S"
#define DEVICE_STUDENT        "JIMMY"
#define DEVICE_TYPE           "Temperature Sensor"
#define DEVICE_LOCATION_LAT   "99.4213"
#define DEVICE_LOCATION_LON   "36.9572"      
#define DEVICE_SEND_INTERVAL  60000 //617,143           default 3600000 ms = 1 hour

#define WIFI_SSID             "SamsungGalaxyS8+"
#define WIFI_PASS             "jimmy100"


//DHT Temperature sensor configuration
#define DHT_PIN               2
#define DHT_TYPE              DHT11


// Pin layout configuration
#define LED_PIN               0


// Address configuration, don't remove!
#define MESSAGE_MAX_LEN       256
#define EEPROM_SIZE           512
#define SSID_LEN              32
#define PASS_LEN              32
#define CONNECTIONSTRING_LEN  256
