/*
 * drivers/video/sun4i/disp/OSAL/OSAL_IrqLock.c
 *
 * (C) Copyright 2007-2012
 * Allwinner Technology Co., Ltd. <www.allwinnertech.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#include "OSAL.h"
void OSAL_IrqLock(__u32 *cpu_sr)
{
    //local_irq_save(*cpu_sr);

	//unsigned long flags = *cpu_sr;
	//local_irq_save(flags);
}

void OSAL_IrqUnLock(__u32 cpu_sr)
{
	//local_irq_restore(cpu_sr);

    //unsigned long flags = cpu_sr;
    //local_irq_restore(flags);
}



