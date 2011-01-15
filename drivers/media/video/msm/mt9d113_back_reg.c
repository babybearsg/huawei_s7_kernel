/* Copyright (c) 2009, Code Aurora Forum. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of Code Aurora Forum nor
 *       the names of its contributors may be used to endorse or promote
 *       products derived from this software without specific prior written
 *       permission.
 *
 * Alternatively, provided that this notice is retained in full, this software
 * may be relicensed by the recipient under the terms of the GNU General Public
 * License version 2 ("GPL") and only version 2, in which case the provisions of
 * the GPL apply INSTEAD OF those given above.  If the recipient relicenses the
 * software under the GPL, then the identification text in the MODULE_LICENSE
 * macro must be changed to reflect "GPLv2" instead of "Dual BSD/GPL".  Once a
 * recipient changes the license terms to the GPL, subsequent recipients shall
 * not relicense under alternate licensing terms, including the BSD or dual
 * BSD/GPL terms.  In addition, the following license statement immediately
 * below and between the words START and END shall also then apply when this
 * software is relicensed under the GPL:
 *
 * START
 *
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License version 2 and only version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * END
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

#include "mt9d113_back.h"

#define FEATURE_CAMERA_AUTO
struct register_address_value_pair const
preview_snapshot_mode_reg_settings_init_back[] = {


		/*{0x001A, 0x0050},	// RESET_AND_MISC_CONTROL//added to mt9d113.c  mt9d113_sensor_init_probe function
		{ 0, 10        },
		{0x0014, 0x21F9},	// PLL_CONTROL
	
		//30fps 800*600 56M
		{0x0010, 0x011c},	// PLL_DIVIDERS
		{0x0012, 0x1ffb},	// PLL_P_DIVIDERS
		{0x0014, 0x21FB},	// PLL_CONTROL
		{0x0014, 0x20FB},	// PLL_CONTROL
		{ 0,10         },
		{0x0014, 0x20FA},	// PLL_CONTROL
		{0x0018, 0x402D},	// STANDBY_CONTROL
		{0x0018, 0x402C},	// STANDBY_CONTROL
		{ 0,10         },
*/

#if 0
		 //24M 56M 800*600 30fps
		{0x98C, 0x2703},	//Output Width (A)
		{0x990, 0x0320},	//      = 800
		{0x98C, 0x2705},	//Output Height (A)
		{0x990, 0x0258},	//      = 600
		{0x98C, 0x2707},	//Output Width (B)
		{0x990, 0x0640},	//      = 1600
		{0x98C, 0x2709},	//Output Height (B)
		{0x990, 0x04B0},	//      = 1200
		{0x98C, 0x270D},	//Row Start (A)
		{0x990, 0x000	},  //      = 0
		{0x98C, 0x270F},	//Column Start (A)
		{0x990, 0x000	},  //      = 0
		{0x98C, 0x2711},	//Row End (A)
		{0x990, 0x4BD	},  //      = 1213
		{0x98C, 0x2713},	//Column End (A)
		{0x990, 0x64D	},  //      = 1613
		{0x98C, 0x2715},	//Row Speed (A)
		{0x990, 0x0111},	//      = 273
		{0x98C, 0x2717},	//Read Mode (A)
		{0x990, 0x046C},	//      = 1132
		{0x98C, 0x2719},	//sensor_fine_correction (A)
		{0x990, 0x005A},	//      = 90
		{0x98C, 0x271B},	//sensor_fine_IT_min (A)
		{0x990, 0x01BE},	//      = 446
		{0x98C, 0x271D},	//sensor_fine_IT_max_margin (A)
		{0x990, 0x0131},	//      = 305
		{0x98C, 0x271F},	//Frame Lines (A)
		{0x990, 0x02B3},	//      = 691
		{0x98C, 0x2721},	//Line Length (A)
		{0x990, 0x0546},	//      = 1350
		{0x98C, 0x2723},	//Row Start (B)
		{0x990, 0x004	},  //      = 4
		{0x98C, 0x2725},	//Column Start (B)
		{0x990, 0x004	},  //      = 4
		{0x98C, 0x2727},	//Row End (B)
		{0x990, 0x4BB	},  //      = 1211
		{0x98C, 0x2729},	//Column End (B)
		{0x990, 0x64B	},  //      = 1611
		{0x98C, 0x272B},	//Row Speed (B)
		{0x990, 0x0111},	//      = 273
		{0x98C, 0x272D},	//Read Mode (B)
		{0x990, 0x0024},	//      = 36
		{0x98C, 0x272F},	//sensor_fine_correction (B)
		{0x990, 0x003A},	//      = 58
		{0x98C, 0x2731},	//sensor_fine_IT_min (B)
		{0x990, 0x00F6},	//      = 246
		{0x98C, 0x2733},	//sensor_fine_IT_max_margin (B)
		{0x990, 0x008B},	//      = 139
		{0x98C, 0x2735},	//Frame Lines (B)
		{0x990, 0x050D},	//      = 1293
		{0x98C, 0x2737},	//Line Length (B)
		{0x990, 0x0818},	//      = 2072
		{0x98C, 0x2739},	//Crop_X0 (A)
		{0x990, 0x0000},	//      = 0
		{0x98C, 0x273B},	//Crop_X1 (A)
		{0x990, 0x031F},	//      = 799
		{0x98C, 0x273D},	//Crop_Y0 (A)
		{0x990, 0x0000},	//      = 0
		{0x98C, 0x273F},	//Crop_Y1 (A)
		{0x990, 0x0257},	//      = 599
		{0x98C, 0x2747},	//Crop_X0 (B)
		{0x990, 0x0000},	//      = 0
		{0x98C, 0x2749},	//Crop_X1 (B)
		{0x990, 0x063F},	//      = 1599
		{0x98C, 0x274B},	//Crop_Y0 (B)
		{0x990, 0x0000},	//      = 0
		{0x98C, 0x274D},	//Crop_Y1 (B)
		{0x990, 0x04AF},	//      = 1199
		{0x98C, 0x222D},	//R9 Step
		{0x990, 0x008D},	//      = 141
		//Flick start
		{0x98C, 0xA408},	//search_f1_50
		{0x990, 0x21	},  //      = 33
		{0x98C, 0xA409},	//search_f2_50
		{0x990, 0x24	},  //      = 36
		{0x98C, 0xA40A},	//search_f1_60
		{0x990, 0x28	},  //      = 40
		{0x98C, 0xA40B},	//search_f2_60
		{0x990, 0x2B	},  //      = 43
		{0x98C, 0x2411},	//R9_Step_60 (A)
		{0x990, 0x008D},	//      = 141
		{0x98C, 0x2413},	//R9_Step_50 (A)
		{0x990, 0x00A9},	//      = 169
		{0x98C, 0x2415},	//R9_Step_60 (B)
		{0x990, 0x0064},	//      = 100
		{0x98C, 0x2417},	//R9_Step_50 (B)
		{0x990, 0x0078},	//      = 120
		{0x98C, 0xA404},	//FD Mode
		{0x990, 0x10	},  //      = 16
		{0x98C, 0xA40D},	//Stat_min
		{0x990, 0x02	},  //      = 2
		{0x98C, 0xA40E},	//Stat_max
		{0x990, 0x02	},  //      = 2
		{0x98C, 0xA410},	//Min_amplitude
		{0x990, 0x02	},  //      = 2
              //Flick end
