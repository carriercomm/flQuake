/*
Copyright (C) 1996-1997 Id Software, Inc.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/

//
// these are the key numbers that should be passed to Key_Event
//
#define	K_TAB			9
#define	K_ENTER			13
#define	K_ESCAPE		27
#define	K_SPACE			32

// normal keys should be passed as lowercased ascii

#define	K_BACKSPACE		127
#define	K_UPARROW		128
#define	K_DOWNARROW		129
#define	K_LEFTARROW		130
#define	K_RIGHTARROW	131

#define	K_ALT			132
#define	K_CTRL			133
#define	K_SHIFT			134
#define	K_F1			135
#define	K_F2			136
#define	K_F3			137
#define	K_F4			138
#define	K_F5			139
#define	K_F6			140
#define	K_F7			141
#define	K_F8			142
#define	K_F9			143
#define	K_F10			144
#define	K_F11			145
#define	K_F12			146
#define	K_INS			147
#define	K_DEL			148
#define	K_PGDN			149
#define	K_PGUP			150
#define	K_HOME			151
#define	K_END			152

#define K_PAUSE			255

//
// mouse buttons generate virtual keys
//
#define	K_MOUSE1		200
#define	K_MOUSE2		201
#define	K_MOUSE3		202

//
// joystick buttons
//
#define	K_JOY1			203
#define	K_JOY2			204
#define	K_JOY3			205
#define	K_JOY4			206

//
// aux keys are for multi-buttoned joysticks to generate so they can use
// the normal binding process
//
#define	K_AUX1			207
#define	K_AUX2			208
#define	K_AUX3			209
#define	K_AUX4			210
#define	K_AUX5			211
#define	K_AUX6			212
#define	K_AUX7			213
#define	K_AUX8			214
#define	K_AUX9			215
#define	K_AUX10			216
#define	K_AUX11			217
#define	K_AUX12			218
#define	K_AUX13			219
#define	K_AUX14			220
#define	K_AUX15			221
#define	K_AUX16			222
#define	K_AUX17			223
#define	K_AUX18			224
#define	K_AUX19			225
#define	K_AUX20			226
#define	K_AUX21			227
#define	K_AUX22			228
#define	K_AUX23			229
#define	K_AUX24			230
#define	K_AUX25			231
#define	K_AUX26			232
#define	K_AUX27			233
#define	K_AUX28			234
#define	K_AUX29			235
#define	K_AUX30			236
#define	K_AUX31			237
#define	K_AUX32			238

// JACK: Intellimouse(c) Mouse Wheel Support

#define K_MWHEELUP		251 //239 // edited
#define K_MWHEELDOWN	252 //240 // edited

/* Extra mouse buttons */
#define K_MOUSE4		241
#define K_MOUSE5		242
#define K_MOUSE6		243
#define K_MOUSE7		244
#define K_MOUSE8		245

// BlackAura (09-12-2002) - Dreamcast Controller - begin
#ifdef _arch_dreamcast
#define K_DC_A			203
#define K_DC_B			204
#define K_DC_C			205
#define K_DC_D			206
#define K_DC_X			207
#define K_DC_Y			208
#define K_DC_Z			209
#define K_DC_START		210
#define K_DPAD1_UP		211
#define K_DPAD1_DOWN	212
#define K_DPAD1_LEFT	213
#define K_DPAD1_RIGHT	214
#define K_DPAD2_UP		215
#define K_DPAD2_DOWN	216
#define K_DPAD2_LEFT	217
#define K_DPAD2_RIGHT	218
// Analog triggers
#define K_DC_LTRIG		219
#define K_DC_RTRIG		220
// begin
// Analog stick
#define K_DC_AXISU		221
#define K_DC_AXISD		222
#define K_DC_AXISL		223
#define K_DC_AXISR		224
// Second controller
#define K_DC2_A			225
#define K_DC2_B			226
#define K_DC2_C			227
#define K_DC2_D			228
#define K_DC2_X			229
#define K_DC2_Y			230
#define K_DC2_Z			231
#define K_DC2_START		232
#define K_DC2_DPAD1_UP		233
#define K_DC2_DPAD1_DOWN	234
#define K_DC2_DPAD1_LEFT	235
#define K_DC2_DPAD1_RIGHT	236
#define K_DC2_DPAD2_UP		237
#define K_DC2_DPAD2_DOWN	238
#define K_DC2_DPAD2_LEFT	239
#define K_DC2_DPAD2_RIGHT	240
// Analog triggers
#define K_DC2_LTRIG		241
#define K_DC2_RTRIG		242
// Analog stick
#define K_DC2_AXISU		243
#define K_DC2_AXISD		244
#define K_DC2_AXISL		245
#define K_DC2_AXISR		246
// end
#else
// BlackAura (09-12-2002) - Dreamcast Controller - end

// for testing purposes - begin
#if 1
#define	K_DC_A			K_JOY1
#define	K_DC_B			K_JOY2
#define K_DC_C			K_JOY3
#define	K_DC_X			K_JOY4
#define	K_DC_Y			K_AUX5
#define K_DC_Z			K_AUX6
#define	K_DC_LTRIG		K_AUX7
#define	K_DC_RTRIG		K_AUX8
#define	K_DC_START		K_AUX10
#define	K_DPAD1_LEFT	K_AUX13
#define	K_DPAD1_DOWN	K_AUX14
#define	K_DPAD1_RIGHT	K_AUX15
#define	K_DPAD1_UP		K_AUX16
#endif
#endif
// for testing purposes - end

//Edited qrack command line begin
#define	MAXCMDLINE		256

//Edited qrack command line end

typedef enum {key_game, key_console, key_message, key_menu} keydest_t;

extern qboolean shift_function; // function shift
extern keydest_t	key_dest;
extern char *keybindings[256];
extern char *shiftbindings[256]; // function shift
extern	int		key_repeats[256];
extern	int		key_count;			// incremented every key event
extern	int		key_lastpress;

void Key_Event(int key, qboolean down);
void Key_Init(void);
void Key_WriteBindings(FILE *f);
void Key_SetBinding(int keynum, char *binding);
void Key_SetShiftBinding(int keynum, char *binding);  // function shift
void Key_ClearStates(void);
int Key_StringToKeynum(char *str);  // Edited

// on-screen keyboard - begin
int M_OnScreenKeyboard_Key(int key);
void M_OnScreenKeyboard_Reset(void);
// on-screen keyboard - end
