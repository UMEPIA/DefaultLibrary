#include <formatter/format.h>
#include <string.h>

#define LOGD(LOGTYPE, ...) \
    Library::Logger::Log *LbLogger; \
    LbLogger->Debug(LOGTYPE, __FILE__, __LINE__, fmt::format(__VA_ARGS__))
#define USE_LOGGER_INIT

namespace Library
{
    namespace Logger
    {
        class Log {
        public:
            static void Debug(const char* LOGTYPE, const char* fileName, int codeLine, std::string formmt);
            static void Recode(const char* LOGTYPE, const char* fileName, int codeLine, std::string format);
        private:
            Log() {}
            virtual ~Log() {}
        };
    }
}