#endif
#if 0//MCLK 48M PCLK bypass
{0x0014, 0x21F9},	//PLL Control: BYPASS PLL = 8697
//BITFIELD = 0x001A, 0x0008, 0x0000	//PLL Reset Control: OUTPUT, bits 0x0008 = 0
//BITFIELD = 0x0018, 0x0001, 0x0000	//PLL Standby: Out of Standby, bits 0x0001 = 0
{0x321C,0x0003},	//By Pass TxFIFO = 3
{0x98C, 0x2703},	//Output Width (A)
{0x990, 0x0320},	//      = 800
{0x98C, 0x2705},	//Output Height (A)
{0x990, 0x0258},	//      = 600
{0x98C, 0x2707},	//Output Width (B)
{0x990, 0x0640},	//      = 1600
{0x98C, 0x2709},	//Output Height (B)
{0x990, 0x04B0},	//      = 1200
{0x98C, 0x270D},	//Row Start (A)
{0x990, 0x0000},	//      = 0
{0x98C, 0x270F},	//Column Start (A)
{0x990, 0x0000},	//      = 0
{0x98C, 0x2711},	//Row End (A)
{0x990, 0x04BD},	//      = 1213
{0x98C, 0x2713},	//Column End (A)
{0x990, 0x064D},	//      = 1613
{0x98C, 0x2715},	//Row Speed (A)
{0x990, 0x0111},	//      = 273
{0x98C, 0x2717},	//Read Mode (A)
{0x990, 0x046C},	//      = 1132
{0x98C, 0x2719},	//sensor_fine_correction (A)
{0x990, 0x005A},	//      = 90
{0x98C, 0x271B},	//sensor_fine_IT_min (A)
{0x990, 0x01BE},	//      = 446
{0x98C, 0x271D},	//sensor_fine_IT_max_margin (A)
{0x990, 0x0131},	//      = 305
{0x98C, 0x271F},	//Frame Lines (A)
{0x990, 0x02B3},	//      = 691
{0x98C, 0x2721},	//Line Length (A)
{0x990, 0x0589},	//      = 1417
{0x98C, 0x2723},	//Row Start (B)
{0x990, 0x0004},	//      = 4
{0x98C, 0x2725},	//Column Start (B)
{0x990, 0x0004},	//      = 4
{0x98C, 0x2727},	//Row End (B)
{0x990, 0x04BB},	//      = 1211
{0x98C, 0x2729},	//Column End (B)
{0x990, 0x064B},	//      = 1611
{0x98C, 0x272B},	//Row Speed (B)
{0x990, 0x0111},	//      = 273
{0x98C, 0x272D},	//Read Mode (B)
{0x990, 0x0024},	//      = 36
{0x98C, 0x272F},	//sensor_fine_correction (B)
{0x990, 0x003A},	//      = 58
{0x98C, 0x2731},	//sensor_fine_IT_min (B)
{0x990, 0x00F6},	//      = 246
{0x98C, 0x2733},	//sensor_fine_IT_max_margin (B)
{0x990, 0x008B},	//      = 139
{0x98C, 0x2735},	//Frame Lines (B)
{0x990, 0x050D},	//      = 1293
{0x98C, 0x2737},	//Line Length (B)
{0x990, 0x0894},	//      = 2196
{0x98C, 0x2739},	//Crop_X0 (A)
{0x990, 0x0000},	//      = 0
{0x98C, 0x273B},	//Crop_X1 (A)
{0x990, 0x031F},	//      = 799
{0x98C, 0x273D},	//Crop_Y0 (A)
{0x990, 0x0000},	//      = 0
{0x98C, 0x273F},	//Crop_Y1 (A)
{0x990, 0x0257},	//      = 599
{0x98C, 0x2747},	//Crop_X0 (B)
{0x990, 0x0000},	//      = 0
{0x98C, 0x2749},	//Crop_X1 (B)
{0x990, 0x063F},	//      = 1599
{0x98C, 0x274B},	//Crop_Y0 (B)
{0x990, 0x0000},	//      = 0
{0x98C, 0x274D},	//Crop_Y1 (B)
{0x990, 0x04AF},	//      = 1199
{0x98C, 0x222D},	//R9 Step
{0x990, 0x008D},	//      = 141
{0x98C, 0xA408},	//search_f1_50
{0x990, 0x0022},	//      = 34
{0x98C, 0xA409},	//search_f2_50
{0x990, 0x0024},	//      = 36
{0x98C, 0xA40A},	//search_f1_60
{0x990, 0x0029},	//      = 41
{0x98C, 0xA40B},	//search_f2_60
{0x990, 0x002B},	//      = 43
{0x98C, 0x2411},	//R9_Step_60 (A)
{0x990, 0x008D},	//      = 141
{0x98C, 0x2413},	//R9_Step_50 (A)
{0x990, 0x00A9},	//      = 169
{0x98C, 0x2415},	//R9_Step_60 (B)
{0x990, 0x005B},	//      = 91
{0x98C, 0x2417},	//R9_Step_50 (B)
{0x990, 0x006D},	//      = 109
{0x98C, 0xA404},	//FD Mode
{0x990, 0x0010},	//      = 16
{0x98C, 0xA40D},	//Stat_min
{0x990, 0x0002},	//      = 2
{0x98C, 0xA40E},	//Stat_max
{0x990, 0x0003},	//      = 3
{0x98C, 0xA410},	//Min_amplitude
{0x990, 0x000A},	//      = 10
{0x98C, 0xA103},	//Refresh Sequencer Mode
{0x990, 0x0006},	//      = 6
{0,10},
{0x98C, 0xA103},	//Refresh Sequencer
{0x990, 0x05},	//      = 5
{0,10},

