// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_keycodes {
    MACRO_1 = SAFE_RANGE,
    MACRO_2,
    MACRO_3,
    MACRO_4,
    P1 = KC_R,
    P2 = KC_S,
    P3 = KC_N,
    P4 = KC_I,
    P5 = KC_BACKSPACE,
    P6 = KC_A,
    P7 = KC_O,
    P8 = KC_T,
    P9 = KC_E,
    P10 = KC_SPACE,
    P11 = QK_BOOT,
    P12 = MACRO_1,
    P13 = MACRO_2,
    P14 = MACRO_3,
    P15 = MACRO_4,
    CTRLALTDEL = C(A(KC_DEL))
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MACRO_1:
            if (record->event.pressed) {
                SEND_STRING("owen_musser@etownschools.org");
            }
            return false;
        case MACRO_2:
            if (record->event.pressed) {
                SEND_STRING("*C1tyw0k");
            }
            return false;
        case MACRO_3:
            if (record->event.pressed) {
                SEND_STRING("w\t\t630\t11\tw\t\t1130\t3\t");
            }
            return false;
        case MACRO_4:
            if (record->event.pressed) {
                SEND_STRING("MACRO4");
            }
            return false;
    }
    return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        P5 , P4,  P3,  P2,  P1,
        P10, P9,  P8,  P7,  P6,
        P15, P14, P13, P12, P11
    )
};
                                                                                    //A 0000010000
const uint16_t PROGMEM B[]       = {P1, P2, COMBO_END};                             //B 1100000000
const uint16_t PROGMEM C[]       = {P7, P9, COMBO_END};                             //C 0000001010
const uint16_t PROGMEM D[]       = {P6, P9, COMBO_END};                             //D 0000010010
                                                                                    //E 0000000010
const uint16_t PROGMEM F[]       = {P2, P4, COMBO_END};                             //F 0101000000
const uint16_t PROGMEM G[]       = {P1, P4, COMBO_END};                             //G 1001000000
const uint16_t PROGMEM H[]       = {P8, P9, COMBO_END};                             //H 0000000110
                                                                                   //I 0001000000
const uint16_t PROGMEM J[]       = {P3, P6, COMBO_END};                             //J 0010010000
const uint16_t PROGMEM K[]       = {P4, P7, COMBO_END};                             //K 0001001000
const uint16_t PROGMEM L[]       = {P6, P7, COMBO_END};                             //L 0000011000
const uint16_t PROGMEM M[]       = {P1, P9, COMBO_END};                             //M 1000000010
                                                                                    //N 0010000000
                                                                                    //O 0000001000
const uint16_t PROGMEM P[]       = {P2, P3, COMBO_END};                             //P 0110000000
const uint16_t PROGMEM Q[]       = {P6, P8, COMBO_END};                             //Q 0000010100
                                                                                    //R 1000000000
                                                                                    //S 0100000000
                                                                                    //T 0000000100
