#include "flipper.h"
#include "app_state.h"
#include "scenes.h"
#include "scene_save_code.h"
#include <furi_hal_cortex.h>


void fcom_save_code_scene_on_enter(void* context) {
    FURI_LOG_I(TAG, "fcom_read_scene_on_enter");
    App* app = context;
    // initialize dcomm
    // start dcomm thread in read mode


    view_dispatcher_switch_to_view(app->view_dispatcher, FcomKeyboardView);
}

bool fcom_save_code_scene_on_event(void* context, SceneManagerEvent event) {
    FURI_LOG_I(TAG, "fcom_read_scene_on_event");
    UNUSED(context);
    UNUSED(event);

    // wait for event, then transfer to
    // Display code and Retry/More
    // More goes to submenu "Save" / "Emulate" 
    // Save goes to text input ("Name the card")
    // Emulate goes to Send screen "Send" press OK sends the code
    //

    return false; //consumed event
}

void fcom_save_code_scene_on_exit(void* context) {
    FURI_LOG_I(TAG, "fcom_read_scene_on_exit");
    UNUSED(context);
    App* app = context;
    UNUSED(app);
    // shut down dcomm
    // clean up
}


