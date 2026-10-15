#include <Arduino.h>
#include "tutorial.h"

TutorialStep currentStep = LESSON_INTRO_OCT;

Lesson lessons[] = {
    {
        "1/5: OCT+/- NAVI",
        "Nutze OCT+ und OCT-",
        "um durch diese Tipps",
        "zu blaettern.",
        false
    },
    {
        "2/5: MOTION RECORDING",
        "Nimmt Regler-Be-",
        "wegungen live auf.",
        "Ideal fuer drops!",
        false
    },
    {
        "3/5: AUFNAHME LIVE",
        "Halte REC gedrueckt",
        "und drehe CUTOFF,",
        "waehrend Loop laeuft.",
        true
    },
    {
        "4/5: MOTION LOESCHEN",
        "Ganz wichtig:",
        "Halte CLEAR + REC",
        "um Reset zu machen.",
        true
    }
};

void init_tutorial_system() {
    currentStep = LESSON_INTRO_OCT;
}

void render_tutorial_ui() {
    // Hier wird spaeter der Text auf dem 240x240 Display gezeichnet
}

void check_user_input() {
    // Erkennt Knob-Turns, REC-Press und CLEAR-Press
}
