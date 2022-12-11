/*
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef __MT_CLK_ID_H__
#define __MT_CLK_ID_H__

#if defined(CONFIG_MACH_MT6757)

#include "spm_v2/mtk_clk_id.h"

#elif defined(CONFIG_MACH_MT6799) || defined(CONFIG_MACH_MT6759)

#include "spm_v3/mtk_clk_id.h"

#endif

#endif /* __MT_CLK_ID_H__ */

