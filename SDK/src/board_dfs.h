/**
 * @file board_dfs.h
 * @author Scott CJX (scottcjx.w@gmail.com)
 * @brief
 * @version 0.0.1
 * @date 10-11-2023
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef BOARD_DFS_H_
#define BOARD_DFS_H_

#include <Arduino.h>
#include <stdint.h>
#include <SPI.h>
#include <HardwareSerial.h>

// #define BOARD_1JOB_LITE

namespace BoardDef
{
    #ifdef BOARD_1JOB_LITE
    const uint8_t ANA_1         = PA1;
    const uint8_t DO_SSR        = PB1;
    
    const uint8_t CAN_CS1       = PB3;
    const uint8_t CAN_INT       = PB5;

    const uint8_t SD_CS         = PA8;
    const uint8_t SD_DET        = PA4;

    #define UART_0              (HardwareSerial) {PB6, PB7};

    //                          (arduino::MbedSPI) {miso, mosi, sck}
    #define SPI_1               (arduino::MbedSPI) {PA7, PA6, PA5}
    #define SPI_2               (arduino::MbedSPI) {PB2, PA10, PB8}
    #endif
}

#endif /* !BOARD_DFS_H_ */
