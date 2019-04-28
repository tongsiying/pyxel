#ifndef PYXELCORE_CONSTANTS_H_
#define PYXELCORE_CONSTANTS_H_

#include <cstdint>

namespace pyxelcore {

const char VERSION[] = "1.1.0";

const char DEFAULT_CAPTION[] = "Pyxel";
const int32_t DEFAULT_SCALE = 0;
const int32_t DEFAULT_FPS = 30;
const int32_t DEFAULT_BORDER_WIDTH = 0;
const int32_t DEFAULT_BORDER_COLOR = 0x101018;

const int32_t DEFAULT_PALETTE_00 = 0x000000;
const int32_t DEFAULT_PALETTE_01 = 0x1D2B53;
const int32_t DEFAULT_PALETTE_02 = 0x7E2553;
const int32_t DEFAULT_PALETTE_03 = 0x008751;
const int32_t DEFAULT_PALETTE_04 = 0xAB5236;
const int32_t DEFAULT_PALETTE_05 = 0x5F574F;
const int32_t DEFAULT_PALETTE_06 = 0xC2C3C7;
const int32_t DEFAULT_PALETTE_07 = 0xFFF1E8;
const int32_t DEFAULT_PALETTE_08 = 0xFF004D;
const int32_t DEFAULT_PALETTE_09 = 0xFFA300;
const int32_t DEFAULT_PALETTE_10 = 0xFFEC27;
const int32_t DEFAULT_PALETTE_11 = 0x00E436;
const int32_t DEFAULT_PALETTE_12 = 0x29ADFF;
const int32_t DEFAULT_PALETTE_13 = 0x83769C;
const int32_t DEFAULT_PALETTE_14 = 0xFF77A8;
const int32_t DEFAULT_PALETTE_15 = 0xFFCCAA;

const int32_t DEFAULT_PALETTE[] = {
    DEFAULT_PALETTE_00, DEFAULT_PALETTE_01, DEFAULT_PALETTE_02,
    DEFAULT_PALETTE_03, DEFAULT_PALETTE_04, DEFAULT_PALETTE_05,
    DEFAULT_PALETTE_06, DEFAULT_PALETTE_07, DEFAULT_PALETTE_08,
    DEFAULT_PALETTE_09, DEFAULT_PALETTE_10, DEFAULT_PALETTE_11,
    DEFAULT_PALETTE_12, DEFAULT_PALETTE_13, DEFAULT_PALETTE_14,
    DEFAULT_PALETTE_15,
};

const int32_t COLOR_COUNT = 16;

const int32_t IMAGE_COUNT = 4;
const int32_t IMAGE_WIDTH = 256;
const int32_t IMAGE_HEIGHT = 256;
const int32_t IMAGE_FOR_SYSTEM = IMAGE_COUNT - 1;

const int32_t TILEMAP_COUNT = 8;
const int32_t TILEMAP_WIDTH = 256;
const int32_t TILEMAP_HEIGHT = 256;

const int32_t FONT_MIN_CODE = 32;
const int32_t FONT_MAX_CODE = 127;
const int32_t FONT_WIDTH = 4;
const int32_t FONT_HEIGHT = 6;
const int32_t FONT_ROW_COUNT = IMAGE_WIDTH / FONT_WIDTH;

const int32_t MOUSE_CURSOR_IMAGE_X = 0;
const int32_t MOUSE_CURSOR_IMAGE_Y = 16;
const int32_t MOUSE_CURSOR_WIDTH = 8;
const int32_t MOUSE_CURSOR_HEIGHT = 8;

const int32_t APP_SCREEN_MAX_SIZE = 255;
const int32_t APP_SCREEN_SCALE_CUTDOWN = 2;
const int32_t APP_SCREEN_SCALE_MINIMUM = 2;
const int32_t APP_GIF_CAPTURE_COUNT = 900;
const int32_t APP_GIF_CAPTURE_SCALE = 2;
const int32_t APP_MEASURE_FRAME_COUNT = 10;

const int32_t AUDIO_SAMPLE_RATE = 22050;
const int32_t AUDIO_BLOCK_SIZE = 2205;
const int32_t AUDIO_CHANNEL_COUNT = 4;
const int32_t AUDIO_SOUND_COUNT = 65;
const int32_t AUDIO_MUSIC_COUNT = 8;
const int32_t AUDIO_ONE_SPEED = AUDIO_SAMPLE_RATE / 120;
const int32_t AUDIO_ONE_VOLUME = 0x7FFF / (AUDIO_CHANNEL_COUNT * 7);

const int32_t SOUND_TONE_TRIANGLE = 0;
const int32_t SOUND_TONE_SQUARE = 1;
const int32_t SOUND_TONE_PULSE = 2;
const int32_t SOUND_TONE_NOISE = 3;
const int32_t SOUND_EFFECT_NONE = 0;
const int32_t SOUND_EFFECT_SLIDE = 1;
const int32_t SOUND_EFFECT_VIBRATO = 2;
const int32_t SOUND_EFFECT_FADEOUT = 3;

const int32_t SOUND_NOTE_C = 0;
const int32_t SOUND_NOTE_D = 2;
const int32_t SOUND_NOTE_E = 4;
const int32_t SOUND_NOTE_F = 5;
const int32_t SOUND_NOTE_G = 7;
const int32_t SOUND_NOTE_A = 9;
const int32_t SOUND_NOTE_B = 11;

enum {
  KEY_SPACE,
  KEY_APOSTROPHE,
  KEY_COMMA,
  KEY_MINUS,
  KEY_PERIOD,
  KEY_SLASH,
  KEY_0,
  KEY_1,
  KEY_2,
  KEY_3,
  KEY_4,
  KEY_5,
  KEY_6,
  KEY_7,
  KEY_8,
  KEY_9,
  KEY_SEMICOLON,
  KEY_EQUAL,
  KEY_A,
  KEY_B,
  KEY_C,
  KEY_D,
  KEY_E,
  KEY_F,
  KEY_G,
  KEY_H,
  KEY_I,
  KEY_J,
  KEY_K,
  KEY_L,
  KEY_M,
  KEY_N,
  KEY_O,
  KEY_P,
  KEY_Q,
  KEY_R,
  KEY_S,
  KEY_T,
  KEY_U,
  KEY_V,
  KEY_W,
  KEY_X,
  KEY_Y,
  KEY_Z,
  KEY_LEFT_BRACKET,
  KEY_BACKSLASH,
  KEY_RIGHT_BRACKET,
  KEY_GRAVE_ACCENT,
  KEY_ESCAPE,
  KEY_ENTER,
  KEY_TAB,
  KEY_BACKSPACE,
  KEY_INSERT,
  KEY_DELETE,
  KEY_RIGHT,
  KEY_LEFT,
  KEY_DOWN,
  KEY_UP,
  KEY_PAGE_UP,
  KEY_PAGE_DOWN,
  KEY_HOME,
  KEY_END,
  KEY_CAPS_LOCK,
  KEY_SCROLL_LOCK,
  KEY_NUM_LOCK,
  KEY_PRINT_SCREEN,
  KEY_PAUSE,
  KEY_F1,
  KEY_F2,
  KEY_F3,
  KEY_F4,
  KEY_F5,
  KEY_F6,
  KEY_F7,
  KEY_F8,
  KEY_F9,
  KEY_F10,
  KEY_F11,
  KEY_F12,
  KEY_KP_0,
  KEY_KP_1,
  KEY_KP_2,
  KEY_KP_3,
  KEY_KP_4,
  KEY_KP_5,
  KEY_KP_6,
  KEY_KP_7,
  KEY_KP_8,
  KEY_KP_9,
  KEY_KP_DECIMAL,
  KEY_KP_DIVIDE,
  KEY_KP_MULTIPLY,
  KEY_KP_SUBTRACT,
  KEY_KP_ADD,
  KEY_KP_ENTER,
  KEY_KP_EQUAL,
  KEY_LEFT_SHIFT,
  KEY_LEFT_CONTROL,
  KEY_LEFT_ALT,
  KEY_LEFT_SUPER,
  KEY_RIGHT_SHIFT,
  KEY_RIGHT_CONTROL,
  KEY_RIGHT_ALT,
  KEY_RIGHT_SUPER,
  KEY_MENU,

