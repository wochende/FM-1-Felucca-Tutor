#include <Arduino.h>

// FM-1 Felucca-Tutor Firmware Entry Point

enum TutorialState {
    STEP_01_NOTE_PLAYBACK,
    STEP_02_BUILD_BEAT,
    STEP_03_MELODY_BASS,
    STEP_04_PATTERN_CHAIN,
    STEP_COMPLETED
};

TutorialState currentState = STEP_01_NOTE_PLAYBACK;

void setup() {
    // Initialisiere Display (240x240), Audio-Engine und MIDI
    Serial.begin(115200);
    Serial.println("Starting FM-1 Felucca-Tutor Firmware...");
}

void loop() {
    // Interaktive Tutorial State-Machine Logic
    switch(currentState) {
        case STEP_01_NOTE_PLAYBACK:
            // Logik & Display-Anzeige für Lektion 1
            break;
        case STEP_02_BUILD_BEAT:
            // Logik für 16-Step Beat
            break;
        default:
            break;
    }
}
