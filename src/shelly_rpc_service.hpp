/*
 * Copyright (c) Shelly-HomeKit Contributors
 * All rights reserved
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "shelly_common.hpp"

#include "HAP.h"

extern "C" struct mg_rpc_request_info;

namespace shelly {

bool shelly_rpc_service_init(HAPAccessoryServerRef *server,
                             HAPPlatformKeyValueStoreRef kvs,
                             HAPPlatformTCPStreamManagerRef tcpm);

void SendStatusResp(struct mg_rpc_request_info *ri, const Status &st);

void ReportRPCRequest(struct mg_rpc_request_info *ri);

}  // namespace shelly
