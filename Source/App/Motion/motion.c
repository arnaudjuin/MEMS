/**
 ******************************************************************************
 * @file    Source/App/Motion/motion.c
 * @author  Arthur Burnichon
 * @date    20-Oct-2017
 * @brief   Motion component implementation file
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
/* Includes ------------------------------------------------------------------*/
#include "motion.h"

#include "debug.h"

#include "hal_conf.h"
/* Private define ------------------------------------------------------------*/
/* Private types -------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/
/* Public functions ----------------------------------------------------------*/
/**
  * @brief  Motion initialization function
  * @param  None
  * @retval None
  */
void Motion_Init(void) {

}

/**
  * @brief  Processing function to detect motion event
  * @param  None
  * @retval None
  */
void Motion_Process(void) {

}

__weak void Motion_InclinationLeftRightAxisNone_CallBack(void) {
  DEBUG_PRINTF("Inclination axis left right : none");
}

__weak void Motion_InclinationLeftRightAxisLeftMedium_CallBack(void) {
  DEBUG_PRINTF("Inclination axis left right : left medium");
}

__weak void Motion_InclinationLeftRightAxisLeftHigh_CallBack(void) {
  DEBUG_PRINTF("Inclination axis left right : left high");
}

__weak void Motion_InclinationLeftRightAxisRightMedium_CallBack(void) {
  DEBUG_PRINTF("Inclination axis left right : right medium");
}

__weak void Motion_InclinationLeftRightAxisRightHigh_CallBack(void) {
  DEBUG_PRINTF("Inclination axis left right : right high");
}

__weak void Motion_InclinationBackFrontAxisNone_CallBack(void) {
  DEBUG_PRINTF("Inclination axis back front : none");
}

__weak void Motion_InclinationBackFrontAxisBackMedium_CallBack(void) {
  DEBUG_PRINTF("Inclination axis back front : back medium");
}

__weak void Motion_InclinationBackFrontAxisBackHigh_CallBack(void) {
  DEBUG_PRINTF("Inclination axis back front : back high");
}

__weak void Motion_InclinationBackFrontAxisFrontMedium_CallBack(void) {
  DEBUG_PRINTF("Inclination axis back front : front medium");
}

__weak void Motion_InclinationBackFrontAxisFrontHigh_CallBack(void) {
  DEBUG_PRINTF("Inclination axis back front : front High");
}

__weak void Motion_MoveUp_CallBack(void) {
  DEBUG_PRINTF("Motion : Move Up");
}

__weak void Motion_MoveDown_CallBack(void) {
  DEBUG_PRINTF("Motion : Move Down");
}
