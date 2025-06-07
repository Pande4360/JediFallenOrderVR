#include "..\FUObjectArray.hpp"
#include "UI_LocalMissionObjective_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_UI_Holomap_UI_LocalMissionObjective::UI_LocalMissionObjective_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
_Script_UMG::Image*& _Game_UI_Holomap_UI_LocalMissionObjective::UI_LocalMissionObjective_C::get_LocalObjective() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x620);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Holomap_UI_LocalMissionObjective::UI_LocalMissionObjective_C::get_Pulse() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x610);
}
_Script_UMG::Image*& _Game_UI_Holomap_UI_LocalMissionObjective::UI_LocalMissionObjective_C::get_Arrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x618);
}
void* _Game_UI_Holomap_UI_LocalMissionObjective::UI_LocalMissionObjective_C::get_IconMats() {
    return (void*)((uintptr_t)this + 0x628);
}
void* _Game_UI_Holomap_UI_LocalMissionObjective::UI_LocalMissionObjective_C::get_StemMats() {
    return (void*)((uintptr_t)this + 0x678);
}
_Script_CoreUObject::Class* _Game_UI_Holomap_UI_LocalMissionObjective::UI_LocalMissionObjective_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Holomap/UI_LocalMissionObjective.UI_LocalMissionObjective_C");
    return result;
}
void _Game_UI_Holomap_UI_LocalMissionObjective::UI_LocalMissionObjective_C::UpdateArrow(bool IsOnScreen, _Script_CoreUObject::Vector2D OriinalScreenPos, _Script_CoreUObject::Vector2D FinalScreenPos) {
    return;
}
void _Game_UI_Holomap_UI_LocalMissionObjective::UI_LocalMissionObjective_C::Construct() {
    return;
}
void _Game_UI_Holomap_UI_LocalMissionObjective::UI_LocalMissionObjective_C::ExecuteUbergraph_UI_LocalMissionObjective(int32_t EntryPoint) {
    return;
}
