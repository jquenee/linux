/*
 *  Copyright (C) 2009-2010, Lars-Peter Clausen <lars@metafoo.de>
 *  JZ4740 platform device definitions
 *
 *  This program is free software; you can redistribute it and/or modify it
 *  under  the terms of the GNU General	 Public License as published by the
 *  Free Software Foundation;  either version 2 of the License, or (at your
 *  option) any later version.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */


#ifndef __JZ4740_PLATFORM_H
#define __JZ4740_PLATFORM_H

#include <linux/platform_device.h>

extern struct platform_device jz4740_udc_device;
extern struct platform_device jz4740_udc_xceiv_device;
extern struct platform_device jz4740_mmc_device;
extern struct platform_device jz4740_i2c_device;
extern struct platform_device jz4740_framebuffer_device;
extern struct platform_device jz4740_i2s_device;
extern struct platform_device jz4740_pcm_device;
extern struct platform_device jz4740_codec_device;
extern struct platform_device jz4740_adc_device;
extern struct platform_device jz4740_dma_device;

#endif