const uint16_t PROGMEM U[]       = {P7, P8, COMBO_END};                             //U 0000001100
const uint16_t PROGMEM V[]       = {P2, P9, COMBO_END};                             //V 0100000010
const uint16_t PROGMEM W[]       = {P4, P6, COMBO_END};                             //W 0001010000
const uint16_t PROGMEM X[]       = {P1, P8, COMBO_END};                             //X 1000000100
const uint16_t PROGMEM Y[]       = {P3, P4, COMBO_END};                             //Y 0011000000
const uint16_t PROGMEM Z[]       = {P1, P3, COMBO_END};                             //Z 1010000000
const uint16_t PROGMEM N0[]      = {P8, P9, P10, COMBO_END};                        //0 0000000111
const uint16_t PROGMEM N1[]      = {P7, P9, P10, COMBO_END};                        //1 0000001011
const uint16_t PROGMEM N2[]      = {P7, P8, P10, COMBO_END};                        //2 0000001101
const uint16_t PROGMEM N3[]      = {P6, P8, P10, COMBO_END};                        //3 0000010101
const uint16_t PROGMEM N4[]      = {P6, P7, P10, COMBO_END};                        //4 0000011001
const uint16_t PROGMEM N5[]      = {P3, P4, P10, COMBO_END};                        //5 0011000001
const uint16_t PROGMEM N6[]      = {P2, P4, P10, COMBO_END};                        //6 0101000001
const uint16_t PROGMEM N7[]      = {P2, P3, P10, COMBO_END};                        //7 0110000001
const uint16_t PROGMEM N8[]      = {P1, P3, P10, COMBO_END};                        //8 1010000001
const uint16_t PROGMEM N9[]      = {P1, P2, P10, COMBO_END};                        //9 1100000001
const uint16_t PROGMEM F1[]      = {P5, P7, P9, COMBO_END};                         //FN1 0000100110
const uint16_t PROGMEM F2[]      = {P5, P7, P8, COMBO_END};                         //FN2 0000101100
const uint16_t PROGMEM F3[]      = {P5, P6, P8, COMBO_END};                         //FN3 0000110100
const uint16_t PROGMEM F4[]      = {P5, P6, P7, COMBO_END};                         //FN4 0000111000
const uint16_t PROGMEM F5[]      = {P5, P3, P4, COMBO_END};                         //FN5 0011100000
const uint16_t PROGMEM F6[]      = {P5, P2, P4, COMBO_END};                         //FN6 0101100000
const uint16_t PROGMEM F7[]      = {P5, P2, P3, COMBO_END};                         //FN7 0110100000
const uint16_t PROGMEM F8[]      = {P5, P1, P3, COMBO_END};                         //FN8 1010100000
const uint16_t PROGMEM F9[]      = {P5, P1, P2, COMBO_END};                         //FN9 1100100000
const uint16_t PROGMEM F10[]     = {P5, P7, P8, P9, COMBO_END};                     //FN10 0000101110
const uint16_t PROGMEM F11[]     = {P5, P6, P8, P9, COMBO_END};                     //FN11 0000110110
const uint16_t PROGMEM F12[]     = {P5, P6, P7, P9, COMBO_END};                     //FN12 0000111010
const uint16_t PROGMEM SLASH[]   = {P2, P8, COMBO_END};                             /// 0100000100
const uint16_t PROGMEM BSLASH[]  = {P10, P2, P8, COMBO_END};                         //\ 0100100100
const uint16_t PROGMEM PIPE[]    = {P2, P8, P5, COMBO_END};                        //| 0100000101
const uint16_t PROGMEM MINUS[]   = {P3, P7, COMBO_END};                             //- 0010001000
const uint16_t PROGMEM UNDER[]   = {P10, P3, P7, COMBO_END};                         //_ 0010101000
const uint16_t PROGMEM PERC[]    = {P3, P7, P5, COMBO_END};                        //% 0010001001
const uint16_t PROGMEM COLON[]   = {P1, P7, COMBO_END};                             //: 1000001000
const uint16_t PROGMEM SEMI[]    = {P10, P1, P7, COMBO_END};                         //; 1000101000
const uint16_t PROGMEM QUEST[]   = {P4, P8, COMBO_END};                             //? 0001000100
const uint16_t PROGMEM EXCLAIM[] = {P10, P4, P8, COMBO_END};                         //! 0001100100
const uint16_t PROGMEM COMMA[]   = {P3, P9, COMBO_END};                             //, 0010000010
const uint16_t PROGMEM DOT[]     = {P3, P9, P10, COMBO_END};                         //. 0010100010
const uint16_t PROGMEM TILDE[]   = {P9, P3, P5, COMBO_END};                        //~ 0010000011
const uint16_t PROGMEM DQUOTE[]  = {P2, P6, P10, COMBO_END};                             //" 0100010000
const uint16_t PROGMEM QUOTE[]   = {P2, P6, COMBO_END};                         //' 0100110000
const uint16_t PROGMEM GRAVE[]   = {P2, P6, P5, COMBO_END};                        //' 0100010001
const uint16_t PROGMEM HASH[]    = {P1, P4, P5, COMBO_END};                        //# 1001000001
const uint16_t PROGMEM AT[]      = {P6, P9, P5, COMBO_END};                        //@ 0000010011
const uint16_t PROGMEM CIRC[]    = {P1, P8, P5, COMBO_END};                        //^ 1000000101
const uint16_t PROGMEM PLUS[]    = {P4, P7, P5, COMBO_END};                        //+ 0001001001
const uint16_t PROGMEM AST[]     = {P2, P9, P5, COMBO_END};                        //* 0100000011
const uint16_t PROGMEM EQL[]     = {P3, P6, P5, COMBO_END};                        //= 0010010001
const uint16_t PROGMEM DOLL[]    = {P1, P9, P5, COMBO_END};                        //$ 1000000011
const uint16_t PROGMEM AMP[]     = {P4, P6, P5, COMBO_END};                        //& 0001010001
const uint16_t PROGMEM GT[]      = {P1, P5, COMBO_END};                            //> 1000000001
const uint16_t PROGMEM LT[]      = {P6, P5, COMBO_END};                            //< 0000010001
const uint16_t PROGMEM RCBR[]    = {P2, P5, COMBO_END};                            //} 0100000001
const uint16_t PROGMEM LCBR[]    = {P7, P5, COMBO_END};                            //} 0000001001
const uint16_t PROGMEM RCBRC[]   = {P3, P5, COMBO_END};                            //] 0010000001
const uint16_t PROGMEM LCBRC[]   = {P8, P5, COMBO_END};                            //[ 0000000101
const uint16_t PROGMEM RPRN[]    = {P4, P5, COMBO_END};                            //) 0001000001
const uint16_t PROGMEM LPRN[]    = {P9, P5, COMBO_END};                            //( 0000000011
const uint16_t PROGMEM GUI[]     = {P4, P9, COMBO_END};                             //GUI  0001000010
const uint16_t PROGMEM CTRL[]    = {P3, P8, COMBO_END};                             //CTRL  0010000100
const uint16_t PROGMEM ALT[]     = {P2, P7, COMBO_END};                             //ALT  0100001000
const uint16_t PROGMEM SFT[]     = {P1, P6, COMBO_END};                             //SHIFT  1000010000
const uint16_t PROGMEM ENTER[]   = {P7, P8, P9, COMBO_END};                         //ENTER 0000001110
const uint16_t PROGMEM TAB[]     = {P2, P3, P4, COMBO_END};                         //TAB 0111000000
const uint16_t PROGMEM UP[]      =  {P3, P10, COMBO_END};
const uint16_t PROGMEM DOWN[]    =  {P8, P10, COMBO_END};
const uint16_t PROGMEM LEFT[]    =  {P7, P10, COMBO_END};
const uint16_t PROGMEM RIGHT[]   =  {P9, P10, COMBO_END};
const uint16_t PROGMEM ESC[]     =  {P1, P10, COMBO_END};
const uint16_t PROGMEM CAPS[]    =  {P6, P10, COMBO_END};