#endif
#if 1//MCLK 24M,PLCK bypass
//[MT9D113 (SOC2030) Register Wizard Defaults]
{0x0014, 0x21F9},	//PLL Control: BYPASS PLL = 8697
//BITFIELD = 0x001A, 0x0008, 0x0000	//PLL Reset Control: OUTPUT, bits 0x0008 = 0
//BITFIELD = 0x0018, 0x0001, 0x0000	//PLL Standby: Out of Standby, bits 0x0001 = 0
{0x321C, 0x0003},//By Pass TxFIFO = 3
{0x98C, 0x2703},	//Output Width (A)
{0x990, 0x0320},	//      = 800
{0x98C, 0x2705},	//Output Height (A)
{0x990, 0x0258},	//      = 600
{0x98C, 0x2707},	//Output Width (B)
{0x990, 0x0640},	//      = 1600
{0x98C, 0x2709},	//Output Height (B)
{0x990, 0x04B0},	//      = 1200
{0x98C, 0x270D},	//Row Start (A)
{0x990, 0x0000},	//      = 0
{0x98C, 0x270F},	//Column Start (A)
{0x990, 0x0000},	//      = 0
{0x98C, 0x2711},	//Row End (A)
{0x990, 0x04BD},	//      = 1213
{0x98C, 0x2713},	//Column End (A)
{0x990, 0x064D},	//      = 1613
{0x98C, 0x2715},	//Row Speed (A)
{0x990, 0x0111},	//      = 273
{0x98C, 0x2717},	//Read Mode (A)
{0x990, 0x046C},	//      = 1132
{0x98C, 0x2719},	//sensor_fine_correction (A)
{0x990, 0x005A},	//      = 90
{0x98C, 0x271B},	//sensor_fine_IT_min (A)
{0x990, 0x01BE},	//      = 446
{0x98C, 0x271D},	//sensor_fine_IT_max_margin (A)
{0x990, 0x0131},	//      = 305
{0x98C, 0x271F},	//Frame Lines (A)
{0x990, 0x02B3},	//      = 691
{0x98C, 0x2721},	//Line Length (A)
{0x990, 0x05DF},	//      = 1503
{0x98C, 0x2723},	//Row Start (B)
{0x990, 0x0004},	//      = 4
{0x98C, 0x2725},	//Column Start (B)
{0x990, 0x0004},	//      = 4
{0x98C, 0x2727},	//Row End (B)
{0x990, 0x04BB},	//      = 1211
{0x98C, 0x2729},	//Column End (B)
{0x990, 0x064B},	//      = 1611
{0x98C, 0x272B},	//Row Speed (B)
{0x990, 0x0111},	//      = 273
{0x98C, 0x272D},	//Read Mode (B)
{0x990, 0x0024},	//      = 36
{0x98C, 0x272F},	//sensor_fine_correction (B)
{0x990, 0x003A},	//      = 58
{0x98C, 0x2731},	//sensor_fine_IT_min (B)
{0x990, 0x00F6},	//      = 246
{0x98C, 0x2733},	//sensor_fine_IT_max_margin (B)
{0x990, 0x008B},	//      = 139
{0x98C, 0x2735},	//Frame Lines (B)
{0x990, 0x050D},	//      = 1293
{0x98C, 0x2737},	//Line Length (B)
{0x990, 0x07BC},	//      = 1980
{0x98C, 0x2739},	//Crop_X0 (A)
{0x990, 0x0000},	//      = 0
{0x98C, 0x273B},	//Crop_X1 (A)
{0x990, 0x031F},	//      = 799
{0x98C, 0x273D},	//Crop_Y0 (A)
{0x990, 0x0000},	//      = 0
{0x98C, 0x273F},	//Crop_Y1 (A)
{0x990, 0x0257},	//      = 599
{0x98C, 0x2747},	//Crop_X0 (B)
{0x990, 0x0000},	//      = 0
{0x98C, 0x2749},	//Crop_X1 (B)
{0x990, 0x063F},	//      = 1599
{0x98C, 0x274B},	//Crop_Y0 (B)
{0x990, 0x0000},	//      = 0
{0x98C, 0x274D},	//Crop_Y1 (B)
{0x990, 0x04AF},	//      = 1199
{0x98C, 0x222D},	//R9 Step
{0x990, 0x0043},	//      = 67
{0x98C, 0xA408},	//search_f1_50
{0x990, 0x000F},	//      = 15
{0x98C, 0xA409},	//search_f2_50
{0x990, 0x0011},	//      = 17
{0x98C, 0xA40A},	//search_f1_60
{0x990, 0x0012},	//      = 18
{0x98C, 0xA40B},	//search_f2_60
{0x990, 0x0014},	//      = 20
{0x98C, 0x2411},	//R9_Step_60 (A)
{0x990, 0x0042},	//      = 66
{0x98C, 0x2413},	//R9_Step_50 (A)
{0x990, 0x004F},	//      = 79
{0x98C, 0x2415},	//R9_Step_60 (B)
{0x990, 0x0032},	//      = 50
{0x98C, 0x2417},	//R9_Step_50 (B)
{0x990, 0x003C},	//      = 60
{0x98C, 0xA404},	//FD Mode
{0x990, 0x0010},	//      = 16
{0x98C, 0xA40D},	//Stat_min
{0x990, 0x0002},	//      = 2
{0x98C, 0xA40E},	//Stat_max
{0x990, 0x0003},	//      = 3
{0x98C, 0xA410},	//Min_amplitude
{0x990, 0x000A},	//      = 10
{0x98C, 0xA103},	//Refresh Sequencer Mode
{0x990, 0x0006},	//      = 6
//POLL_FIELD=SEQ_CMD, !=0, DELAY=10, TIMEOUT=100  // wait for command to be processed
{0x98C, 0xA103},	//Refresh Sequencer
{0x990, 0x05},	//      = 5
//POLL_FIELD=SEQ_CMD, !=0, DELAY=10, TIMEOUT=100  // wait for command to be processed
{0,100},
#endif
#if 0
		/*add mirror start*/
		{0x98C, 0x2717},
		{0x990, 0x046C}, 
		{0x98C, 0x272D},
		{0x990, 0x0024},
		/*add mirror end*/
