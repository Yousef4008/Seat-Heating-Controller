/*
 * typeDefs.h
 *
 *  Created on: May 10, 2024
 *      Author: Youssif Hossam
 */

#ifndef TYPEDEFS_H_
#define TYPEDEFS_H_

typedef enum HeatingLevelType {
    HEATING_OFF, HEATING_LOW, HEATING_MEDIUM, HEATING_HIGH
} HeatingLevelType;

typedef enum HeaterStateType {
    HEATER_OFF, HEATER_LOW, HEATER_MEDIUM, HEATER_HIGH
} HeaterStateType;

typedef struct {
    uint8_t ui8Seat1TempValueC;
    HeatingLevelType Seat1heatingLevel;
    HeaterStateType Seat1heaterState;

    uint8_t ui8Seat2TempValueC;
    HeatingLevelType Seat2heatingLevel;
    HeaterStateType Seat2heaterState;
}SystemStateStructureType;



#endif /* TYPEDEFS_H_ */
