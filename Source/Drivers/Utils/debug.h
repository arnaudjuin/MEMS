/**
 ******************************************************************************
 * @file    Source/Drivers/Utils/debug.h
 * @author  Arthur Burnichon
 * @date    20-Oct-2017
 * @brief   Debug prinft module : this module use semihosting on all STM MCU.
 *          On Cortex M4 (STM line F4xx) the SWO printf can be use to improve
 *          debug performance.
 ******************************************************************************
 * @attention
 *
 * &copy; COPYRIGHT(c) 2017 Arthur Burnichon - arthur@meetluseed.com
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *   1. Redistributions of source code must retain the above copyright notice,
 *      this list of conditions and the following disclaimer.
 *   2. Redistributions in binary form must reproduce the above copyright notice,
 *      this list of conditions and the following disclaimer in the documentation
 *      and/or other materials provided with the distribution.
 *   3. Neither the name of STMicroelectronics nor the names of its contributors
 *      may be used to endorse or promote products derived from this software
 *      without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 ******************************************************************************
 */
#ifndef UTILS_DEBUG_H_
#define UTILS_DEBUG_H_

/* Includes ------------------------------------------------------------------*/
/* Exported define -----------------------------------------------------------*/
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
#ifdef DEBUG_SEMIHOSTING
  #define DEBUG_INIT initialise_monitor_handles
  #define DEBUG_PRINTF printf
#elif defined(DEBUG_SWO)
  #define DEBUG_INIT(...)
  #define DEBUG_PRINTF printf
#else
  #define DEBUG_INIT(...)
  #define DEBUG_PRINTF(...)
#endif

/* Exported variables --------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
#if defined(DEBUG_SEMIHOSTING)
  extern void initialise_monitor_handles(void);
#endif

#if defined(DEBUG_SWO)
  int _write(int file, char *ptr, int len);
#endif

#endif // UTILS_DEBUG_H_

