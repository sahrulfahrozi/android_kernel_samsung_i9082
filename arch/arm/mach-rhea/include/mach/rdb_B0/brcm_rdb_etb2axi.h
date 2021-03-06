/************************************************************************************************/
/*                                                                                              */
/*  Copyright 2011  Broadcom Corporation                                                        */
/*                                                                                              */
/*     Unless you and Broadcom execute a separate written software license agreement governing  */
/*     use of this software, this software is licensed to you under the terms of the GNU        */
/*     General Public License version 2 (the GPL), available at                                 */
/*                                                                                              */
/*          http://www.broadcom.com/licenses/GPLv2.php                                          */
/*                                                                                              */
/*     with the following added to such license:                                                */
/*                                                                                              */
/*     As a special exception, the copyright holders of this software give you permission to    */
/*     link this software with independent modules, and to copy and distribute the resulting    */
/*     executable under terms of your choice, provided that you also meet, for each linked      */
/*     independent module, the terms and conditions of the license of that module.              */
/*     An independent module is a module which is not derived from this software.  The special  */
/*     exception does not apply to any modifications of the software.                           */
/*                                                                                              */
/*     Notwithstanding the above, under no circumstances may you combine this software in any   */
/*     way with any other Broadcom software provided under a license other than the GPL,        */
/*     without Broadcom's express prior written consent.                                        */
/*                                                                                              */
/*     Date     : Generated on 10/28/2011 16:58:15                                             */
/*     RDB file : //RHEA/                                                                   */
/************************************************************************************************/

#ifndef __BRCM_RDB_ETB2AXI_H__
#define __BRCM_RDB_ETB2AXI_H__

#define ETB2AXI_CONFIG_OFFSET                                             0x00000000
#define ETB2AXI_CONFIG_TYPE                                               UInt32
#define ETB2AXI_CONFIG_RESERVED_MASK                                      0xFFFFFFFE
#define    ETB2AXI_CONFIG_FLUSH_SHIFT                                     0
#define    ETB2AXI_CONFIG_FLUSH_MASK                                      0x00000001

#define ETB2AXI_WRPTR_OFFSET                                              0x00000004
#define ETB2AXI_WRPTR_TYPE                                                UInt32
#define ETB2AXI_WRPTR_RESERVED_MASK                                       0x000FFFFF
#define    ETB2AXI_WRPTR_AXI_WRPTR_SHIFT                                  20
#define    ETB2AXI_WRPTR_AXI_WRPTR_MASK                                   0xFFF00000

#define ETB2AXI_STATUS_OFFSET                                             0x0000000C
#define ETB2AXI_STATUS_TYPE                                               UInt32
#define ETB2AXI_STATUS_RESERVED_MASK                                      0xFFFFFF00
#define    ETB2AXI_STATUS_RAM_SIZE_SHIFT                                  0
#define    ETB2AXI_STATUS_RAM_SIZE_MASK                                   0x000000FF

#endif /* __BRCM_RDB_ETB2AXI_H__ */