#endif
		/*//gamma 3.5 start
		{0x098C, 0xAB3C},	// MCU_ADDRESS [HG_GAMMA_TABLE_A_0]
		{0x0990, 0x0000},	// MCU_DATA_0
		{0x098C, 0xAB3D},	// MCU_ADDRESS [HG_GAMMA_TABLE_A_1]
		{0x0990, 0x0010},	// MCU_DATA_0
		{0x098C, 0xAB3E},	// MCU_ADDRESS [HG_GAMMA_TABLE_A_2]
		{0x0990, 0x002F},	// MCU_DATA_0
		{0x098C, 0xAB3F},	// MCU_ADDRESS [HG_GAMMA_TABLE_A_3]
		{0x0990, 0x0050},	// MCU_DATA_0
		{0x098C, 0xAB40},	// MCU_ADDRESS [HG_GAMMA_TABLE_A_4]
		{0x0990, 0x0073},	// MCU_DATA_0
		{0x098C, 0xAB41},	// MCU_ADDRESS [HG_GAMMA_TABLE_A_5]
		{0x0990, 0x008B},	// MCU_DATA_0
		{0x098C, 0xAB42},	// MCU_ADDRESS [HG_GAMMA_TABLE_A_6]
		{0x0990, 0x009E},	// MCU_DATA_0
		{0x098C, 0xAB43},	// MCU_ADDRESS [HG_GAMMA_TABLE_A_7]
		{0x0990, 0x00AC},	// MCU_DATA_0
		{0x098C, 0xAB44},	// MCU_ADDRESS [HG_GAMMA_TABLE_A_8]
		{0x0990, 0x00B9},	// MCU_DATA_0
		{0x098C, 0xAB45},	// MCU_ADDRESS [HG_GAMMA_TABLE_A_9]
		{0x0990, 0x00C3},	// MCU_DATA_0
		{0x098C, 0xAB46},	// MCU_ADDRESS [HG_GAMMA_TABLE_A_10]
		{0x0990, 0x00CC},	// MCU_DATA_0
		{0x098C, 0xAB47},	// MCU_ADDRESS [HG_GAMMA_TABLE_A_11]
		{0x0990, 0x00D5},	// MCU_DATA_0
		{0x098C, 0xAB48},	// MCU_ADDRESS [HG_GAMMA_TABLE_A_12]
		{0x0990, 0x00DC},	// MCU_DATA_0
		{0x098C, 0xAB49},	// MCU_ADDRESS [HG_GAMMA_TABLE_A_13]
		{0x0990, 0x00E3},	// MCU_DATA_0
		{0x098C, 0xAB4A},	// MCU_ADDRESS [HG_GAMMA_TABLE_A_14]
		{0x0990, 0x00EA},	// MCU_DATA_0
		{0x098C, 0xAB4B},	// MCU_ADDRESS [HG_GAMMA_TABLE_A_15]
		{0x0990, 0x00EF},	// MCU_DATA_0
		{0x098C, 0xAB4C},	// MCU_ADDRESS [HG_GAMMA_TABLE_A_16]
		{0x0990, 0x00F5},	// MCU_DATA_0
		{0x098C, 0xAB4D},	// MCU_ADDRESS [HG_GAMMA_TABLE_A_17]
		{0x0990, 0x00FA},	// MCU_DATA_0
		{0x098C, 0xAB4E},	// MCU_ADDRESS [HG_GAMMA_TABLE_A_18]
		{0x0990, 0x00FF},	// MCU_DATA_0
		//gamma 3.5 end*/
		
		/*{0x0018, 0x0028},	// STANDBY_CONTROL
		{0,10          },
		{0x098C, 0xA103},	// //Refresh Sequencer Mode
		{0x0990, 0x0006},	// MCU_DATA_0
		{0,10      } ,*/
		


		/*		//test
		{ 0x098C, 0xA766 }, 		
		{ 0x0990, 0x0003 }, 
		{ 0x098C, 0xA103 }, 
		{ 0x0990, 0x0005 },*/
		
	{0x098C, 0xA20C}, 	// MCU_ADDRESS [AE_MAX_INDEX]
	{0x0990, 0x0014}, 	// MCU_DATA_0
	{0x098C, 0xA20D}, 	// MCU_ADDRESS [AE_MIN_VIRTGAIN]
	//{0x0990, 0x0010}, 	// MCU_DATA_0
	{0x0990, 0x0020}, 	// MCU_DATA_0
	{0x098C, 0xA20E}, 	// MCU_ADDRESS [AE_MAX_VIRTGAIN]
	//{0x0990, 0x0090}, 	// MCU_DATA_0
	{0x0990, 0x0040}, 	// MCU_DATA_0//2010.05.14
	{0x098C, 0xA24F}, 	// MCU_ADDRESS [AE_BASETARGET]
	//{0x0990, 0x0038}, 	// MCU_DATA_0
	{0x0990, 0x0030}, 	// MCU_DATA_0
         
#if 0
	{0x098C, 0xAB3C}, 	// MCU_ADDRESS [HG_GAMMA_TABLE_A_0]
	{0x0990, 0x0000}, 	// MCU_DATA_0
	{0x098C, 0xAB3D}, 	// MCU_ADDRESS [HG_GAMMA_TABLE_A_1]
	{0x0990, 0x0010}, 	// MCU_DATA_0
	{0x098C, 0xAB3E}, 	// MCU_ADDRESS [HG_GAMMA_TABLE_A_2]
	{0x0990, 0x002F}, 	// MCU_DATA_0
	{0x098C, 0xAB3F}, 	// MCU_ADDRESS [HG_GAMMA_TABLE_A_3]
	{0x0990, 0x0050}, 	// MCU_DATA_0
	{0x098C, 0xAB40}, 	// MCU_ADDRESS [HG_GAMMA_TABLE_A_4]
	{0x0990, 0x0073}, 	// MCU_DATA_0
	{0x098C, 0xAB41}, 	// MCU_ADDRESS [HG_GAMMA_TABLE_A_5]
	{0x0990, 0x008B}, 	// MCU_DATA_0
	{0x098C, 0xAB42}, 	// MCU_ADDRESS [HG_GAMMA_TABLE_A_6]
	{0x0990, 0x009E}, 	// MCU_DATA_0
	{0x098C, 0xAB43}, 	// MCU_ADDRESS [HG_GAMMA_TABLE_A_7]
	{0x0990, 0x00AC}, 	// MCU_DATA_0
	{0x098C, 0xAB44}, 	// MCU_ADDRESS [HG_GAMMA_TABLE_A_8]
	{0x0990, 0x00B9}, 	// MCU_DATA_0
	{0x098C, 0xAB45}, 	// MCU_ADDRESS [HG_GAMMA_TABLE_A_9]
	{0x0990, 0x00C3}, 	// MCU_DATA_0
	{0x098C, 0xAB46}, 	// MCU_ADDRESS [HG_GAMMA_TABLE_A_10]
	{0x0990, 0x00CC}, 	// MCU_DATA_0
	{0x098C, 0xAB47}, 	// MCU_ADDRESS [HG_GAMMA_TABLE_A_11]
	{0x0990, 0x00D5}, 	// MCU_DATA_0
	{0x098C, 0xAB48}, 	// MCU_ADDRESS [HG_GAMMA_TABLE_A_12]
	{0x0990, 0x00DC}, 	// MCU_DATA_0
	{0x098C, 0xAB49}, 	// MCU_ADDRESS [HG_GAMMA_TABLE_A_13]
	{0x0990, 0x00E3}, 	// MCU_DATA_0
	{0x098C, 0xAB4A}, 	// MCU_ADDRESS [HG_GAMMA_TABLE_A_14]
	{0x0990, 0x00EA}, 	// MCU_DATA_0
	{0x098C, 0xAB4B}, 	// MCU_ADDRESS [HG_GAMMA_TABLE_A_15]
	{0x0990, 0x00EF}, 	// MCU_DATA_0
	{0x098C, 0xAB4C}, 	// MCU_ADDRESS [HG_GAMMA_TABLE_A_16]
	{0x0990, 0x00F5}, 	// MCU_DATA_0
	{0x098C, 0xAB4D}, 	// MCU_ADDRESS [HG_GAMMA_TABLE_A_17]
	{0x0990, 0x00FA}, 	// MCU_DATA_0
	{0x098C, 0xAB4E}, 	// MCU_ADDRESS [HG_GAMMA_TABLE_A_18]
	{0x0990, 0x00FF}, 	// MCU_DATA_0
