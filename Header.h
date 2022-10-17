// Ёто маркос, заставл€ющий препроцессор исключить директиву
// WinSock из списка файлов, содержащихс€ в Windows.h,
// чтобы предотвратить конфликт одинаковых функций в 
// Winsock2.h и Windows.h
#define WIN32_LEAN_AND_MEAN

//#include "Windows.h"
#include "Winsock2.h"

// ‘ункции преобразовани€ адресов
#include "Ws2tcpip.h"