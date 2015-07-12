/* linux/arch/arm/mach-exynos4/include/mach/memory.h
 *
 * Copyright (c) 2010-2011 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * EXYNOS4 - Memory definitions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_MEMORY_H
#define __ASM_ARCH_MEMORY_H __FILE__

#define PLAT_PHYS_OFFSET		UL(CONFIG_EXYNOS_MEM_BASE)

/* Maximum of 256MiB in one bank */
#define MAX_PHYSMEM_BITS	32
#define SECTION_SIZE_BITS	28

#define ARCH_HAS_SG_CHAIN

#if defined(CONFIG_KEXEC_HARDBOOT)
#define KEXEC_HB_PAGE_ADDR		UL(0xbfd00000)
#endif

#endif /* __ASM_ARCH_MEMORY_H */
