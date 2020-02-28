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
*                                 SST SST39 NOR PHYSICAL-LAYER DRIVER
*
* Filename : fs_dev_nor_sst39.h
* Version  : V4.08.00
*********************************************************************************************************
* Note(s)  : (1) Supports SST's SST39 Multi-Purpose Flash memories, as described in various
*                datasheets at SST (http://www.sst.com).  This driver has been tested with or should
*                work with the following devices :
*
*                    SST39LF200A/VF200A
*                    SST39LF400A/VF400A
*                    SST39LF800A/VF800A
*
*                    SST39VF1601/WF1601
*                    SST39VF3201        [*]
*                    SST39VF3202
*                    SST39VF6401
*                    SST39VF6402
*
*                    SST39SF010A
*                    SST39SF020A
*                    SST39SF040
*
*                    SST39WF1681
*                    SST39WF1682
*
*                    SST39WF800A
*                    SST39WF800B
*
*                 SST39LF512/VF512
*                    SST39LF010/VF010
*                    SST39LF020/VF020
*                    SST39LF040/VF040
*
*                          [*} Devices tested
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                               MODULE
*********************************************************************************************************
*/

#ifndef  FS_DEV_NOR_SST39_PRESENT
#define  FS_DEV_NOR_SST39_PRESENT


/*
*********************************************************************************************************
*                                               EXTERNS
*********************************************************************************************************
*/

#ifdef   FS_DEV_NOR_SST39_MODULE
#define  FS_DEV_NOR_SST39_EXT
#else
#define  FS_DEV_NOR_SST39_EXT  extern
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
*********************************************************************************************************
*/

extern  const  FS_DEV_NOR_PHY_API  FSDev_NOR_SST39_1x16;


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

#endif                                                          /* End of NOR SST39 module include.                     */
