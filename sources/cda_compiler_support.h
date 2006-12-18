#ifndef compiler_support_h
#define compiler_support_h

#include "cda_config.h"

#ifdef __BORLANDC__
#define WIN32
#define HEADER_INLINE
#else
#define HEADER_INLINE inline
#endif

#ifdef HAVE_VISIBILITY_ATTRIBUTE
#define CDA_EXPORT_PRE
#define CDA_EXPORT_POST __attribute__((visibility("default")))
#define WARN_IF_RETURN_UNUSED __attribute__((warn_unused_result))
#define CDA_IMPORT_PRE
#define CDA_IMPORT_POST __attribute__((visibility("default")))
#elif defined(WIN32)
#define CDA_EXPORT_PRE __declspec(dllexport)
#define CDA_EXPORT_POST
#define CDA_IMPORT_PRE __declspec(dllimport)
#define CDA_IMPORT_POST
#define WARN_IF_RETURN_UNUSED
#else
#define CDA_EXPORT_PRE
#define CDA_EXPORT_POST
#define CDA_IMPORT_PRE
#define CDA_IMPORT_POST
#define WARN_IF_RETURN_UNUSED
#endif

#endif // compiler_support_h
