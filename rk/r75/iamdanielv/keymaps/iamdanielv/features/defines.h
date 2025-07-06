// Copyright 2025 DV (@iamdanielv)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

enum layer_names {
    BASE_LYR,     // 0 - regular qwerty
    HRM_BASE_LYR, // 1 - home row mods qwerty
    EXT_LYR,      // 2 - similar to extend
    KBCTL_LYR,    // 3 - keyboard control layer
    NUM_LYR,      // 4 - numpad
    MEDIA_LYR     // 5 - media keys
};

// clang-format off
/*  LED Matrix
    ESC  F1   F2   F3   F4   F5   F6   F7   F8   F9   F10  F11  F12  DEL  MUTE
    21   20   19   18   17   16   15   14   13   12   11   10   9    8

    GRV  1    2    3    4    5    6    7    8    9    0    -    =    BSPC HOME
    22   23   24   25   26   27   28   29   30   31   32   33   34   35   7

    TAB  Q    W    E    R    T    Y    U    I    O    P    [    ]    BSLS PGUP
    49   48   47   46   45   44   43   42   41   40   39   38   37   36   6

    CAPS A    S    D    F    G    H    J    K    L    ;    '         ENT  PGDN
    50   51   52   53   54   55   56   57   58   59   60   61        62   5

    LSFT Z    X    C    V    B    N    M    ,    .    /    RSFT      UP
    75   74   73   72   71   70   69   68   67   66   65   64        63

    LCTL LG   LALT           SPC            RALT Fn       LEFT      DOWN RGHT
    76   77   78             79             0     1         2         3    4
*/
// clang-format on

// ***************
// * Key Indexes *
// ***************

#define ESC_KI 21
#define BSPC_KI 35

// Modifiers
#define GRV_KI 22
#define TAB_KI 49
#define CAPS_KI 50
#define LEFT_SFT_KI 75
#define LEFT_CTL_KI 76
#define LEFT_WIN_KI 77
#define LEFT_ALT_KI 78
#define SPACE_KI 79
#define FN_KI 1
#define RIGHT_ALT_KI 0
#define RIGHT_SFT_KI 64
#define ENTER_KI 62
#define HOME_KI 7
#define PGUP_KI 6
#define PGDN_KI 5

// Letter Keys
#define A_KI 51
#define B_KI 70
#define C_KI 72
#define D_KI 53
#define E_KI 46
#define F_KI 54
#define G_KI 55
#define H_KI 56
#define I_KI 41
#define J_KI 57
#define K_KI 58
#define L_KI 59
#define M_KI 68
#define N_KI 69
#define O_KI 40
#define P_KI 39
#define Q_KI 48
#define R_KI 45
#define S_KI 52
#define T_KI 44
#define U_KI 42
#define V_KI 71
#define W_KI 47
#define X_KI 73
#define Y_KI 43
#define Z_KI 74

// number keys
#define N1_KI 23
#define N2_KI 24
#define N3_KI 25
#define N4_KI 26
#define N5_KI 27
#define N6_KI 28
#define N7_KI 29
#define N8_KI 30
#define N9_KI 31
#define N0_KI 32

// F Keys
#define FN1_KI 20
#define FN2_KI 19
#define FN3_KI 18
#define FN4_KI 17
#define FN5_KI 16
#define FN6_KI 15
#define FN7_KI 14
#define FN8_KI 13
#define FN9_KI 12
#define FN10_KI 11
#define FN11_KI 10
#define FN12_KI 9

// symbols
#define COMM_KI 67 // ,
#define DOT_KI 66  // .
#define BSLS_KI 36 // \ backslash
#define SLSH_KI 65 // / forwardslash
#define SCLN_KI 60 // ;
#define QUOT_KI 61 // '
#define MINS_KI 33 // -
#define EQL_KI 34  // =

// arrows
#define UP_KI 63
#define LEFT_KI 2
#define DOWN_KI 3
#define RIGHT_KI 4


// ******************************
// * Aliases to simplify keymap *
// ******************************

// *****************
// * Home Row Mods *
// *****************
// based on: https://precondition.github.io/home-row-mods#getting-started-with-home-row-mods-on-qmk

// Left-hand home row mods
#define GUI_A LGUI_T(KC_A)
#define ALT_S LALT_T(KC_S)
#define SFT_D LSFT_T(KC_D)
#define CTL_F LCTL_T(KC_F)

// Right-hand home row mods
#define CTL_J RCTL_T(KC_J)
#define SFT_K RSFT_T(KC_K)
#define ALT_L RALT_T(KC_L)
#define GUI_SCLN RGUI_T(KC_SCLN)

// *******************************
// * More keycodes for HRM Layer *
// *******************************
#define CTLS_C C_S_T(KC_C) // tap: C ; hold: ctl and shift

// Keycodes using the LT(0,KC) trick
#define CTLH_T    LT(0, KC_T) // tap: t; hold: ctl and h
#define CTLR_R    LT(0, KC_R) // tap: r; hold: ctl and r
#define CTLG_G    LT(0, KC_G) // tap: G ; hold: ctl and g
#define LSFT_LLCK LT(0, KC_LSFT) // double tap: Layer lock ; hold: left shift
#define HM_SCLN   LT(0, KC_SCLN) // tap: ; ; hold: Home key
#define END_QUOT  LT(0, KC_QUOT) // tap: ' ; hold: End key
#define ALFT_COMM LT(0, KC_COMM) // tap: , ; hold: alt and left arrow
#define ARGT_DOT  LT(0, KC_DOT) // tap: . ; hold: alt and right arrow
#define MY_ENT    LT(0, KC_ENT) // tap: Enter ; hold: Shift

#define MO_CAPS   TD(TD_MO_CAPS)
#define MO_RALT   TD(TD_RALT)
#define MY_GRV    TD(TD_GRV)

// *************
// * Shortcuts *
// *************
#define MY_UNDO   C(KC_Z)
#define MY_CUT    C(KC_X)
#define MY_COPY   C(KC_INS)
#define MY_PASTE  S(KC_INS)
#define MY_TASK   LCTL(LSFT(KC_ESC))
#define MY_CONS   LCTL(LSFT(KC_GRV))
#define MY_BACK   A(KC_LEFT)
#define MY_FWD    A(KC_RIGHT)
#define MSW_UP    KC_MS_WH_UP
#define MSW_DN    KC_MS_WH_DOWN

// ***********
// * Toggles *
// ***********
#define TG_NUM    TG(NUM_LYR)
#define TG_EXT    TG(EXT_LYR)
#define TG_KBCTL  TG(KBCTL_LYR)
#define TG_MEDIA  TG(MEDIA_LYR)
#define MO_KBCTL  MO(KBCTL_LYR)
#define TD_KB_RST TD(TD_RESET)
#define TD_KB_CLR TD(TD_CLEAR)

// by default, use a regular key layout without home row mods
// the KB_CTL_LYR can toggle the home row mod enabled layer
#define TG_HRM TG(HRM_BASE_LYR)
