/* SPDX-License-Identifier: GPL-2.0-only WITH Linux-syscall-note */
/*
 * Input event codes
 *
 *    *** IMPORTANT ***
 * This file is not only included from C-code but also from devicetree source
 * files. As such this file MUST only contain comments and defines.
 *
 * Copyright (c) 1999-2002 Vojtech Pavlik
 * Copyright (c) 2015 Hans de Goede <hdegoede@redhat.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by
 * the Free Software Foundation.
 */
#ifndef _UAPI_INPUT_EVENT_CODES_H
#define _UAPI_INPUT_EVENT_CODES_H

/*
 * Device properties and quirks
 */

#define INPUT_PROP_POINTER		0x00	/* needs a pointer */
#define INPUT_PROP_DIRECT		0x01	/* direct input devices */
#define INPUT_PROP_BUTTONPAD		0x02	/* has button(s) under pad */
#define INPUT_PROP_SEMI_MT		0x03	/* touch rectangle only */
#define INPUT_PROP_TOPBUTTONPAD		0x04	/* softbuttons at top of pad */
#define INPUT_PROP_POINTING_STICK	0x05	/* is a pointing stick */
#define INPUT_PROP_ACCELEROMETER	0x06	/* has accelerometer */

#define INPUT_PROP_MAX			0x1f
#define INPUT_PROP_CNT			(INPUT_PROP_MAX + 1)

/*
 * Event types
 */

#define EV_SYN			0x00
#define EV_KEY			0x01
#define EV_REL			0x02
#define EV_ABS			0x03
#define EV_MSC			0x04
#define EV_SW			0x05
#define EV_LED			0x11
#define EV_SND			0x12
#define EV_REP			0x14
#define EV_FF			0x15
#define EV_PWR			0x16
#define EV_FF_STATUS		0x17
#define EV_MAX			0x1f
#define EV_CNT			(EV_MAX+1)

/*
 * Synchronization events.
 */

#define SYN_REPORT		0
#define SYN_CONFIG		1
#define SYN_MT_REPORT		2
#define SYN_DROPPED		3
#define SYN_MAX			0xf
#define SYN_CNT			(SYN_MAX+1)

/*
 * Keys and buttons
 *
 * Most of the keys/buttons are modeled after USB HUT 1.12
 * (see http://www.usb.org/developers/hidpage).
 * Abbreviations in the comments:
 * AC - Application Control
 * AL - Application Launch Button
 * SC - System Control
 */

#define KEY_RESERVED		0
#define KEY_ESC			1
#define KEY_1			2
#define KEY_2			3
#define KEY_3			4
#define KEY_4			5
#define KEY_5			6
#define KEY_6			7
#define KEY_7			8
#define KEY_8			9
#define KEY_9			10
#define KEY_0			11
#define KEY_MINUS		12
#define KEY_EQUAL		13
#define KEY_BACKSPACE		14
#define KEY_TAB			15
#define KEY_Q			16
#define KEY_W			17
#define KEY_E			18
#define KEY_R			19
#define KEY_T			20
#define KEY_Y			21
#define KEY_U			22
#define KEY_I			23
#define KEY_O			24
#define KEY_P			25
#define KEY_LEFTBRACE		26
#define KEY_RIGHTBRACE		27
#define KEY_ENTER		28
#define KEY_LEFTCTRL		29
#define KEY_A			30
#define KEY_S			31
#define KEY_D			32
#define KEY_F			33
#define KEY_G			34
#define KEY_H			35
#define KEY_J			36
#define KEY_K			37
#define KEY_L			38
#define KEY_SEMICOLON		39
#define KEY_APOSTROPHE		40
#define KEY_GRAVE		41
#define KEY_LEFTSHIFT		42
#define KEY_BACKSLASH		43
#define KEY_Z			44
#define KEY_X			45
#define KEY_C			46
#define KEY_V			47
#define KEY_B			48
#define KEY_N			49
#define KEY_M			50
#define KEY_COMMA		51
#define KEY_DOT			52
#define KEY_SLASH		53
#define KEY_RIGHTSHIFT		54
#define KEY_KPASTERISK		55
#define KEY_LEFTALT		56
#define KEY_SPACE		57
#define KEY_CAPSLOCK		58
#define KEY_F1			59
#define KEY_F2			60
#define KEY_F3			61
#define KEY_F4			62
#define KEY_F5			63
#define KEY_F6			64
#define KEY_F7			65
#define KEY_F8			66
#define KEY_F9			67
#define KEY_F10			68
#define KEY_NUMLOCK		69
#define KEY_SCROLLLOCK		70
#define KEY_KP7			71
#define KEY_KP8			72
#define KEY_KP9			73
#define KEY_KPMINUS		74
#define KEY_KP4			75
#define KEY_KP5			76
#define KEY_KP6			77
#define KEY_KPPLUS		78
#define KEY_KP1			79
#define KEY_KP2			80
#define KEY_KP3			81
#define KEY_KP0			82
#define KEY_KPDOT		83

