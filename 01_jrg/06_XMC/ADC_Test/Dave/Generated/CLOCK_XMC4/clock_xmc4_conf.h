/*********************************************************************************************************************
* DAVE APP Name : CLOCK_XMC4       APP Version: 4.0.24
*
* NOTE:
* This file is generated by DAVE. Any manual modification done to this file will be lost when the code is regenerated.
*********************************************************************************************************************/

/**
 * @cond
 ***********************************************************************************************************************
 *
 * Copyright (c) 2015-2020, Infineon Technologies AG
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,are permitted provided that the
 * following conditions are met:
 *
 *   Redistributions of source code must retain the above copyright notice, this list of conditions and the  following
 *   disclaimer.
 *
 *   Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following
 *   disclaimer in the documentation and/or other materials provided with the distribution.
 *
 *   Neither the name of the copyright holders nor the names of its contributors may be used to endorse or promote
 *   products derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE  FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY,OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT  OF THE
 * USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * To improve the quality of the software, users are encouraged to share modifications, enhancements or bug fixes
 * with Infineon Technologies AG (dave@infineon.com).
 ***********************************************************************************************************************
 *
 * Change History
 * --------------
 * 2015-02-16:
 *     - Initial version for DAVEv4 <BR>
 * 2015-05-08:
 *     - Explicit braces added for global macros <BR>
 * 2015-09-22:
 *     - Macros are added for traps. <BR>
 * 2015-12-24:
 *     - Macros related to Traps are removed. <BR>
 *     - Macros related to clock source and clock divider settings are added. <BR>
 * 2016-05-25:
 *     - Macros is added for Ethernet.<BR>
 * 2016-07-08:
 *     - Fixed incorrect case for an included header.<br>
 *
 * @endcond
 *
 */
#ifndef CLOCK_XMC4_CONF_H
#define CLOCK_XMC4_CONF_H

/***********************************************************************************************************************
 * HEADER FILES
 **********************************************************************************************************************/

/***********************************************************************************************************************
* MACROS
***********************************************************************************************************************/

#define CLOCK_XMC4_MAJOR_VERSION (4U)
#define CLOCK_XMC4_MINOR_VERSION (0U)
#define CLOCK_XMC4_PATCH_VERSION (24U)

/* High precision external oscillator enabled */
#define CLOCK_XMC4_OSCHP_ENABLED
/* High precision external oscillator frequency */
#define CLOCK_XMC4_OSCHP_FREQUENCY (12000000U)
/* Capture/Compare unit clock enabled */
#define CLOCK_XMC4_CCUCLK_ENABLED
/* USB clock enabled */
#define CLOCK_XMC4_USBCLK_ENABLED
/* Watchdog clock enabled */
#define CLOCK_XMC4_WDTCLK_ENABLED 
/* EBU clock enabled */
#define CLOCK_XMC4_EBUCLK_ENABLED
/* Ethernet clock enabled */
#define CLOCK_XMC4_ETHCLK_ENABLED
#endif /* End of CLOCK_XMC4_CONF_H */
