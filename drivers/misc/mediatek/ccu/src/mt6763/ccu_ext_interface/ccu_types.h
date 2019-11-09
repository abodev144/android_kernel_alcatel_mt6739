
#ifndef CCU_TYPES_H
#define CCU_TYPES_H

/*******************************************************************************/
/* typedef unsigned char   BOOLEAN;    // uint8_t*/
typedef unsigned char MUINT8;
typedef unsigned short MUINT16;
typedef unsigned int MUINT32;
/*typedef unsigned long  MUINT64;*/
/**/
typedef signed char MINT8;
typedef signed short MINT16;
typedef signed int MINT32;
/*typedef signed long    MINT64;*/
/**/
typedef float MFLOAT;
typedef double MDOUBLE;
/**/
typedef void MVOID;
typedef int MBOOL;

#ifndef MTRUE
#define MTRUE 1
#endif

#ifndef MFALSE
#define MFALSE 0
#endif

#ifndef MNULL
#define MNULL 0
#endif

/* #define CCU_CODE_SLIM*/
/* typedef unsigned char   BOOLEAN;    // uint8_t*/
typedef unsigned char U8;	/* uint8_t*/
typedef unsigned short U16;	/* uint16_t*/
typedef unsigned int U32;	/* uint32_t*/
/*typedef unsigned long long  U64;    // uint64_t*/
typedef char I8;		/* int8_t*/
typedef short I16;		/* int16_t*/
typedef int I32;		/* int32_t*/
/*typedef long long           I64;    // int64_t*/

#ifndef NULL
#define NULL                0
#endif				/* NULL*/

#define ERR_NONE                    (0)
#define ERR_INVALID                 (-1)
#define ERR_TIMEOUT                 (-2)


#endif				/* CCU_TYPES_H*/