#define KEY_ZENKAKUHANKAKU	85
#define KEY_102ND		86
#define KEY_F11			87
#define KEY_F12			88
#define KEY_RO			89
#define KEY_KATAKANA		90
#define KEY_HIRAGANA		91
#define KEY_HENKAN		92
#define KEY_KATAKANAHIRAGANA	93
#define KEY_MUHENKAN		94
#define KEY_KPJPCOMMA		95
#define KEY_KPENTER		96
#define KEY_RIGHTCTRL		97
#define KEY_KPSLASH		98
#define KEY_SYSRQ		99
#define KEY_RIGHTALT		100
#define KEY_LINEFEED		101
#define KEY_HOME		102
#define KEY_UP			103
#define KEY_PAGEUP		104
#define KEY_LEFT		105
#define KEY_RIGHT		106
#define KEY_END			107
#define KEY_DOWN		108
#define KEY_PAGEDOWN		109
#define KEY_INSERT		110
#define KEY_DELETE		111
#define KEY_MACRO		112
#define KEY_MUTE		113
#define KEY_VOLUMEDOWN		114
#define KEY_VOLUMEUP		115
#define KEY_POWER		116	/* SC System Power Down */
#define KEY_KPEQUAL		117
#define KEY_KPPLUSMINUS		118
#define KEY_PAUSE		119
#define KEY_SCALE		120	/* AL Compiz Scale (Expose) */

#define KEY_KPCOMMA		121
#define KEY_HANGEUL		122
#define KEY_HANGUEL		KEY_HANGEUL
#define KEY_HANJA		123
#define KEY_YEN			124
#define KEY_LEFTMETA		125
#define KEY_RIGHTMETA		126
#define KEY_COMPOSE		127

#define KEY_STOP		128	/* AC Stop */
#define KEY_AGAIN		129
#define KEY_PROPS		130	/* AC Properties */
#define KEY_UNDO		131	/* AC Undo */
#define KEY_FRONT		132
#define KEY_COPY		133	/* AC Copy */
#define KEY_OPEN		134	/* AC Open */
#define KEY_PASTE		135	/* AC Paste */
#define KEY_FIND		136	/* AC Search */
#define KEY_CUT			137	/* AC Cut */
#define KEY_HELP		138	/* AL Integrated Help Center */
#define KEY_MENU		139	/* Menu (show menu) */
#define KEY_CALC		140	/* AL Calculator */
#define KEY_SETUP		141
#define KEY_SLEEP		142	/* SC System Sleep */
#define KEY_WAKEUP		143	/* System Wake Up */
#define KEY_FILE		144	/* AL Local Machine Browser */
#define KEY_SENDFILE		145
#define KEY_DELETEFILE		146
#define KEY_XFER		147
#define KEY_PROG1		148
#define KEY_PROG2		149
#define KEY_WWW			150	/* AL Internet Browser */
#define KEY_MSDOS		151
#define KEY_COFFEE		152	/* AL Terminal Lock/Screensaver */
#define KEY_SCREENLOCK		KEY_COFFEE
#define KEY_ROTATE_DISPLAY	153	/* Display orientation for e.g. tablets */
#define KEY_DIRECTION		KEY_ROTATE_DISPLAY
#define KEY_CYCLEWINDOWS	154
#define KEY_MAIL		155
#define KEY_BOOKMARKS		156	/* AC Bookmarks */
#define KEY_COMPUTER		157
#define KEY_BACK		158	/* AC Back */
#define KEY_FORWARD		159	/* AC Forward */
#define KEY_CLOSECD		160
#define KEY_EJECTCD		161
#define KEY_EJECTCLOSECD	162
#define KEY_NEXTSONG		163
#define KEY_PLAYPAUSE		164
#define KEY_PREVIOUSSONG	165
#define KEY_STOPCD		166
#define KEY_RECORD		167
#define KEY_REWIND		168
#define KEY_PHONE		169	/* Media Select Telephone */
#define KEY_ISO			170
#define KEY_CONFIG		171	/* AL Consumer Control Configuration */
#define KEY_HOMEPAGE		172	/* AC Home */
#define KEY_REFRESH		173	/* AC Refresh */
#define KEY_EXIT		174	/* AC Exit */
#define KEY_MOVE		175
#define KEY_EDIT		176
#define KEY_SCROLLUP		177
#define KEY_SCROLLDOWN		178
#define KEY_KPLEFTPAREN		179
#define KEY_KPRIGHTPAREN	180
#define KEY_NEW			181	/* AC New */
#define KEY_REDO		182	/* AC Redo/Repeat */

#define KEY_F13			183
#define KEY_F14			184
#define KEY_F15			185
#define KEY_F16			186
#define KEY_F17			187
#define KEY_F18			188
#define KEY_F19			189
#define KEY_F20			190
#define KEY_F21			191
#define KEY_F22			192
#define KEY_F23			193
#define KEY_F24			194

