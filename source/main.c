#include <string.h>
#include <stdio.h>

#include <switch.h>

//See also libnx hid.h.
extern void testFileWrite(char filename[], char content[]);
//extern void sayHello();

int main(int argc, char **argv)
{
//    char* str = "I'm still standing";
    consoleInit(NULL);

    // Configure our supported input layout: a single player with standard controller styles
    padConfigureInput(1, HidNpadStyleSet_NpadStandard);

    // Initialize the default gamepad (which reads handheld mode inputs as well as the first connected controller)
    PadState pad;
    padInitializeDefault(&pad);

//    printf("\x1b[1;1HPress PLUS to exit. Now, a hello from our Nim static library: ");
//    sayHello();
    testFileWrite("nim-test.json", "{\"we\": \"did it!\"}");

//    printf("\x1b[2;1HSixAxis Sensor readings:");

    // Main loop
    while(appletMainLoop())
    {
        // Scan the gamepad. This should be done once for each frame
        padUpdate(&pad);

        // padGetButtonsDown returns the set of buttons that have been
        // newly pressed in this frame compared to the previous one
        u64 kDown = padGetButtonsDown(&pad);

        if (kDown & HidNpadButton_Plus) break; // break in order to return to hbmenu

        consoleUpdate(NULL);
    }

    consoleExit(NULL);
    return 0;
}
