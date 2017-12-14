/**
 *@file  common.h
 *@brief Contains the various constant/macro/struct definitions, clock frequency and general functions.
*/

#ifndef COMMON_H
#define COMMON_H

///CPU frequency
#define F_CPU 8000000
#define NULL 0

#include <math.h>
#include <avr/io.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <avr/interrupt.h>
#include <avr/wdt.h>
#include <util/delay.h>


#define sbi(x,y)	(x |= (1<<y))
#define cbi(x,y)	(x &= ~(1<<y))
#define tbi(x,y)	(x ^= (1<<y))

#define TRUE 1
#define FALSE 0

#define PBEACON     7
#define PCONTROL    6
#define PGPS        5
#define PDOWNLINK   4
#define POBC        3
#define PMAG        2
#define Uplink		1
unsigned char HM_data[7];
unsigned char msg_buf[8];

#endif
