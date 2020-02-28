/*
*********************************************************************************************************
*                                                uC/FS
*                                      The Embedded File System
*
*                    Copyright 2008-2020 Silicon Laboratories Inc. www.silabs.com
*
*                                 SPDX-License-Identifier: APACHE-2.0
*
*               This software is subject to an open source license and is distributed by
*                Silicon Laboratories Inc. pursuant to the terms of the Apache License,
*                    Version 2.0 available at www.apache.org/licenses/LICENSE-2.0.
*
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*
*                                      FILE SYSTEM DEVICE DRIVER
*
*                                          NOR FLASH DEVICES
*                             WINBOND W25Q SERIAL NOR PHYSICAL-LAYER DRIVER
*
* Filename : fs_dev_nor_w25q.h
* Version  : V4.08.00
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                               MODULE
*********************************************************************************************************
*/

#ifndef  FS_DEV_NOR_W25Q_PRESENT
#define  FS_DEV_NOR_W25Q_PRESENT


/*
*********************************************************************************************************
*                                               EXTERNS
*********************************************************************************************************
*/

#ifdef   FS_DEV_NOR_W25Q_MODULE
#define  FS_DEV_NOR_W25Q_EXT
#else
#define  FS_DEV_NOR_W25Q_EXT  extern
#endif


/*
*********************************************************************************************************
*                                            INCLUDE FILES
*********************************************************************************************************
*/

#include  "../../../Source/fs_dev.h"
#include  "../fs_dev_nor.h"


/*
*********************************************************************************************************
*                                               DEFINES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                             DATA TYPES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                          GLOBAL VARIABLES
*
* Note(s) : (1) The following Winbond NOR devices are supported by FSDev_NOR_W25Q API:
*
*                          Winbond  W25Q80BL/DL/DV
*
*********************************************************************************************************
*/

extern  const  FS_DEV_NOR_PHY_API  FSDev_NOR_W25Q;


/*
*********************************************************************************************************
*                                               MACRO'S
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                         FUNCTION PROTOTYPES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                        CONFIGURATION ERRORS
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                             MODULE END
*********************************************************************************************************
*/

#endif                                                          /* End of NOR MICRON NP5Q module include.               */
