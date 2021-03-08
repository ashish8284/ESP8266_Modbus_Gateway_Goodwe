//TX & RX Pin assignment
int Rx = 12; 
int Tx = 13;

//Wifi router Credentials
const char* ssid             = "CG01_SOLAR_AP";
const char* passuint16_t     = "adani@123";

//MQTT Server Credentials
int WIFI = 200; //wifi reconnection time
bool MQTT_Enable = true; //enable mqtt
int MQTT_Re_Connect_Interval = 60000; //MQTT 
const char* mqtt_server      = "192.168.0.36";
const char* mqttUser         = "";
const char* mqttPassuint16_t = "";
const char* mqttClientid     = "Client02";

//Settings for AP Mode
bool WIFIAP = false;
IPAddress AP_IP(192, 168, 11, 4);
IPAddress AP_gateway(192, 168, 11, 1);
IPAddress AP_subnet(255, 255, 255, 0);
const char* AP_ssid             = "Techno_Automation"; 
const char* AP_passuint16_t     = "Techno$123";

//Modbus next slave inverval milliseconds
long Interval = 10000; // Delay between second slave quary generation

//Modbus Slave ID
byte Start_ID = 1; //First id
byte End_ID = 2; // Last id