  SDL_KEY_COUNT,

  KEY_SHIFT = SDL_KEY_COUNT,
  KEY_CONTROL,
  KEY_ALT,
  KEY_SUPER,

  MOUSE_LEFT_BUTTON,
  MOUSE_MIDDLE_BUTTON,
  MOUSE_RIGHT_BUTTON,

  GAMEPAD_1_A,
  GAMEPAD_1_B,
  GAMEPAD_1_X,
  GAMEPAD_1_Y,
  GAMEPAD_1_LEFT_SHOULDER,
  GAMEPAD_1_RIGHT_SHOULDER,
  GAMEPAD_1_SELECT,
  GAMEPAD_1_START,
  GAMEPAD_1_UP,
  GAMEPAD_1_RIGHT,
  GAMEPAD_1_DOWN,
  GAMEPAD_1_LEFT,

  GAMEPAD_2_A,
  GAMEPAD_2_B,
  GAMEPAD_2_X,
  GAMEPAD_2_Y,
  GAMEPAD_2_LEFT_SHOULDER,
  GAMEPAD_2_RIGHT_SHOULDER,
  GAMEPAD_2_SELECT,
  GAMEPAD_2_START,
  GAMEPAD_2_UP,
  GAMEPAD_2_RIGHT,
  GAMEPAD_2_DOWN,
  GAMEPAD_2_LEFT,

  KEY_COUNT,
};

}  // namespace pyxelcore

#endif  // PYXELCORE_AUDIO_H_
