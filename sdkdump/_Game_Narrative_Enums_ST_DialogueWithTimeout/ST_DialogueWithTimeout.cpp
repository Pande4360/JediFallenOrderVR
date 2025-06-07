#include "..\FUObjectArray.hpp"
#include "ST_DialogueWithTimeout.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_DialoguePlugin\Dialogue.hpp"
_Script_DialoguePlugin::Dialogue*& _Game_Narrative_Enums_ST_DialogueWithTimeout::ST_DialogueWithTimeout::get_Dialogue_6_79A466D5440C4DC060FD41A4E65EEA31() {
    return *(_Script_DialoguePlugin::Dialogue**)((uintptr_t)this + 0x0);
}
float& _Game_Narrative_Enums_ST_DialogueWithTimeout::ST_DialogueWithTimeout::get_TimeoutGameSecs_10_98CC6B45459F8E4BE8DC6E971C79076F() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Game_Narrative_Enums_ST_DialogueWithTimeout::ST_DialogueWithTimeout::get_EventForDialogue_13_9ED3817C4E0B490956D242B41BC2A1F8() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Game_Narrative_Enums_ST_DialogueWithTimeout::ST_DialogueWithTimeout::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/Narrative/Enums/ST_DialogueWithTimeout.ST_DialogueWithTimeout");
    return result;
}
