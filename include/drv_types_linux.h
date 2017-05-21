/******************************************************************************
 *
 * Copyright(c) 2007 - 2011 Realtek Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA
 *
 *
 ******************************************************************************/
#ifndef __DRV_TYPES_LINUX_H__
#define __DRV_TYPES_LINUX_H__

#if (LINUX_VERSION_CODE < KERNEL_VERSION(4, 7, 0))
#define nl80211_band		ieee80211_band
#define	NL80211_BAND_2GHZ	IEEE80211_BAND_2GHZ
#define	NL80211_BAND_5GHZ	IEEE80211_BAND_5GHZ
#define NUM_NL80211_BANDS	IEEE80211_NUM_BANDS
#endif

#endif
