/* 
 * File:   thermostat.h
 * Author: Jeremy
 *
 * Created on November 8, 2012, 8:23 PM
 */

#ifndef __THERMOSTAT_H
#define	__THERMOSTAT_H

#define ADC_TEMP_PIN 46


extern void safetyOverrideCheck();
//extern _Bool processRequest();
extern int processRequest();
extern void initThermostat();




#endif	/* THERMOSTAT_H */
