// SPDX-License-Identifier: GPL-2.0+
/*
 * Copyright (c) 2017 Intel Corporation
 */
#include <env.h>
#include <init.h>
#include <mmc.h>
#include <u-boot/md5.h>

#include <asm/cache.h>
#include <asm/pmu.h>
#include <asm/scu.h>
#include <asm/u-boot-x86.h>

int board_early_init_r(void)
{
	return 0;
}

static void assign_serial(void)
{
	return;
}

static void assign_hardware_id(void)
{
	return;
}

int board_late_init(void)
{
	return 0;
}
