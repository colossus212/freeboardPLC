/*
 * Copyright 2010,2011,2012,2013 Robert Huitema robert@42.co.nz
 *
 * This file is part of FreeBoard. (http://www.42.co.nz/freeboard)
 *
 *  FreeBoard is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.

 *  FreeBoard is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.

 *  You should have received a copy of the GNU General Public License
 *  along with FreeBoard.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef FREEBOARDCONSTANTS_H_
#define FREEBOARDCONSTANTS_H_

//debug
#define DEBUG true
//enable mux onto Serial.print
#define MUX true

//uncomment to support different GPS
#define GPS_GENERIC 0
#define GPS_EM_406A 1
#define GPS_MTEK_3329 2
//EM406A pin 3 = RX to arduino TX - pin18, RX to pin19
//GPS pins are Serial1
#define GPS_RX_PIN 19
#define GPS_TX_PIN 18

//SPI
#define MISO_PIN 50
#define M0SI_PIN 51
#define SLCK_PIN 52
#define SS_PIN 53 //should always be OUTPUT as arduino is master only
#define CS_PIN A13 //analog A13

//CAN bus controller
#define CANRX A14
#define CANTX A15

//misc output - AltSoftSerial
//mux NMEA output
#define nmeaRxPin 48
#define nmeaTxPin 46

//autopilot output
#define autopilotRxPin 34
#define autopilotTxPin 36
#define autopilotEngagePin 22


//alarm (piezo) - tx only so digital pins 22+

#define alarmPin0 24     // the number of the buzzer pin
#define alarmPin1 26     // the number of the buzzer pin
#define alarmPin2 28     // the number of the buzzer pin
#define alarmPin3 30     // the number of the buzzer pin

// need reliable efficient interrupts
//Wind speed on pin 3 - INT1 - yellow wire
 //Wind dir on pin 2 - INT0
#define windSpeedPin 3 // pin3
#define windSpeedInterrupt 1 // INT1
#define windDirPin 2 // pin 2
#define windDirInterrupt 0 // INT0
//#define logPin 20 // pin20
//#define logInterrupt 3 // INT3
//#define logPin 21 // pin21 //INT 2
#define lpgPin A12 // analogue pin A12
#define sensorPin A13 // analogue pin A11
#define level1Pin A10
#define level2Pin A11

// 0.00053995680 nautical miles per meter
//decimal lat lon is in degrees, and we have 60 NM per degree so degrees per meter
#define  LLMTRS .00000899928
#define  MINMTRS	LLMTRS*5.0

//freeboard model structs
#define CONFIG_T 'C'
#define DYNAMIC_T 'D' //all dynamically changing params, gps ,speed, wind, compass, etc
#define SIMPLE_T 'S' //basic string format
//nav values
	/** version */
#define VER  "VER"
	/** Roll degrees */
#define RLL  "RLL"
	/** Pitch degrees */
#define PCH  "PCH"
	/** Yaw degrees*/
#define YAW  "YAW"
	/** IMU Health?*/
#define IMUH  "IMUH"
	/** Mag X - roll*/
#define MGX  "MGX"
	/** Mag Y - pitch*/
#define MGY  "MGY"
	/** Mag Z - heading */
#define MGZ  "MGZ"
	/** Mag Heading */
#define MGH  "MGH"
	/** Latitude*/
#define LAT  "LAT"
	/** Longitude*/
#define LON  "LON"
	/**Altitude */
#define ALT  "ALT"
	/**CourseOverGround - true*/
#define COG  "COG"
	
	/** Speed over ground */
#define SOG  "SOG"
	/** GPS fix true/false*/
#define FIX  "FIX"
	/** satellites*/
#define SAT  "SAT"
	/** Time of week*/
#define TOW  "TOW"
	/**mag declination*/
#define DECL  "DEC"
	/**Wind speed apparent*/
#define WSA  "WSA"
	/**Wind speed true*/
#define WST  "WST"
	/**Wind dir apparent*/
#define WDA  "WDA"
	/**Wind dir true*/
#define WDT  "WDT"
	/**Wind speed units*/
#define WSU  "WSU"
/**Wind alarm speed (knots) */
#define WSK  "WSK"
	/**Wind speed alarm state */
#define WSX  "WSX"
	
	/** Autopilot state (on/off)*/
#define APX  "APX" //0off, 1on
	/** Autopilot offset from source*/
#define APT  "APT" //offset from source +/- deg
	/** Autopilot source*/
#define APS  "APS" //W wind or C compass
	/** Autopilot current Heading*/
#define APC  "APC" //0-360
	/** Autopilot rudder angle*/
#define APR  "APR" // +/- deg, +ve is rudder to starboard, vessel turns to starboard
	
	/**Anchor alarm state*/
#define AAX  "AAX"
	/**Anchor alarm radius*/
#define AAR  "AAR"
	/**Anchor distance*/
#define AAD  "AAD"
	/**Anchor alarm Lat*/
#define AAN  "AAN"
	/**Anchor alarm Lon*/
#define AAE  "AAE"

//attached device types
#define UID  "UID"
#define IMU  "IMU"
#define MEGA  "MEGA"

//Commands
#define VERSION "#VER"
#define AUTOPILOT_STATE "#APX"
#define AUTOPILOT_TARGET "#APT" //offset from source +/- deg
#define AUTOPILOT_ADJUST "#APJ" //adjust +/- deg
#define AUTOPILOT_SOURCE "#APS" //wind or compass

#define ANCHOR_ALARM_STATE "#AAX"
#define ANCHOR_ALARM_RADIUS "#AAR"
#define ANCHOR_ALARM_ADJUST "#AAJ"
#define ANCHOR_ALARM_LAT "#AAN"
#define ANCHOR_ALARM_LON "#AAE"

#define WIND_SPEED_ALARM_STATE "#WSX"
#define WIND_ALARM_KNOTS "#WSK"
#define WIND_ZERO_ADJUST "#WZJ"

#define GPS_MODEL "#GPS"
#define SERIAL_BAUD0 "#SB0"
#define SERIAL_BAUD1 "#SB1"
#define SERIAL_BAUD2 "#SB2"
#define SERIAL_BAUD3 "#SB3"
#define SEATALK "#STK"

#define CONFIG "#CFG"
#endif
