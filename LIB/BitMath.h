/*
 * BitMath.h
 *
 * Created: 28/2/2023 9:12:42 PM
 *  Author:Ahmed
 */ 


#ifndef BITMATH_H_
#define BITMATH_H_


#define set_bit(Reg,bit_no)				Reg |=		 (1<<bit_no)
#define clr_bit(Reg,bit_no)				Reg &=		~(1<<bit_no)
#define toggle_bit(Reg,bit_no)			Reg ^=		 (1<<bit_no)

#define get_bit(Reg,bit_no)				(Reg&(1<<bit_no))

#define set_bit_mask(Reg,bit_mask)		Reg |=		 (bit_mask)
#define clr_bit_mask(Reg,bit_mask)		Reg &=		~(bit_mask)
#define toggle_bit_mask(Reg,bit_mask)	Reg ^=		 (bit_mask)

#define set_bits(Reg)					Reg  =		 (0xFF)
#define clr_bits(Reg)					Reg  =		 (0x00)
#define toggle_bits(Reg,bit_mask)		Reg ^=		 (0xFF)


#endif /* BITMATH_H_ */