#endif
	{0x098C, 0xAB20}, 	// MCU_ADDRESS [HG_LL_APCORR1]
	{0x0990, 0x0069}, 	// MCU_DATA_0//


};



struct register_address_value_pair const
BYD_SUNNY_AWB_CCM_BACK[] = {
            {0x098C, 0x2306},
            {0x0990, 0x0218},
            {0x098C, 0x2308},
            {0x0990, 0xFF1C},
            {0x098C, 0x230A},
            {0x0990, 0xFFCC},
            {0x098C, 0x230C},
            {0x0990, 0xFFA0},
            {0x098C, 0x230E},
            {0x0990, 0x01D2},
            {0x098C, 0x2310},
            {0x0990, 0xFF8E},
            {0x098C, 0x2312},
            {0x0990, 0xFFF3},
            {0x098C, 0x2314},
            {0x0990, 0xFF22},
            {0x098C, 0x2316},
            {0x0990, 0x01EB},
            {0x098C, 0x2318},
            {0x0990, 0x001D},
            {0x098C, 0x231A},
            {0x0990, 0x0037},
            {0x098C, 0x231C},
            {0x0990, 0xFFF6},
            {0x098C, 0x231E},
            {0x0990, 0xFFE4},
            {0x098C, 0x2320},
            {0x0990, 0x0026},
            {0x098C, 0x2322},
            {0x0990, 0x002B},
            {0x098C, 0x2324},
            {0x0990, 0xFFFC},
            {0x098C, 0x2326},
            {0x0990, 0xFFD9},
            {0x098C, 0x2328},
            {0x0990, 0x000E},
            {0x098C, 0x232A},
            {0x0990, 0x0049},
            {0x098C, 0x232C},
            {0x0990, 0xFFAA},
            {0x098C, 0x232E},
            {0x0990, 0x0016},
            {0x098C, 0x2330},
            {0x0990, 0xFFEB},
            {0x098C, 0xA348},
            {0x0990, 0x0008},
            {0x098C, 0xA349},
            {0x0990, 0x0002},
            {0x098C, 0xA34A},
            {0x0990, 0x0059},
            {0x098C, 0xA34B},
            {0x0990, 0x00C8},
            {0x098C, 0xA351},
            {0x0990, 0x0000},
            {0x098C, 0xA352},
            {0x0990, 0x007F},
            {0x098C, 0xA355},
            {0x0990, 0x0001},
            {0x098C, 0xA35D},
            {0x0990, 0x0078},
            {0x098C, 0xA35E},
            {0x0990, 0x0086},
            {0x098C, 0xA35F},
            {0x0990, 0x007E},
            {0x098C, 0xA360},
            {0x0990, 0x0082},
            {0x098C, 0x2361},
            {0x0990, 0x0040},
            {0x098C, 0xA363},
            {0x0990, 0x00D2},
            {0x098C, 0xA364},
            {0x0990, 0x00F6},
            {0x098C, 0xA302},
            {0x0990, 0x0000},
            {0x098C, 0xA303},
            {0x0990, 0x00EF},

};

struct register_address_value_pair const
LITEON_AWB_CCM_BACK[] = {
        {0x098C, 0x2306},
        {0x0990, 0x01F5},
        {0x098C, 0x2308},
        {0x0990, 0xFF41},
        {0x098C, 0x230A},
        {0x0990, 0xFFC9},
        {0x098C, 0x230C},
        {0x0990, 0xFF9F},
        {0x098C, 0x230E},
        {0x0990, 0x01D9},
        {0x098C, 0x2310},
        {0x0990, 0xFF88},
        {0x098C, 0x2312},
        {0x0990, 0xFFED},
        {0x098C, 0x2314},
        {0x0990, 0xFF3C},
        {0x098C, 0x2316},
        {0x0990, 0x01D7},
        {0x098C, 0x2318},
        {0x0990, 0x0020},
        {0x098C, 0x231A},
        {0x0990, 0x003B},
        {0x098C, 0x231C},
        {0x0990, 0xFFD3},
        {0x098C, 0x231E},
        {0x0990, 0x001D},
        {0x098C, 0x2320},
        {0x0990, 0x0011},
        {0x098C, 0x2322},
        {0x0990, 0x0024},
        {0x098C, 0x2324},
        {0x0990, 0x000C},
        {0x098C, 0x2326},
        {0x0990, 0xFFD0},
        {0x098C, 0x2328},
        {0x0990, 0x0010},
        {0x098C, 0x232A},
        {0x0990, 0x0036},
        {0x098C, 0x232C},
        {0x0990, 0xFFBA},
        {0x098C, 0x232E},
        {0x0990, 0x001A},
        {0x098C, 0x2330},
        {0x0990, 0xFFE8},
        {0x098C, 0xA348},
        {0x0990, 0x0008},
        {0x098C, 0xA349},
        {0x0990, 0x0002},
        {0x098C, 0xA34A},
        {0x0990, 0x0059},
        {0x098C, 0xA34B},
        {0x0990, 0x00C8},
        {0x098C, 0xA351},
        {0x0990, 0x0000},
        {0x098C, 0xA352},
        {0x0990, 0x007F},
        {0x098C, 0xA355},
        {0x0990, 0x0001},
        {0x098C, 0xA35D},
        {0x0990, 0x0078},
        {0x098C, 0xA35E},
        {0x0990, 0x0086},
        {0x098C, 0xA35F},
        {0x0990, 0x007E},
        {0x098C, 0xA360},
        {0x0990, 0x0082},
        {0x098C, 0x2361},
        {0x0990, 0x0040},
        {0x098C, 0xA363},
        {0x0990, 0x00D2},
        {0x098C, 0xA364},
        {0x0990, 0x00F6},
        {0x098C, 0xA302},
        {0x0990, 0x0000},
        {0x098C, 0xA303},
        {0x0990, 0x00EF},

};

