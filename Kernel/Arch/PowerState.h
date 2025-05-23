/*
 * Copyright (c) 2023, Liav A. <liavalb@hotmail.co.il>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <AK/Types.h>

namespace Kernel {

enum class PowerOffOrRebootReason {
    NoReason,
    SystemFailure,
};

void arch_specific_reboot(PowerOffOrRebootReason);
void arch_specific_poweroff(PowerOffOrRebootReason);

}
