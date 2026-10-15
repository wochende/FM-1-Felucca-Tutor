#ifndef TUTORIAL_H
#define TUTORIAL_H

#include <stdint.h>

typedef enum {
    LESSON_INTRO_OCT,
    LESSON_MOTION_REC_EXPLAIN,
    LESSON_MOTION_REC_PRACTICE,
    LESSON_MOTION_CLEAR_PRACTICE,
    LESSON_PERFORMANCE_TIPS,
    LESSON_COMPLETED
} TutorialStep;

struct Lesson {
    const char* title;
    const char* line1;
    const char* line2;
    const char* line3;
    bool waitingForAction;
};

void init_tutorial_system();
void render_tutorial_ui();
void check_user_input();

#endif
