/*
 *  IXCobraBotConfig.h
 *  Author: Benjamin Sergeant
 *  Copyright (c) 2020 Machine Zone, Inc. All rights reserved.
 */

#pragma once

#include <string>
#include <ixcobra/IXCobraConfig.h>

namespace ix
{
    struct CobraBotConfig
    {
        CobraConfig cobraConfig;
        std::string channel;
        std::string filter;
        std::string position = std::string("$");
        bool enableHeartbeat = true;
        int heartBeatTimeout = 60;
        int runtime = -1;
    };
} // namespace ix
