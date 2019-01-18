#include "Logs.hpp"
#include "stdafx.h"

#include <stdarg.h>
#include <Windows.h>
#include <time.h>
/*
	TODO: Recode 부분 -> 파일에 기록 + 디버그 출력 동시에 하는 기능 추가
*/
void Log::Debug(const char* LOGTYPE, const char* fileName, int codeLine, const char* format, ...) 
{
	char message[1024] = { 0, };

	va_list lpStart;
	va_start(lpStart, format);
	vsprintf_s(message, 1024, format, lpStart);
	va_end(lpStart);

	time_t now = time(0);
	struct tm  tstruct;
	char       timeForm[80];
	tstruct = *localtime(&now);
	strftime(timeForm, sizeof(timeForm), "%Y-%m-%d %X", &tstruct); // YYYY-MM-DD.HH:mm:ss

	char messagePrint[1024] = { 0, };
	sprintf( messagePrint, "[%s][%s] (%s:%d) %s\n", timeForm, LOGTYPE, strrchr(fileName, '\\') ? strrchr(fileName, '\\') + 1 : fileName, codeLine , message );
	OutputDebugStringA(messagePrint);
}

void Log::Recode(const char* LOGTYPE, const char* fileName, int codeLine, const char* format, ...) 
{
	char message[1024] = { 0, };

	va_list lpStart;
	va_start(lpStart, format);
	vsprintf_s(message, 1024, format, lpStart);
	va_end(lpStart);

	time_t now = time(0);
	struct tm  tstruct;
	char       timeForm[80];
	tstruct = *localtime(&now);
	strftime(timeForm, sizeof(timeForm), "%Y-%m-%d %X", &tstruct); // YYYY-MM-DD.HH:mm:ss

	char messagePrint[1024] = { 0, };
	sprintf(messagePrint, "[%s][VERBOSE] (%s:%d) %s\n", timeForm, strrchr(fileName, '\\') ? strrchr(fileName, '\\') + 1 : fileName, codeLine, message);
	OutputDebugStringA(messagePrint);
}