struct register_address_value_pair const
BYD_LENS_SHADING_BACK[] = {

       /*lens 85%*/
        {0x3658, 0x01B0},
        {0x365A, 0x6A8B},
        {0x365C, 0x13D2},
        {0x365E, 0xB66E},
        {0x3660, 0x9D2F},
        {0x3680, 0x19CD},
        {0x3682, 0x722F},
        {0x3684, 0xA9AE},
        {0x3686, 0x9792},
        {0x3688, 0xAC12},
        {0x36A8, 0x0533},
        {0x36AA, 0xDA4D},
        {0x36AC, 0xB394},
        {0x36AE, 0xC294},
        {0x36B0, 0x1E17},
        {0x36D0, 0x9030},
        {0x36D2, 0x9730},
        {0x36D4, 0xD094},
        {0x36D6, 0xB393},
        {0x36D8, 0x2717},
        {0x36F8, 0xE6B3},
        {0x36FA, 0x88F5},
        {0x36FC, 0x2B17},
        {0x36FE, 0x1919},
        {0x3700, 0xE17A},
        {0x364E, 0x0790},
        {0x3650, 0xE309},
        {0x3652, 0x1ED2},
        {0x3654, 0x8B2F},
        {0x3656, 0x8713},
        {0x3676, 0x7FAB},
        {0x3678, 0xFDAF},
        {0x367A, 0x0570},
        {0x367C, 0x7B71},
        {0x367E, 0xF412},
        {0x369E, 0x0CD3},
        {0x36A0, 0xD86E},
        {0x36A2, 0x80F6},
        {0x36A4, 0xD9B3},
        {0x36A6, 0x2E38},
        {0x36C6, 0xA470},
        {0x36C8, 0x504E},
        {0x36CA, 0xD8B3},
        {0x36CC, 0x4733},
        {0x36CE, 0x6CD6},
        {0x36EE, 0xCD34},
        {0x36F0, 0xFC94},
        {0x36F2, 0x3A98},
        {0x36F4, 0x7F78},
        {0x36F6, 0x8B1B},
        {0x3662, 0x00B0},
        {0x3664, 0x88CB},
        {0x3666, 0x18F2},
        {0x3668, 0xA74C},
        {0x366A, 0xBF92},
        {0x368A, 0x80CB},
        {0x368C, 0xF4CF},
        {0x368E, 0x3130},
        {0x3690, 0x2232},
        {0x3692, 0x9EB3},
        {0x36B2, 0x0A53},
        {0x36B4, 0xC1ED},
        {0x36B6, 0xA095},
        {0x36B8, 0xB474},
        {0x36BA, 0x5DF7},
        {0x36DA, 0xE84D},
        {0x36DC, 0x0952},
        {0x36DE, 0xAEB4},
        {0x36E0, 0xED13},
        {0x36E2, 0x0C37},
        {0x3702, 0xA9B4},
        {0x3704, 0xD754},
        {0x3706, 0x1897},
        {0x3708, 0x0EF9},
        {0x370A, 0x951A},
        {0x366C, 0x0250},
        {0x366E, 0x302A},
        {0x3670, 0x1ED2},
        {0x3672, 0xB20F},
        {0x3674, 0x9BF3},
        {0x3694, 0x054D},
        {0x3696, 0x4B2F},
        {0x3698, 0x524D},
        {0x369A, 0xBDD1},
        {0x369C, 0xE112},
        {0x36BC, 0x0FF3},
        {0x36BE, 0xED2E},
        {0x36C0, 0xFBD5},
        {0x36C2, 0xF973},
        {0x36C4, 0x25B8},
        {0x36E4, 0xF42E},
        {0x36E6, 0x5790},
        {0x36E8, 0x8F55},
        {0x36EA, 0xD9F4},
        {0x36EC, 0x54D7},
        {0x370C, 0xCA74},
        {0x370E, 0x8415},
        {0x3710, 0x1FD8},
        {0x3712, 0x00D9},
        {0x3714, 0xE9FA},
        {0x3644, 0x0344},
        {0x3642, 0x0268},
        {0x3210, 0x01B8},

};

struct register_address_value_pair const
LITEON_LENS_SHADING_BACK[] = {
        /*lens 85%*/
        {0x3658, 0x00D0},
        {0x365A, 0x89CB},
        {0x365C, 0x55B1},
        {0x365E, 0x19AD},
        {0x3660, 0x1FAD},
        {0x3680, 0x6CC3},
        {0x3682, 0x788F},
        {0x3684, 0x2DF0},
        {0x3686, 0xDF11},
        {0x3688, 0x8111},
        {0x36A8, 0x36F2},
        {0x36AA, 0xC711},
        {0x36AC, 0x01F5},
        {0x36AE, 0x00B5},
        {0x36B0, 0x9ED8},
        {0x36D0, 0x102E},
        {0x36D2, 0xFD31},
        {0x36D4, 0xEB94},
        {0x36D6, 0x8733},
        {0x36D8, 0x16F6},
        {0x36F8, 0x15B3},
        {0x36FA, 0x0AB5},
        {0x36FC, 0xBCD9},
        {0x36FE, 0xB358},
        {0x3700, 0x119C},
        {0x364E, 0x06D0},
        {0x3650, 0xD0CA},
        {0x3652, 0x5D91},
        {0x3654, 0x37EE},
        {0x3656, 0x85D2},
        {0x3676, 0x012D},
        {0x3678, 0xA34F},
        {0x367A, 0xC40F},
        {0x367C, 0x1911},
        {0x367E, 0x5291},
        {0x369E, 0x3152},
        {0x36A0, 0xD470},
        {0x36A2, 0x43B1},
        {0x36A4, 0x0115},
        {0x36A6, 0x81B7},
        {0x36C6, 0x95EF},
        {0x36C8, 0xCE12},
        {0x36CA, 0xD873},
        {0x36CC, 0x1935},
        {0x36CE, 0x3115},
        {0x36EE, 0x5851},
        {0x36F0, 0x2634},
        {0x36F2, 0xC138},
        {0x36F4, 0xB158},
        {0x36F6, 0x2FDB},
        {0x3662, 0x00B0},
        {0x3664, 0x1BAA},
        {0x3666, 0x2D91},
        {0x3668, 0x3CCD},
        {0x366A, 0xCB10},
        {0x368A, 0x8089},
        {0x368C, 0x8F4F},
        {0x368E, 0x650F},
        {0x3690, 0x6791},
        {0x3692, 0xA630},
        {0x36B2, 0x2912},
        {0x36B4, 0x9612},
        {0x36B6, 0x4632},
        {0x36B8, 0x1FF5},
        {0x36BA, 0xBCF6},
        {0x36DA, 0x5870},
        {0x36DC, 0xBE72},
        {0x36DE, 0xBA75},
        {0x36E0, 0x2FB4},
        {0x36E2, 0x0157},
        {0x3702, 0x5DF2},
        {0x3704, 0x3DF5},
        {0x3706, 0xDB38},
        {0x3708, 0xF478},
        {0x370A, 0x1CBB},
        {0x366C, 0x01D0},
        {0x366E, 0xCC6A},
        {0x3670, 0x5551},
        {0x3672, 0x0D4E},
        {0x3674, 0x83F2},
        {0x3694, 0x240C},
        {0x3696, 0x4DEF},
        {0x3698, 0x536E},
        {0x369A, 0xE990},
        {0x369C, 0x8211},
        {0x36BC, 0x3C72},
        {0x36BE, 0xA1B0},
        {0x36C0, 0xA770},
        {0x36C2, 0x7234},
        {0x36C4, 0xDE36},
        {0x36E4, 0x8AAF},
        {0x36E6, 0xC70E},
        {0x36E8, 0xBF53},
        {0x36EA, 0x8855},
        {0x36EC, 0x0FB6},
        {0x370C, 0xCA2D},
        {0x370E, 0x19B4},
        {0x3710, 0xA9F8},
        {0x3712, 0xAEB8},
        {0x3714, 0x205B},
        {0x3644, 0x02F0},
        {0x3642, 0x025C},
        {0x3210, 0x01B8},

};

