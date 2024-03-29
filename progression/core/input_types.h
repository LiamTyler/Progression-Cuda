#pragma once

#include "core/common.h"

namespace Progression {

    enum Key {
        PG_K_A = GLFW_KEY_A,
        PG_K_B = GLFW_KEY_B,
        PG_K_C = GLFW_KEY_C,
        PG_K_D = GLFW_KEY_D,
        PG_K_E = GLFW_KEY_E,
        PG_K_F = GLFW_KEY_F,
        PG_K_G = GLFW_KEY_G,
        PG_K_H = GLFW_KEY_H,
        PG_K_I = GLFW_KEY_I,
        PG_K_J = GLFW_KEY_J,
        PG_K_K = GLFW_KEY_K,
        PG_K_L = GLFW_KEY_L,
        PG_K_M = GLFW_KEY_M,
        PG_K_N = GLFW_KEY_N,
        PG_K_O = GLFW_KEY_O,
        PG_K_P = GLFW_KEY_P,
        PG_K_Q = GLFW_KEY_Q,
        PG_K_R = GLFW_KEY_R,
        PG_K_S = GLFW_KEY_S,
        PG_K_T = GLFW_KEY_T,
        PG_K_U = GLFW_KEY_U,
        PG_K_V = GLFW_KEY_V,
        PG_K_W = GLFW_KEY_W,
        PG_K_X = GLFW_KEY_X,
        PG_K_Y = GLFW_KEY_Y,
        PG_K_Z = GLFW_KEY_Z,

        PG_K_0 = GLFW_KEY_0,
        PG_K_1 = GLFW_KEY_1,
        PG_K_2 = GLFW_KEY_2,
        PG_K_3 = GLFW_KEY_3,
        PG_K_4 = GLFW_KEY_4,
        PG_K_5 = GLFW_KEY_5,
        PG_K_6 = GLFW_KEY_6,
        PG_K_7 = GLFW_KEY_7,
        PG_K_8 = GLFW_KEY_8,
        PG_K_9 = GLFW_KEY_9,

        PG_K_UNKOWN = GLFW_KEY_UNKNOWN,
        PG_K_SPACE = GLFW_KEY_SPACE,
        PG_K_ESC = GLFW_KEY_ESCAPE,
        PG_K_APOSTROPHE = GLFW_KEY_APOSTROPHE,
        PG_K_COMMA = GLFW_KEY_COMMA,
        PG_K_MINUS = GLFW_KEY_MINUS,
        PG_K_PERIOD = GLFW_KEY_PERIOD,
        PG_K_SLASH = GLFW_KEY_SLASH,
        PG_K_SEMICOLON = GLFW_KEY_SEMICOLON,
        PG_K_EQUAL = GLFW_KEY_EQUAL,
        PG_K_LEFT_BRACKET = GLFW_KEY_LEFT_BRACKET,
        PG_K_BACKSLASH = GLFW_KEY_BACKSLASH,
        PG_K_RIGHT_BRACKET = GLFW_KEY_RIGHT_BRACKET,
        PG_K_BACK_TICK = GLFW_KEY_GRAVE_ACCENT,
        PG_K_ENTER = GLFW_KEY_ENTER,
        PG_K_TAB = GLFW_KEY_TAB,
        PG_K_BACKSPACE = GLFW_KEY_BACKSPACE,
        PG_K_INSERT = GLFW_KEY_INSERT,
        PG_K_DELETE = GLFW_KEY_DELETE,
        PG_K_RIGHT = GLFW_KEY_RIGHT,
        PG_K_LEFT = GLFW_KEY_LEFT,
        PG_K_DOWN = GLFW_KEY_DOWN,
        PG_K_UP = GLFW_KEY_UP,
        PG_K_PAGE_UP = GLFW_KEY_PAGE_UP,
        PG_K_PAGE_DOWN = GLFW_KEY_PAGE_DOWN,
        PG_K_HOME = GLFW_KEY_HOME,
        PG_K_END = GLFW_KEY_END,
        PG_K_CAPS_LOCK = GLFW_KEY_CAPS_LOCK,
        PG_K_SCROLL_LOCK = GLFW_KEY_SCROLL_LOCK,
        PG_K_NUM_LOCK = GLFW_KEY_NUM_LOCK,
        PG_K_PRINT_SCREEN = GLFW_KEY_PRINT_SCREEN,
        PG_K_PAUSE = GLFW_KEY_PAUSE,
        PG_K_LEFT_SHIFT = GLFW_KEY_LEFT_SHIFT,
        PG_K_LEFT_CONTROL = GLFW_KEY_LEFT_CONTROL,
        PG_K_LEFT_ALT = GLFW_KEY_LEFT_ALT,
        PG_K_LEFT_SUPER = GLFW_KEY_LEFT_SUPER,
        PG_K_RIGHT_SHIFT = GLFW_KEY_RIGHT_SHIFT,
        PG_K_RIGHT_CONTROL = GLFW_KEY_RIGHT_CONTROL,
        PG_K_RIGHT_ALT = GLFW_KEY_RIGHT_ALT,
        PG_K_RIGHT_SUPER = GLFW_KEY_RIGHT_SUPER,
        PG_K_MENU = GLFW_KEY_MENU,

