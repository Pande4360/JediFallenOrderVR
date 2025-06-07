#include "..\FUObjectArray.hpp"
#include "ST_HubDialogueInfo.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_DialoguePlugin\Dialogue.hpp"
_Script_DialoguePlugin::Dialogue*& _Game_Narrative_Hub_Structs_ST_HubDialogueInfo::ST_HubDialogueInfo::get_SelectedDialogue_2_B0A867C54DE024691C92C3981C143F18() {
    return *(_Script_DialoguePlugin::Dialogue**)((uintptr_t)this + 0x0);
}
void* _Game_Narrative_Hub_Structs_ST_HubDialogueInfo::ST_HubDialogueInfo::get_HubConversationType_6_D8194FC1444E29ABFB972DBD746475D6() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Game_Narrative_Hub_Structs_ST_HubDialogueInfo::ST_HubDialogueInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/Narrative/Hub/Structs/ST_HubDialogueInfo.ST_HubDialogueInfo");
    return result;
}