#define KEY_PLAYCD		200
#define KEY_PAUSECD		201
#define KEY_PROG3		202
#define KEY_PROG4		203
#define KEY_ALL_APPLICATIONS	204	/* AC Desktop Show All Applications */
#define KEY_DASHBOARD		KEY_ALL_APPLICATIONS
#define KEY_SUSPEND		205
#define KEY_CLOSE		206	/* AC Close */
#define KEY_PLAY		207
#define KEY_FASTFORWARD		208
#define KEY_BASSBOOST		209
#define KEY_PRINT		210	/* AC Print */
#define KEY_HP			211
#define KEY_CAMERA		212
#define KEY_SOUND		213
#define KEY_QUESTION		214
#define KEY_EMAIL		215
#define KEY_CHAT		216
#define KEY_SEARCH		217
#define KEY_CONNECT		218
#define KEY_FINANCE		219	/* AL Checkbook/Finance */
#define KEY_SPORT		220
#define KEY_SHOP		221
#define KEY_ALTERASE		222
#define KEY_CANCEL		223	/* AC Cancel */
#define KEY_BRIGHTNESSDOWN	224
#define KEY_BRIGHTNESSUP	225
#define KEY_MEDIA		226

#define KEY_SWITCHVIDEOMODE	227	/* Cycle between available video
					   outputs (Monitor/LCD/TV-out/etc) */
#define KEY_KBDILLUMTOGGLE	228
#define KEY_KBDILLUMDOWN	229
#define KEY_KBDILLUMUP		230

#define KEY_SEND		231	/* AC Send */
#define KEY_REPLY		232	/* AC Reply */
#define KEY_FORWARDMAIL		233	/* AC Forward Msg */
#define KEY_SAVE		234	/* AC Save */
#define KEY_DOCUMENTS		235

#define KEY_BATTERY		236

#define KEY_BLUETOOTH		237
#define KEY_WLAN		238
#define KEY_UWB			239

#define KEY_UNKNOWN		240

#define KEY_VIDEO_NEXT		241	/* drive next video source */
#define KEY_VIDEO_PREV		242	/* drive previous video source */
#define KEY_BRIGHTNESS_CYCLE	243	/* brightness up, after max is min */
#define KEY_BRIGHTNESS_AUTO	244	/* Set Auto Brightness: manual
					  brightness control is off,
					  rely on ambient */
#define KEY_BRIGHTNESS_ZERO	KEY_BRIGHTNESS_AUTO
#define KEY_DISPLAY_OFF		245	/* display device to off state */

#define KEY_WWAN		246	/* Wireless WAN (LTE, UMTS, GSM, etc.) */
#define KEY_WIMAX		KEY_WWAN
#define KEY_RFKILL		247	/* Key that controls all radios */

#define KEY_MICMUTE		248	/* Mute / unmute the microphone */

/* Code 255 is reserved for special needs of AT keyboard driver */

#define BTN_MISC		0x100
#define BTN_0			0x100
#define BTN_1			0x101
#define BTN_2			0x102
#define BTN_3			0x103
#define BTN_4			0x104
#define BTN_5			0x105
#define BTN_6			0x106
#define BTN_7			0x107
#define BTN_8			0x108
#define BTN_9			0x109

#define BTN_MOUSE		0x110
#define BTN_LEFT		0x110
#define BTN_RIGHT		0x111
#define BTN_MIDDLE		0x112
#define BTN_SIDE		0x113
#define BTN_EXTRA		0x114
#define BTN_FORWARD		0x115
#define BTN_BACK		0x116
#define BTN_TASK		0x117

#define BTN_JOYSTICK		0x120
#define BTN_TRIGGER		0x120
#define BTN_THUMB		0x121
#define BTN_THUMB2		0x122
#define BTN_TOP			0x123
#define BTN_TOP2		0x124
#define BTN_PINKIE		0x125
#define BTN_BASE		0x126
#define BTN_BASE2		0x127
#define BTN_BASE3		0x128
#define BTN_BASE4		0x129
#define BTN_BASE5		0x12a
#define BTN_BASE6		0x12b
#define BTN_DEAD		0x12f

#define BTN_GAMEPAD		0x130
#define BTN_SOUTH		0x130
#define BTN_A			BTN_SOUTH
#define BTN_EAST		0x131
#define BTN_B			BTN_EAST
#define BTN_C			0x132
#define BTN_NORTH		0x133
#define BTN_X			BTN_NORTH
#define BTN_WEST		0x134
#define BTN_Y			BTN_WEST
#define BTN_Z			0x135
#define BTN_TL			0x136
#define BTN_TR			0x137
#define BTN_TL2			0x138
#define BTN_TR2			0x139
#define BTN_SELECT		0x13a
#define BTN_START		0x13b
#define BTN_MODE		0x13c
#define BTN_THUMBL		0x13d
#define BTN_THUMBR		0x13e
