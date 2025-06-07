#include "..\FUObjectArray.hpp"
#include "Zone_MessageText_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\TextRenderComponent.hpp"
#include "..\_Script_InputCore\Key.hpp"
_Script_CoreUObject::Class* _Game_WorldInteracts_EventZones_Zone_MessageText::Zone_MessageText_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/EventZones/Zone_MessageText.Zone_MessageText_C");
    return result;
}
void* _Game_WorldInteracts_EventZones_Zone_MessageText::Zone_MessageText_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
bool _Game_WorldInteracts_EventZones_Zone_MessageText::Zone_MessageText_C::get_CanInput() {
    return (*(uint8_t*)((uintptr_t)this + 0x38c + 0)) & 1 != 0;
}
void _Game_WorldInteracts_EventZones_Zone_MessageText::Zone_MessageText_C::LVL_MessageOn() {
    return;
}
_Script_Engine::TextRenderComponent*& _Game_WorldInteracts_EventZones_Zone_MessageText::Zone_MessageText_C::get_TextRender() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x368);
}
void* _Game_WorldInteracts_EventZones_Zone_MessageText::Zone_MessageText_C::get_Text() {
    return (void*)((uintptr_t)this + 0x370);
}
void* _Game_WorldInteracts_EventZones_Zone_MessageText::Zone_MessageText_C::get_Button() {
    return (void*)((uintptr_t)this + 0x390);
}
void _Game_WorldInteracts_EventZones_Zone_MessageText::Zone_MessageText_C::LVL_MessageOff() {
    return;
}
float& _Game_WorldInteracts_EventZones_Zone_MessageText::Zone_MessageText_C::get_Duration() {
    return *(float*)((uintptr_t)this + 0x388);
}
void _Game_WorldInteracts_EventZones_Zone_MessageText::Zone_MessageText_C::set_CanInput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38c + 0);
    *(uint8_t*)((uintptr_t)this + 0x38c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_EventZones_Zone_MessageText::Zone_MessageText_C::ExecuteUbergraph_Zone_MessageText(int32_t EntryPoint) {
    return;
}
void _Game_WorldInteracts_EventZones_Zone_MessageText::Zone_MessageText_C::UserConstructionScript0() {
    return;
}
void _Game_WorldInteracts_EventZones_Zone_MessageText::Zone_MessageText_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_0(_Script_InputCore::Key Key) {
    return;
}