combo_t key_combos[] = {
    //A
    COMBO(B, KC_B),
    COMBO(C, KC_C),
    COMBO(D, KC_D),
    //E
    COMBO(F, KC_F),
    COMBO(G, KC_G),
    COMBO(H, KC_H),
    //I
    COMBO(J, KC_J),
    COMBO(K, KC_K),
    COMBO(L, KC_L),
    COMBO(M, KC_M),
    //N
    //O
    COMBO(P, KC_P),
    COMBO(Q, KC_Q),
    //R
    //S
    //T
    COMBO(U, KC_U),
    COMBO(V, KC_V),
    COMBO(W, KC_W),
    COMBO(X, KC_X),
    COMBO(Y, KC_Y),
    COMBO(Z, KC_Z),
    COMBO(N0, KC_0),
    COMBO(N1, KC_1),
    COMBO(N2, KC_2),
    COMBO(N3, KC_3),
    COMBO(N4, KC_4),
    COMBO(N5, KC_5),
    COMBO(N6, KC_6),
    COMBO(N7, KC_7),
    COMBO(N8, KC_8),
    COMBO(N9, KC_9),
    COMBO(F1, KC_F1),
    COMBO(F2, KC_F2),
    COMBO(F3, KC_F3),
    COMBO(F4, KC_F4),
    COMBO(F5, KC_F5),
    COMBO(F6, KC_F6),
    COMBO(F7, KC_F7),
    COMBO(F8, KC_F8),
    COMBO(F9, KC_F9),
    COMBO(F10, KC_F10),
    COMBO(F11, KC_F11),
    COMBO(F12, KC_F12),
    COMBO(SLASH, KC_SLASH),
    COMBO(BSLASH, KC_BACKSLASH),
    COMBO(PIPE, KC_PIPE),
    COMBO(MINUS, KC_MINUS),
    COMBO(UNDER, KC_UNDERSCORE),
    COMBO(PERC, KC_PERCENT),
    COMBO(COLON, KC_COLON),
    COMBO(SEMI, KC_SEMICOLON),
    COMBO(QUEST, KC_QUESTION),
    COMBO(EXCLAIM, KC_EXCLAIM),
    COMBO(COMMA, KC_COMMA),
    COMBO(DOT, KC_DOT),
    COMBO(TILDE, KC_TILDE),
    COMBO(QUOTE, KC_QUOTE),
    COMBO(DQUOTE, KC_DOUBLE_QUOTE),
    COMBO(GRAVE, KC_GRAVE),
    COMBO(HASH, KC_HASH),
    COMBO(AT, KC_AT),
    COMBO(CIRC, KC_CIRC),
    COMBO(PLUS, KC_PPLS),
    COMBO(AST, KC_PAST),
    COMBO(EQL, KC_PEQL),
    COMBO(DOLL, KC_DOLLAR),
    COMBO(AMP, KC_AMPR),
    COMBO(GT, KC_GT),
    COMBO(LT, KC_LT),
    COMBO(RCBR, KC_RCBR),
    COMBO(LCBR, KC_LCBR),
    COMBO(RCBRC, KC_RBRC),
    COMBO(LCBRC, KC_LBRC),
    COMBO(RPRN, KC_RPRN),
    COMBO(LPRN, KC_LPRN),

    COMBO(GUI, OSM(MOD_LGUI)),
    COMBO(CTRL, OSM(MOD_LCTL)),
    COMBO(ALT, OSM(MOD_HYPR)),
    COMBO(SFT, OSM(MOD_LSFT)),
    COMBO(ENTER, KC_ENTER),
    COMBO(TAB, KC_TAB),
    COMBO(UP, KC_UP),
    COMBO(DOWN, KC_DOWN),
    COMBO(LEFT, KC_LEFT),
    COMBO(RIGHT, KC_RIGHT),
    COMBO(ESC, KC_ESC),
    COMBO(CAPS, KC_CAPS)
};

