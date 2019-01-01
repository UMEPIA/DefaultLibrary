#define LOGD(LOGTYPE, ...) Log::Debug(LOGTYPE, __FILE__, __LINE__, __VA_ARGS__)

class Log {
public:
	static void Debug(const char* LOGTYPE, const char* fileName, int codeLine, const char* format, ...);
	static void Recode(const char* LOGTYPE, const char* fileName, int codeLine, const char* format, ...);
private:
	Log() {}
	virtual ~Log() {}
};