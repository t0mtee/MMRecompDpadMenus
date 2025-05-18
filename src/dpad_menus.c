#include "modding.h"
#include "overlays/gamestates/ovl_file_choose/z_file_select.h"
#include "overlays/kaleido_scope/ovl_kaleido_scope/z_kaleido_scope.h"
// If you get an error with these headers, you need to build mm-decomp yourself and copy the headers into the include folder manually.
// You also need to copy the headers those headers need.
#include "z_en_sob1.h"
#include "overlays/actors/ovl_En_Trt/z_en_trt.h"
#include "z_en_fsn.h"
#include "z_en_ossan.h"

#define DPAD_CHECK(button, X, Y)    if (CHECK_BTN_ANY(button, BTN_DLEFT)) {\
                                        X = -31;\
                                    }\
                                    else if (CHECK_BTN_ANY(button, BTN_DRIGHT)) {\
                                        X = 31;\
                                    }\
                                    if (CHECK_BTN_ANY(button, BTN_DDOWN)) {\
                                        Y = -31;\
                                    }\
                                    else if (CHECK_BTN_ANY(button, BTN_DUP)) {\
                                        Y = 31;\
                                    }

#define INPUT_INIT      gInput = CONTROLLER1(&play->state);\
                        stickX = gInput->rel.stick_x;\
                        stickY = gInput->rel.stick_y;\
                        DPAD_CHECK(gInput->press.button, gInput->rel.stick_x, gInput->rel.stick_y)

#define INPUT_RETURN    gInput->rel.stick_x = stickX;\
                        gInput->rel.stick_y = stickY;

s32 stickX;
s32 stickY;

// Main menu
Input* gInput;

RECOMP_HOOK("FileSelect_Main") void FileSelect_Main_Init(GameState* thisx) {
    gInput = CONTROLLER1(thisx);

    stickX = gInput->rel.stick_x;
    stickY = gInput->rel.stick_y;

    DPAD_CHECK(gInput->press.button, gInput->rel.stick_x, gInput->rel.stick_y)
}

RECOMP_HOOK_RETURN("FileSelect_Main") void FileSelect_Main_Return() {
    INPUT_RETURN
}

// Messages

RECOMP_HOOK("Message_Update") void Message_Update_Init(PlayState* play, u8 numChoices) {
    INPUT_INIT
}

RECOMP_HOOK_RETURN("Message_Update") void Message_Update_Return() {
    INPUT_RETURN
}

// General shops

RECOMP_HOOK("EnSob1_UpdateJoystickInputState") void EnSob1_UpdateJoystickInputState_Init(PlayState* play, EnSob1* this) {
    INPUT_INIT
}

RECOMP_HOOK_RETURN("EnSob1_UpdateJoystickInputState") void EnSob1_UpdateJoystickInputState_Return() {
    INPUT_RETURN
}

// Trading Post

RECOMP_HOOK("EnOssan_UpdateJoystickInputState") void EnOssan_UpdateJoystickInputState_Init(PlayState* play, EnOssan* this) {
    INPUT_INIT
}

RECOMP_HOOK_RETURN("EnOssan_UpdateJoystickInputState") void EnOssan_UpdateJoystickInputState_Return() {
    INPUT_RETURN
}

// Curiosity Shop

RECOMP_HOOK("EnFsn_UpdateJoystickInputState") void EnFsn_UpdateJoystickInputState_Init(EnFsn* this, PlayState* play) {
    INPUT_INIT
}

RECOMP_HOOK_RETURN("EnFsn_UpdateJoystickInputState") void EnFsn_UpdateJoystickInputState_Return() {
    INPUT_RETURN
}

// Kotake

RECOMP_HOOK("EnTrt_UpdateJoystickInputState") void EnTrt_UpdateJoystickInputState_Init(PlayState* play, EnTrt* this) {
    INPUT_INIT
}

RECOMP_HOOK_RETURN("EnTrt_UpdateJoystickInputState") void EnTrt_UpdateJoystickInputState_Return() {
    INPUT_RETURN
}

// Bomber's Notebook

RECOMP_HOOK("BombersNotebook_Update") void BombersNotebook_Update_Init(PlayState* play, BombersNotebook* this, Input* input) {
    INPUT_INIT
}

RECOMP_HOOK_RETURN("BombersNotebook_Update") void BombersNotebook_Update_Return() {
    INPUT_RETURN
}

// Required for Kaleido to work. Disables D-pad switching the kaleido sections.

u16 button;
PauseContext* pauseCtx;

RECOMP_HOOK("KaleidoScope_HandlePageToggles") void KaleidoScope_HandlePageToggles_Init(PlayState* play, Input* input) {
    pauseCtx = &play->pauseCtx;
    stickX = pauseCtx->stickAdjX;

    if (CHECK_BTN_ANY(input->press.button, BTN_DLEFT)) {
        pauseCtx->stickAdjX = -31;
    }

    if (CHECK_BTN_ANY(input->press.button, BTN_DRIGHT)) {
        pauseCtx->stickAdjX = 31;
    }

    gInput = input;
    button = gInput->cur.button;
    input->cur.button &= ~(BTN_DRIGHT | BTN_DLEFT);
}

RECOMP_HOOK_RETURN("KaleidoScope_HandlePageToggles") void KaleidoScope_HandlePageToggles_Return() {
    gInput->cur.button = button;
    pauseCtx->stickAdjX = stickX;
}

// Kaleido

RECOMP_HOOK("KaleidoScope_Update") void KaleidoScope_Update_Init(PlayState* play) {
    gInput = CONTROLLER1(&play->state);
    PauseContext* pauseCtx = &play->pauseCtx;

    stickX = gInput->rel.stick_x;
    stickY = gInput->rel.stick_y;

    // Allow songs to played with D-pad in pause screen
    if (!IS_PAUSE_MAIN_STATE_SONG_PROMPT(pauseCtx)) {
        DPAD_CHECK(gInput->press.button, gInput->rel.stick_x, gInput->rel.stick_y)
    }
}

RECOMP_HOOK_RETURN("KaleidoScope_Update") void KaleidoScope_Update_Return() {
    INPUT_RETURN
}