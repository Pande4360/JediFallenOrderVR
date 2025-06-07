#include "..\FUObjectArray.hpp"
#include "UI_Narrative_HubDebug_C.hpp"
#include "..\_Game_Narrative_Hub_Structs_ST_HubDebugTagConfiguration\ST_HubDebugTagConfiguration.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
_Script_UMG::TextBlock*& _Game_Narrative_DebugUI_UI_Narrative_HubDebug::UI_Narrative_HubDebug_C::get_Txt_HubState() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x618);
}
_Script_UMG::TextBlock*& _Game_Narrative_DebugUI_UI_Narrative_HubDebug::UI_Narrative_HubDebug_C::get_Txt_Dialog() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x608);
}
_Script_UMG::TextBlock*& _Game_Narrative_DebugUI_UI_Narrative_HubDebug::UI_Narrative_HubDebug_C::get_Txt_Ticking() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x628);
}
_Script_UMG::TextBlock*& _Game_Narrative_DebugUI_UI_Narrative_HubDebug::UI_Narrative_HubDebug_C::get_Txt_Gesture() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x610);
}
_Script_UMG::TextBlock*& _Game_Narrative_DebugUI_UI_Narrative_HubDebug::UI_Narrative_HubDebug_C::get_Txt_Tags() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x620);
}
void _Game_Narrative_DebugUI_UI_Narrative_HubDebug::UI_Narrative_HubDebug_C::UpdateHubTicking(bool Ticking) {
    return;
}
_Script_UMG::TextBlock*& _Game_Narrative_DebugUI_UI_Narrative_HubDebug::UI_Narrative_HubDebug_C::get_Txt_UID() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x630);
}
_Script_CoreUObject::Class* _Game_Narrative_DebugUI_UI_Narrative_HubDebug::UI_Narrative_HubDebug_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Narrative/DebugUI/UI_Narrative_HubDebug.UI_Narrative_HubDebug_C");
    return result;
}
void _Game_Narrative_DebugUI_UI_Narrative_HubDebug::UI_Narrative_HubDebug_C::UpdateRequiredTags(_Game_Narrative_Hub_Structs_ST_HubDebugTagConfiguration::ST_HubDebugTagConfiguration Config) {
    return;
}
void _Game_Narrative_DebugUI_UI_Narrative_HubDebug::UI_Narrative_HubDebug_C::UpdateGesture(void* Gesture) {
    return;
}
void _Game_Narrative_DebugUI_UI_Narrative_HubDebug::UI_Narrative_HubDebug_C::UpdateHubUID(int32_t UID) {
    return;
}
void _Game_Narrative_DebugUI_UI_Narrative_HubDebug::UI_Narrative_HubDebug_C::UpdateHubDialogue(void* Dialogue) {
    return;
}
void _Game_Narrative_DebugUI_UI_Narrative_HubDebug::UI_Narrative_HubDebug_C::UpdateHubState(void* State) {
    return;
}
