/*
 *  Copyright (c) 2020, The OpenThread Authors.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *  1. Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *  3. Neither the name of the copyright holder nor the
 *     names of its contributors may be used to endorse or promote products
 *     derived from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 *  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef OPENTHREAD_CORE_TORANJ_CONFIG_SIMULATION_H_
#define OPENTHREAD_CORE_TORANJ_CONFIG_SIMULATION_H_

/**
 * This header file defines the OpenThread core configuration for toranj with simulation platform.
 *
 */

// Include the common configuration for all platforms.
#include "openthread-core-toranj-config.h"

#if OPENTHREAD_RADIO

#define OPENTHREAD_CONFIG_PLATFORM_INFO "SIMULATION-RCP-toranj"
#else
#define OPENTHREAD_CONFIG_PLATFORM_INFO "SIMULATION-toranj"

#endif

#define OPENTHREAD_CONFIG_COAP_API_ENABLE 1

#define OPENTHREAD_CONFIG_COAP_SECURE_API_ENABLE 1

#define OPENTHREAD_CONFIG_PLATFORM_USEC_TIMER_ENABLE 0

#define OPENTHREAD_CONFIG_PLATFORM_FLASH_API_ENABLE 1

#define OPENTHREAD_CONFIG_LOG_OUTPUT OPENTHREAD_CONFIG_LOG_OUTPUT_PLATFORM_DEFINED

#define OPENTHREAD_CONFIG_CLI_LOG_INPUT_OUTPUT_ENABLE 1

#define OPENTHREAD_CONFIG_CLI_LOG_INPUT_OUTPUT_LEVEL OT_LOG_LEVEL_INFO

#define OPENTHREAD_CONFIG_DNS_DSO_ENABLE 1

#define OPENTHREAD_CONFIG_SRP_SERVER_ADVERTISING_PROXY_ENABLE 1

#define OPENTHREAD_CONFIG_PLATFORM_DNSSD_ENABLE 1

#define OPENTHREAD_CONFIG_HEAP_EXTERNAL_ENABLE 1

#define OPENTHREAD_CONFIG_BORDER_ROUTING_USE_HEAP_ENABLE 1

#define OPENTHREAD_CONFIG_BACKBONE_ROUTER_ENABLE 1

#define OPENTHREAD_CONFIG_RADIO_STATS_ENABLE 0

#endif /* OPENTHREAD_CORE_TORANJ_CONFIG_SIMULATION_H_ */
