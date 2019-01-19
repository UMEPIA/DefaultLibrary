#include "Logs.hpp"
#include "stdafx.h"

#include <stdarg.h>
#include <Windows.h>
#include <time.h>
#include <string.h>
/*
	TODO: Recode �κ� -> ���Ͽ� ��� + ����� ��� ���ÿ� �ϴ� ��� �߰�
*/
using namespace Library::Logger;

void Log::Debug(const char* LOGTYPE, const char* fileName, int codeLine, std::string format) 
{
	time_t now = time(0);
	struct tm  tstruct;
	char       timeForm[80];
	tstruct = *localtime(&now);
	strftime(timeForm, sizeof(timeForm), "%Y-%m-%d %X", &tstruct); // YYYY-MM-DD.HH:mm:ss

    std::string msg = fmt::format("[{}][{}] ({}:{}) {} \n", timeForm, LOGTYPE, strrchr(fileName, '\\') ? strrchr(fileName, '\\') + 1 : fileName, codeLine, format);
	OutputDebugStringA((LPCSTR)msg.c_str() );
}

void Log::Recode(const char* LOGTYPE, const char* fileName, int codeLine, std::string format)
{
    time_t now = time(0);
    struct tm  tstruct;
    char       timeForm[80];
    tstruct = *localtime(&now);
    strftime(timeForm, sizeof(timeForm), "%Y-%m-%d %X", &tstruct); // YYYY-MM-DD.HH:mm:ss

    std::string msg = fmt::format("[{}][{}] ({}:{}) {} \n", timeForm, LOGTYPE, strrchr(fileName, '\\') ? strrchr(fileName, '\\') + 1 : fileName, codeLine, format);
    OutputDebugStringA((LPCSTR)msg.c_str());
}