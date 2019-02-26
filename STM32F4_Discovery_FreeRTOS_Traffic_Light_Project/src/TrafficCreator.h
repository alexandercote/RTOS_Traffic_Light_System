/*
 * TrafficCreator.h
 *
 *  Created on: Feb 25, 2019
 *      Author: brendanb
 */

#ifndef TRAFFICCREATOR_H_
#define TRAFFICCREATOR_H_

/* Standard includes. */
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "stm32f4_discovery.h"

/* Kernel includes. */
#include "stm32f4xx.h"
#include "../FreeRTOS_Source/include/FreeRTOS.h"
#include "../FreeRTOS_Source/include/queue.h"
#include "../FreeRTOS_Source/include/semphr.h"
#include "../FreeRTOS_Source/include/task.h"
#include "../FreeRTOS_Source/include/timers.h"

#include "STMRTOSconfig.h"

void TrafficCreatorTask( void *pvParameters );

#endif /* TRAFFICCREATOR_H_ */


