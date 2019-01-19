#define DECLARE_COMMON_LIBRARY \
		USE_LOGGER_INIT \
        USE_LIBLALY_FORMATTER

#define USE_LIBLALY_FORMATTER using namespace fmt;

#ifdef USE_LOGGER_INIT
const char* LOGGING_TYPE_VERBOSE       = "VERBOSE";
const char* LOGGING_TYPE_DEBUG         = "DEBUG";
const char* LOGGING_TYPE_INFO          = "INFO";
const char* LOGGING_TYPE_WARNING       = "WARNING";
const char* LOGGING_TYPE_ERROR         = "ERROR";
const char* LOGGING_TYPE_FATAL         = "FATAL";
const char* LOGGING_TYPE_SUCCESS       = "SUCCESS";
#endif

#define IF_FALSE_BREAK(Function)    if (Function == false) { break; }
#define IF_TRUE_BREAK(Function)     if (Function == true) { break; }
#define IF_FALSE_CONTINUE(Function) if (Function == false) { continue; }
#define IF_TRUE_CONTINUE(Function)  if (Function == true) { continue; }