struct register_address_value_pair const
SUNNY_LENS_SHADING_BACK[] = {
        /*lens 90%*/
        {0x3658, 0x0110},
        {0x365A, 0xE4CC},
        {0x365C, 0x1D72},
        {0x365E, 0x220D},
        {0x3660, 0x83B1},
        {0x3680, 0x14CD},
        {0x3682, 0x0250},
        {0x3684, 0x20CB},
        {0x3686, 0x9FD2},
        {0x3688, 0x84AE},
        {0x36A8, 0x7452},
        {0x36AA, 0xDA6F},
        {0x36AC, 0x52F3},
        {0x36AE, 0x4E92},
        {0x36B0, 0xAA57},
        {0x36D0, 0x18AE},
        {0x36D2, 0x0570},
        {0x36D4, 0xEB53},
        {0x36D6, 0x8355},
        {0x36D8, 0x1A75},
        {0x36F8, 0xBB2F},
        {0x36FA, 0x4172},
        {0x36FC, 0x8078},
        {0x36FE, 0xAC36},
        {0x3700, 0x025A},
        {0x364E, 0x05F0},
        {0x3650, 0x9C6C},
        {0x3652, 0x2032},
        {0x3654, 0xA46C},
        {0x3656, 0xCF72},
        {0x3676, 0x422C},
        {0x3678, 0xE98F},
        {0x367A, 0xDF0B},
        {0x367C, 0x4E91},
        {0x367E, 0x4BF1},
        {0x369E, 0x6D12},
        {0x36A0, 0xA1B1},
        {0x36A2, 0x01D3},
        {0x36A4, 0x27D3},
        {0x36A6, 0xFC96},
        {0x36C6, 0x3F8B},
        {0x36C8, 0x14EF},
        {0x36CA, 0xAF92},
        {0x36CC, 0x7FD1},
        {0x36CE, 0x78ED},
        {0x36EE, 0xB2D2},
        {0x36F0, 0x3CF3},
        {0x36F2, 0xEC97},
        {0x36F4, 0xEFB6},
        {0x36F6, 0x1BFA},
        {0x3662, 0x00D0},
        {0x3664, 0x836D},
        {0x3666, 0x0A92},
        {0x3668, 0x000E},
        {0x366A, 0x8A72},
        {0x368A, 0x1BAC},
        {0x368C, 0x954F},
        {0x368E, 0x2E8E},
        {0x3690, 0x5850},
        {0x3692, 0xAED0},
        {0x36B2, 0x53B2},
        {0x36B4, 0xF5B0},
        {0x36B6, 0x2213},
        {0x36B8, 0x4E93},
        {0x36BA, 0xF596},
        {0x36DA, 0x236F},
        {0x36DC, 0xE96C},
        {0x36DE, 0xBBD3},
        {0x36E0, 0x5571},
        {0x36E2, 0x6D15},
        {0x3702, 0xA671},
        {0x3704, 0x3E73},
        {0x3706, 0xDE97},
        {0x3708, 0x8437},
        {0x370A, 0x05DA},
        {0x366C, 0x00F0},
        {0x366E, 0x9A0C},
        {0x3670, 0x1AD2},
        {0x3672, 0xD0AB},
        {0x3674, 0xD392},
        {0x3694, 0x77CC},
        {0x3696, 0x02F0},
        {0x3698, 0xD3CE},
        {0x369A, 0x81B2},
        {0x369C, 0x3B31},
        {0x36BC, 0x6B12},
        {0x36BE, 0x88D1},
        {0x36C0, 0x76F2},
        {0x36C2, 0x01D3},
        {0x36C4, 0x82F7},
        {0x36E4, 0x40CF},
        {0x36E6, 0x6A2F},
        {0x36E8, 0x8034},
        {0x36EA, 0xE834},
        {0x36EC, 0x0D95},
        {0x370C, 0xBC12},
        {0x370E, 0x6E13},
        {0x3710, 0xEAB7},
        {0x3712, 0xF896},
        {0x3714, 0x1D7A},
        {0x3644, 0x032C},
        {0x3642, 0x0258},
        {0x3210, 0x01B8},

};



