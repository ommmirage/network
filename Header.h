// ��� ������, ������������ ������������ ��������� ���������
// WinSock �� ������ ������, ������������ � Windows.h,
// ����� ������������� �������� ���������� ������� � 
// Winsock2.h � Windows.h
#define WIN32_LEAN_AND_MEAN

//#include "Windows.h"
// ������������ ����, ���������� ����������� ���
// ������������� ���������� Winsock2
#include "Winsock2.h"

// ������� �������������� �������
#include "Ws2tcpip.h"

#include "stdint.h"

#include "UDPSocket.h"
#include "SocketAddress.h"

// Indicates to the linker that the Ws2_32.lib file is needed
#pragma comment(lib, "ws2_32.lib")