/*
 * DataType.h
 *
 * Created: 28/2/2023 8:30:10 PM
 *  Author:Ahmed
 */

#ifndef COMMON_DATATYPE_H_
#define COMMON_DATATYPE_H_

typedef unsigned char 		uint8;
typedef  char 		        sint8;
typedef unsigned short int  uint16;
typedef signed short int	sint16;
typedef unsigned long int 	uint32;
typedef signed long int 	sint32;

typedef float        float32 ;
typedef double       float64 ;
typedef long double  float80 ; 

#define NULL ((void *)0)
typedef void (*CALLBACK_FUN)(void) ;

#endif /* COMMON_DATATYPE_H_ */