struct register_address_value_pair const
preview_snapshot_mode_reg_settings_array2_BACK[] = {
	{0x3084, 0x240C},// DAC_LD_4_5                 
	{0x3092, 0x0A4C},// DAC_LD_18_19               
	{0x3094, 0x4C4C},// DAC_LD_20_21               
	{0x3096, 0x4C54},// DAC_LD_22_23               
                          
	{0x98C, 0x2703},      //Output Width (A)      
	{0x990, 0x0320},      //      = 800           
	{0x98C, 0x2705},      //Output Height (A)     
	{0x990, 0x0258},      //      = 600           
	{0x98C, 0x2707},      //Output Width (B)      
	{0x990, 0x0640},      //      = 1600          
	{0x98C, 0x2709},      //Output Height (B)     
	{0x990, 0x04B0},      //      = 1200          
	{0x98C, 0x270D},      //Row Start (A)         
	{0x990, 0x000 },     //      = 0              
	{0x98C, 0x270F},      //Column Start (A)      
	{0x990, 0x000 },     //      = 0              
	{0x98C, 0x2711},      //Row End (A)           
	{0x990, 0x4BD },     //      = 1213           
	{0x98C, 0x2713},      //Column End (A)        
	{0x990, 0x64D },     //      = 1613           
	{0x98C, 0x2715},      //Row Speed (A)         
	{0x990, 0x0111},      //      = 273           
	{0x98C, 0x2717},      //Read Mode (A)         
	{0x990, 0x046C},      //      = 1132          
	{0x98C, 0x2719},      //sensor_fine_correction
	{0x990, 0x005A},      //      = 90            
	{0x98C, 0x271B},      //sensor_fine_IT_min (A)
	{0x990, 0x01BE},      //      = 446           
	{0x98C, 0x271D},      //sensor_fine_IT_max_mar
	{0x990, 0x0131},      //      = 305           
	{0x98C, 0x271F},      //Frame Lines (A)       
	{0x990, 0x02B3},      //      = 691           
	{0x98C, 0x2721},      //Line Length (A)       
	{0x990, 0x05A7},      //      = 1447          
	{0x98C, 0x2723},      //Row Start (B)         
	{0x990, 0x004 },     //      = 4              
	{0x98C, 0x2725},      //Column Start (B)      
	{0x990, 0x004 },     //      = 4              
	{0x98C, 0x2727},      //Row End (B)           
	{0x990, 0x4BB },     //      = 1211           
	{0x98C, 0x2729},      //Column End (B)        
	{0x990, 0x64B },     //      = 1611           
	{0x98C, 0x272B},      //Row Speed (B)         
	{0x990, 0x0111},      //      = 273           
	{0x98C, 0x272D},      //Read Mode (B)         
	{0x990, 0x0024},      //      = 36            
	{0x98C, 0x272F},      //sensor_fine_correction
	{0x990, 0x003A},      //      = 58            
	{0x98C, 0x2731},      //sensor_fine_IT_min (B)
	{0x990, 0x00F6},      //      = 246           
	{0x98C, 0x2733},      //sensor_fine_IT_max_mar
	{0x990, 0x008B},      //      = 139           
	{0x98C, 0x2735},      //Frame Lines (B)       
	{0x990, 0x050D},      //      = 1293          
	{0x98C, 0x2737},      //Line Length (B)       
	{0x990, 0x07BF},      //      = 1983          
	{0x98C, 0x2739},      //Crop_X0 (A)           
	{0x990, 0x0000},      //      = 0             
	{0x98C, 0x273B},      //Crop_X1 (A)           
	{0x990, 0x031F},      //      = 799           
	{0x98C, 0x273D},      //Crop_Y0 (A)           
	{0x990, 0x0000},      //      = 0             
	{0x98C, 0x273F},      //Crop_Y1 (A)           
	{0x990, 0x0257},      //      = 599           
	{0x98C, 0x2747},      //Crop_X0 (B)           
	{0x990, 0x0000},      //      = 0             
	{0x98C, 0x2749},      //Crop_X1 (B)           
	{0x990, 0x063F},      //      = 1599          
	{0x98C, 0x274B},      //Crop_Y0 (B)           
	{0x990, 0x0000},      //      = 0             
	{0x98C, 0x274D},      //Crop_Y1 (B)           
	{0x990, 0x04AF},      //      = 1199          
	{0x98C, 0x222D},      //R9 Step               
	{0x990, 0x0073},      //      = 115           
	{0x98C, 0xA408},      //search_f1_50          
	{0x990, 0x1B  },    //      = 27              
	{0x98C, 0xA409},      //search_f2_50          
	{0x990, 0x1E  },    //      = 30              
	{0x98C, 0xA40A},      //search_f1_60          
	{0x990, 0x21  },    //      = 33              
	{0x98C, 0xA40B},      //search_f2_60          
	{0x990, 0x24  },    //      = 36              
	{0x98C, 0x2411},      //R9_Step_60 (A)        
	{0x990, 0x008d},      //      = 115           
	{0x98C, 0x2413},      //R9_Step_50 (A)        
	{0x990, 0x008d},      //      = 138           
	{0x98C, 0x2415},      //R9_Step_60 (B)        
	{0x990, 0x0064},      //      = 84            
	{0x98C, 0x2417},      //R9_Step_50 (B)        
	{0x990, 0x0064},      //      = 101           
	{0x98C, 0xA404},      //FD Mode               
	{0x990, 0x10  },    //      = 16              
	{0x98C, 0xA40D},      //Stat_min              
	{0x990, 0x02  },    //      = 2               
	{0x98C, 0xA40E},      //Stat_max              
	{0x990, 0x03  },    //      = 3               
	{0x98C, 0xA410},      //Min_amplitude         
	{0x990, 0x02  },    //      = 2               
                        
	{0x098C, 0xA20C},// MCU_ADDRESS [AE_MAX_INDEX] 
	{0x0990, 0x0005},// MCU_DATA_0                 
	{0x098C, 0xA215},// MCU_ADDRESS [AE_INDEX_TH23]
	{0x0990, 0x0004},// MCU_DATA_0                 
                          
	{0x98C, 0xA103},      //Refresh Sequencer Mode
	{0x990, 0x06  },    //      = 6               
};



struct mt9d113_back_reg mt9d113_back_regs = {
	.prev_snap_reg_init=&preview_snapshot_mode_reg_settings_init_back[0],
	.prev_snap_reg_init_size=ARRAY_SIZE(preview_snapshot_mode_reg_settings_init_back),	
	.prev_snap_reg_settings = &preview_snapshot_mode_reg_settings_array2_BACK[0],
	.prev_snap_reg_settings_size =ARRAY_SIZE(preview_snapshot_mode_reg_settings_array2_BACK),
	.sunny_lens_reg_settings=&SUNNY_LENS_SHADING_BACK[0],
	.sunny_lens_reg_settings_size=ARRAY_SIZE(SUNNY_LENS_SHADING_BACK),
    	.byd_lens_reg_settings=&BYD_LENS_SHADING_BACK[0],
	.byd_lens_reg_settings_size=ARRAY_SIZE(BYD_LENS_SHADING_BACK),
    	.liteon_lens_reg_settings=&LITEON_LENS_SHADING_BACK[0],
	.liteon_lens_reg_settings_size=ARRAY_SIZE(LITEON_LENS_SHADING_BACK),
    	.byd_sunny_awb_reg_settings=&BYD_SUNNY_AWB_CCM_BACK[0],
	.byd_sunny_awb_reg_settings_size=ARRAY_SIZE(BYD_SUNNY_AWB_CCM_BACK),
    	.liteon_awb_reg_settings=&LITEON_AWB_CCM_BACK[0],
	.liteon_awb_reg_settings_size=ARRAY_SIZE(LITEON_AWB_CCM_BACK),

};
