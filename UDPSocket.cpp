#include "Header.h"

UDPSocket::~UDPSocket()
{
	closesocket(mSocket);
}