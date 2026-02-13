#ifndef CONFIG_H
#define CONFIG_H

#define HAVE_STDINT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_SYS_STAT_H 1

#define PACKAGE_VERSION "4.0.0"

#ifdef _MSC_VER
  #define inline __inline
  #define __attribute__(x)
  #define strcasecmp _stricmp
  #define strncasecmp _strnicmp
  #define _U_ __pragma(warning(suppress:4100))
  
  #define O_RDONLY 0x0000
  #define O_WRONLY 0x0001
  #define O_RDWR   0x0002
  #define O_CREAT  0x0100
  #define O_TRUNC  0x0200
  #define O_EXCL   0x0400
  #define O_APPEND 0x0008
  
  #define HAVE_LINGER 1
#else
  #define snprintf _snprintf
  #define inline __inline
  #define __attribute__(x)
  #define strcasecmp _stricmp
  #define strncasecmp _strnicmp
  #define _U_
#endif

#endif
