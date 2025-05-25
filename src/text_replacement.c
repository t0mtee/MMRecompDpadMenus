#include "eztr_api.h"

EZTR_ON_INIT void replace_msgs() {
    EZTR_Basic_ReplaceText(
        0x003E,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_DUNGEON_MAP,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "|17You found the |01Dungeon Map|00!|18|11|1F|00|0APress START to open the|11subscreens and view the Map|11Screen.|10Areas on the map that appear in|11|03blue|00 are places you have visited.|11Your current location is the |11|05flashing|00 area.|10Use |BB or the |04D-pad|00 to view|11another floor.|BF",
        NULL
    );

    EZTR_Basic_ReplaceText(
        0x0450,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "How much? How much? |11|CC|11Set the amount with |BB or the |04D-pad|00|11and press |B0 to decide.|BF",
        NULL
    );

    EZTR_Basic_ReplaceText(
        0x046E,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "How much do you want?|11|CC|11Set the amount with |BB or the |04D-pad|00|11and press |B0 to decide.|BF",
        NULL
    );

    EZTR_Basic_ReplaceText(
        0x0640,
        EZTR_STANDARD_TEXT_BOX_II,
        49,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "View items with |BB or the |04D-pad|00.|11|11|02|C2Talk to the shopkeeper|11Leave|BF",
        NULL
    );

    EZTR_Basic_ReplaceText(
        0x0729,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "What's the code?|11|01|D1|11|00Pick numbers with |BB or the |04D-pad|00|11and press |B0 to decide.|BF",
        NULL
    );

    EZTR_Basic_ReplaceText(
        0x083E,
        EZTR_STANDARD_TEXT_BOX_II,
        49,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Use |BB or the |04D-pad|00 to browse.|11|11|02|C2Speak to the hag|11Quit shopping|BF",
        NULL
    );

    EZTR_Basic_ReplaceText(
        0x0BC0,
        EZTR_STANDARD_TEXT_BOX_II,
        49,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Use |BB or the |04D-pad|00 to view my|11goods.|11|02|C2Talk to shopkeeper|11Quit shopping|BF",
        NULL
    );

    EZTR_Basic_ReplaceText(
        0x12D6,
        EZTR_STANDARD_TEXT_BOX_II,
        49,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "View products with |BB or the |04D-pad|00.|11|11|02|C2Speak to shopkeeper|11Quit shopping|BF",
        NULL
    );

    EZTR_Basic_ReplaceText(
        0x29D6,
        EZTR_STANDARD_TEXT_BOX_II,
        49,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Use |BB or the |04D-pad|00 to browse.|11|11|02|C2Talk to shopkeeper|11Quit shopping|BF",
        NULL
    );

    EZTR_Basic_ReplaceText(
        0x2B5F,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "OK. Enter your number.|11|02|D5|11|00Select numbers with |BB or the |04D-pad|00.|11Press |B0 to confirm.|BF",
        NULL
    );

    EZTR_Basic_ReplaceText(
        0x3528,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "|1Ei|11How much will you |01bet|00?|11|D0|11Pick numbers with |BB or the |04D-pad|00.|11Press |B0 to decide.|BF",
        NULL
    );
    
    EZTR_Basic_ReplaceText(
        0x1700,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_OCARINA_OF_TIME,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "|01Ocarina of Time|11|00This musical instrument is filled|11with memories of Princess Zelda.|11|12Play it with |B0 and |BB or the |04D-pad|00.|11Press |B1 to stop.|BF",
        NULL
    );

    EZTR_Basic_ReplaceText(
        0x004C,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        1,
        EZTR_ICON_OCARINA_OF_TIME,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "|17You got the |01Ocarina of Time|11|00back!|18|11|1F|00|0A|01Princess Zelda|00 gave you this|11precious instrument.|10Set it to |04|B2|00 and play it with |B0 and|11|BB or the |04D-pad|00. Press |B1 to stop.|11|12...Suddenly, memories of |01Princess|11Zelda |00come rushing back to you...|BF",
        NULL
    );

    EZTR_Basic_ReplaceText(
        0x1B59,
        EZTR_OCARINA_STAFF,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Play it with |B0 and |BB or the |04D-pad|00.|BF",
        NULL
    );

    EZTR_Basic_ReplaceText(
        0x1B5A,
        EZTR_OCARINA_STAFF,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Play with |B0 and |BB or the |04D-pad|00.|BF",
        NULL
    );
}