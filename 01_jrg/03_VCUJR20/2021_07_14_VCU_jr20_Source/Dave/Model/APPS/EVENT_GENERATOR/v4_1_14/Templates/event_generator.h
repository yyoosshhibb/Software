/**
 * @file event_generator.h
 * @date 2015-12-18
 *
 * NOTE:
 * This file is generated by DAVE. Any manual modification done to this file will be lost when the code is regenerated.
 *
 * @cond
 ***********************************************************************************************************************
 * EVENT_GENERATOR v4.1.14 - Configures the properties of ERU_OGU peripheral instance.
 *
 * Copyright (c) 2015, Infineon Technologies AG
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,are permitted provided that the
 * following conditions are met:
 *
 *   Redistributions of source code must retain the above copyright notice, this list of conditions and the  following
 *   disclaimer.
 *
 *   Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the
 *   following disclaimer in the documentation and/or other materials provided with the distribution.
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
 *
 * 2015-02-16:
 *     - Initial version<br>
 *
 * 2015-05-08:
 *     - c++ guard is applied to APIs section<br>
 *     - Comments updated<br>
 *     - Assertion are added to inline APIs to check for NULL handle<br>
 *
 * 2015-06-29:
 *     - Conditional inclusion of xmc_scu.h file, if event is promoted as NMI<br>
 *     - Added "nmi_eru_msk" in APP config structure to generate the mask for NMI enabling<br>
 * @endcond
 *
 */

#ifndef EVENT_GENERATOR_H
#define EVENT_GENERATOR_H

/***********************************************************************************************************************
 * HEADER FILES
 **********************************************************************************************************************/
#include "xmc_eru.h"
#include "event_generator_conf.h"
#if (EVENT_GENERATOR_NMI_SUPPORTED == 1U)
#include "xmc_scu.h"
#endif
#include <DAVE_Common.h>

/**********************************************************************************************************************
 * MACROS
 **********************************************************************************************************************/
#if (!((XMC_LIB_MAJOR_VERSION == 2U) && \
       (XMC_LIB_MINOR_VERSION >= 0U) && \
       (XMC_LIB_PATCH_VERSION >= 0U)))
#error "EVENT_GENERATOR requires XMC Peripheral Library v2.0.0 or higher"
#endif

 /**********************************************************************************************************************
 * ENUMS
 **********************************************************************************************************************/
/**
 * @ingroup EVENT_GENERATOR_enumerations
 * @{
 */

/**
 *  @brief Initialization status.
 */
typedef enum EVENT_GENERATOR_STATUS
{
  EVENT_GENERATOR_STATUS_SUCCESS = 0U, /**< Status success */
  EVENT_GENERATOR_STATUS_FAILURE  /**< Status failure */
} EVENT_GENERATOR_STATUS_t;
/**
* @}
*/
/***********************************************************************************************************************
* DATA STRUCTURES
***********************************************************************************************************************/

/**
 * @ingroup EVENT_GENERATOR_datastructures
 * @{
 */

/**
 * @brief This structure will hold the APP configuration parameters
 */
typedef struct EVENT_GENERATOR
{
  XMC_ERU_t* const eru; /**< ERU module assigned */
  const XMC_ERU_OGU_CONFIG_t *const config; /**< reference to hardware configuration */
#if (UC_FAMILY == XMC4)
  const uint32_t nmi_eru_msk; /**< Mask to enable the NMI feature */
#endif
  const uint8_t channel; /**< ERU channel assigned(0-3) */
  bool init_status; /**< This parameter indicates the initialized state of each instance */
} EVENT_GENERATOR_t;

/**
* @}
*/

/***********************************************************************************************************************
* API Prototypes
***********************************************************************************************************************/
#ifdef __cplusplus
extern "C" {
#endif
/**
 * @ingroup EVENT_GENERATOR_apidoc
 * @{
 */

/**
 * @brief Get EVENT_GENERATOR APP version
 * @return DAVE_APP_VERSION_t APP version information (major, minor and patch number)
 * <BR>
 * \par<b>Description:</b><br>
 * The function can be used to check application software compatibility with a
 * specific version of the APP.
 *
 * Example Usage:
 * @code
 * #include <DAVE.h>
 * int main(void)
 * {
 *   DAVE_STATUS_t status;
 *   DAVE_APP_VERSION_t app_version;
 *
 *   status = DAVE_Init();	// EVENT_GENERATOR_Init() is called from DAVE_Init()
 *
 *   app_version = EVENT_GENERATOR_GetAppVersion();
 *
 *   if (app_version.major != 4U)
 *   {
 *     // Probably, not the right version.
 *   }
 *
 *   while(1U)
 *   {
 *   }
 *   return 1;
 * }
 * @endcode<BR>
 */
DAVE_APP_VERSION_t EVENT_GENERATOR_GetAppVersion(void);

/**
 * @brief Initializes a EVENT_GENERATOR APP instance (ERSx+ETLx where x= [0..3])
 *        with generated configuration.
 * @param handle pointer to the EVENT_GENERATOR APP configuration.
 * @return EVENT_GENERATOR_STATUS_t\n
 *         EVENT_GENERATOR_STATUS_SUCCESS  : if initialization is successful\n
 *         EVENT_GENERATOR_STATUS_FAILURE  : if initialization is failed
 *
 * \par<b>Description:</b><br>
 * <ul>
 * <li>Enable the clock for the ERU module and invoke the LLD Init API with generated configuration handle.</li>
 * <li>Set the gating scheme for service request generation.</li>
 * </ul>
 *
 * Example Usage:
 * 
 * @code
 * #include <DAVE.h>
 * int main(void)
 * {
 *  // ... Initializes Apps configurations ...
 *  DAVE_Init(); //EVENT_GENERATOR_Init(&EVENT_GENERATOR_0) will be called from DAVE_Init()
 *  while(1U)
 *  {
 *  }
 *  return (1U);
 * }
 *
 * @endcode<BR>
 */
EVENT_GENERATOR_STATUS_t EVENT_GENERATOR_Init(EVENT_GENERATOR_t *const handle);


/**
 * @brief return the pattern detection result.
 * @param handle pointer to the EVENT_GENERATOR APP configuration.
 * @retval uint32_t pattern detection status
 *            <BR>
 *
 * \par<b>Description:</b><br>
 * EVENT_GENERATOR_GetPatternDetectionStatus() can be used to find out that, all the input signals configured for
 * the pattern match are set or not.
 * 
 * Example Usage:
 * 
 * @code
 * #include <DAVE.h>
 * int main(void)
 * {
 *  uint32_t pattern_status;
 *  // ... Initializes Apps configurations ...
 *  DAVE_Init(); //EVENT_GENERATOR_Init(&EVENT_GENERATOR_0) will be called from DAVE_Init()
 *  
 *  pattern_status = EVENT_GENERATOR_GetPatternDetectionStatus(&EVENT_GENERATOR_0);
 *  while(1U)
 *  {
 *  }
 *  return (1U);
 * }
 * 
 * @endcode
 */
__STATIC_INLINE uint32_t EVENT_GENERATOR_GetPatternDetectionStatus(const EVENT_GENERATOR_t *const handle)
{
  /* Checking for null handle */
  XMC_ASSERT("EVENT_GENERATOR_GetPatternDetectionStatus:handle NULL" , (handle != NULL));
  return XMC_ERU_OGU_GetPatternDetectionStatus(handle->eru, handle->channel);
}

/**
 *@}
 */

#include "event_generator_extern.h"

#ifdef __cplusplus
}
#endif

#endif /* EVENT_GENERATOR_H */
