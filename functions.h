#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

void Config_Clock();
void Config_Pins();
void Config_USCI();

void UART_SendChar(unsigned char byte);
void UART_SendString(char* s);
void UART_SendInt(unsigned long n);
void UART_SendFloat(float x, unsigned char length);
char UART_GetChar();
int Get_RSSI(char* ReceivedString);
int GetNumLength(int x);
void SendCommand(char* SSID);
int avr(int rssi[]);
float distance(int rssi);
double x_object(double d1, double d3, double x3, double y3, double yoject);
double y_object(double d1, double d2, double y2, double x2);
void CalculatPosition(int RSSI[]);
void ConnectTCPSever(char* SSID, char* PW, char* IP,char* port);
void SendPosition();
void SplitString(char* ReceivedString);
#endif /* FUNCTIONS_H_ */
