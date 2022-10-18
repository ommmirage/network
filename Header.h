// Это маркос, заставляющий препроцессор исключить директиву
// WinSock из списка файлов, содержащихся в Windows.h,
// чтобы предотвратить конфликт одинаковых функций в 
// Winsock2.h и Windows.h
#define WIN32_LEAN_AND_MEAN

//#include "Windows.h"
// Заголовочный файл, содержащий определения для
// использования библиотеки Winsock2
#include "Winsock2.h"

// Функции преобразования адресов
#include "Ws2tcpip.h"

#include "stdint.h"

#include "UDPSocket.h"
#include "SocketAddress.h"

// Indicates to the linker that the Ws2_32.lib file is needed
#pragma comment(lib, "ws2_32.lib")