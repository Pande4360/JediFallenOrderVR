#include "..\FUObjectArray.hpp"
#include "UI_ForceHealPip_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\ProgressBar.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_UI_HUD_UI_ForceHealPip::UI_ForceHealPip_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
void _Game_UI_HUD_UI_ForceHealPip::UI_ForceHealPip_C::set_IsFilled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x238 + 0);
    *(uint8_t*)((uintptr_t)this + 0x238 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::WidgetAnimation*& _Game_UI_HUD_UI_ForceHealPip::UI_ForceHealPip_C::get_RefillAnim() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_UMG::Image*& _Game_UI_HUD_UI_ForceHealPip::UI_ForceHealPip_C::get_Empty() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x218);
}
_Script_UMG::Image*& _Game_UI_HUD_UI_ForceHealPip::UI_ForceHealPip_C::get_filled() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x220);
}
_Script_UMG::ProgressBar*& _Game_UI_HUD_UI_ForceHealPip::UI_ForceHealPip_C::get_HealthFill() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x228);
}
_Script_CoreUObject::Class* _Game_UI_HUD_UI_ForceHealPip::UI_ForceHealPip_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/HUD/UI_ForceHealPip.UI_ForceHealPip_C");
    return result;
}
_Script_UMG::Image*& _Game_UI_HUD_UI_ForceHealPip::UI_ForceHealPip_C::get_Refill() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x230);
}
bool _Game_UI_HUD_UI_ForceHealPip::UI_ForceHealPip_C::get_IsFilled() {
    return (*(uint8_t*)((uintptr_t)this + 0x238 + 0)) & 1 != 0;
}
float& _Game_UI_HUD_UI_ForceHealPip::UI_ForceHealPip_C::get_DelayTime() {
    return *(float*)((uintptr_t)this + 0x23c);
}
void _Game_UI_HUD_UI_ForceHealPip::UI_ForceHealPip_C::Construct0() {
    return;
}
void _Game_UI_HUD_UI_ForceHealPip::UI_ForceHealPip_C::ExecuteUbergraph_UI_ForceHealPip(int32_t EntryPoint) {
    return;
}