        PG_K_F1 = GLFW_KEY_F1,
        PG_K_F2 = GLFW_KEY_F2,
        PG_K_F3 = GLFW_KEY_F3,
        PG_K_F4 = GLFW_KEY_F4,
        PG_K_F5 = GLFW_KEY_F5,
        PG_K_F6 = GLFW_KEY_F6,
        PG_K_F7 = GLFW_KEY_F7,
        PG_K_F8 = GLFW_KEY_F8,
        PG_K_F9 = GLFW_KEY_F9,
        PG_K_F10 = GLFW_KEY_F10,
        PG_K_F11 = GLFW_KEY_F11,
        PG_K_F12 = GLFW_KEY_F12,
        PG_K_F13 = GLFW_KEY_F13,
        PG_K_F14 = GLFW_KEY_F14,
        PG_K_F15 = GLFW_KEY_F15,
        PG_K_F16 = GLFW_KEY_F16,
        PG_K_F17 = GLFW_KEY_F17,
        PG_K_F18 = GLFW_KEY_F18,
        PG_K_F19 = GLFW_KEY_F19,
        PG_K_F20 = GLFW_KEY_F20,
        PG_K_F21 = GLFW_KEY_F21,
        PG_K_F22 = GLFW_KEY_F22,
        PG_K_F23 = GLFW_KEY_F23,
        PG_K_F24 = GLFW_KEY_F24,
        PG_K_F25 = GLFW_KEY_F25,

        PG_K_KP_0 = GLFW_KEY_KP_0,
        PG_K_KP_1 = GLFW_KEY_KP_1,
        PG_K_KP_2 = GLFW_KEY_KP_2,
        PG_K_KP_3 = GLFW_KEY_KP_3,
        PG_K_KP_4 = GLFW_KEY_KP_4,
        PG_K_KP_5 = GLFW_KEY_KP_5,
        PG_K_KP_6 = GLFW_KEY_KP_6,
        PG_K_KP_7 = GLFW_KEY_KP_7,
        PG_K_KP_8 = GLFW_KEY_KP_8,
        PG_K_KP_9 = GLFW_KEY_KP_9,

        PG_K_KP_DECIMAL = GLFW_KEY_KP_DECIMAL,
        PG_K_KP_DIVIDE = GLFW_KEY_KP_DIVIDE,
        PG_K_KP_MULTIPLY = GLFW_KEY_KP_MULTIPLY,
        PG_K_KP_SUBTRACT = GLFW_KEY_KP_SUBTRACT,
        PG_K_KP_ADD = GLFW_KEY_KP_ADD,
        PG_K_KP_ENTER = GLFW_KEY_KP_ENTER,
        PG_K_KP_EQUAL = GLFW_KEY_KP_EQUAL
    };

    enum MouseButton {
        PG_MB_1 = GLFW_MOUSE_BUTTON_1,
        PG_MB_2 = GLFW_MOUSE_BUTTON_2,
        PG_MB_3 = GLFW_MOUSE_BUTTON_3,
        PG_MB_4 = GLFW_MOUSE_BUTTON_4,
        PG_MB_5 = GLFW_MOUSE_BUTTON_5,
        PG_MB_6 = GLFW_MOUSE_BUTTON_6,
        PG_MB_7 = GLFW_MOUSE_BUTTON_7,
        PG_MB_8 = GLFW_MOUSE_BUTTON_8,
        PG_MB_LEFT = PG_MB_1,
        PG_MB_RIGHT = PG_MB_2,
        PG_MB_MIDDLE = PG_MB_3,
    };
}