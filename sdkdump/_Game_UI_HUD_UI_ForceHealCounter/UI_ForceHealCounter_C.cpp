#include "..\FUObjectArray.hpp"
#include "UI_ForceHealCounter_C.hpp"
#include "..\_Game_UI_HUD_UI_ForceHealPip\UI_ForceHealPip_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\ProgressBar.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
int32_t& _Game_UI_HUD_UI_ForceHealCounter::UI_ForceHealCounter_C::get_CurrentHealthPips() {
    return *(int32_t*)((uintptr_t)this + 0x238);
}
void* _Game_UI_HUD_UI_ForceHealCounter::UI_ForceHealCounter_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
float& _Game_UI_HUD_UI_ForceHealCounter::UI_ForceHealCounter_C::get_DelayTime() {
    return *(float*)((uintptr_t)this + 0x23c);
}
_Script_UMG::WidgetAnimation*& _Game_UI_HUD_UI_ForceHealCounter::UI_ForceHealCounter_C::get_NoHeals() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_UMG::Image*& _Game_UI_HUD_UI_ForceHealCounter::UI_ForceHealCounter_C::get_HealIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x218);
}
_Script_UMG::TextBlock*& _Game_UI_HUD_UI_ForceHealCounter::UI_ForceHealCounter_C::get_HealNumber() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x220);
}
_Script_UMG::ProgressBar*& _Game_UI_HUD_UI_ForceHealCounter::UI_ForceHealCounter_C::get_LowHealthFlash() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x228);
}
_Game_UI_HUD_UI_ForceHealPip::UI_ForceHealPip_C*& _Game_UI_HUD_UI_ForceHealCounter::UI_ForceHealCounter_C::get_Pip() {
    return *(_Game_UI_HUD_UI_ForceHealPip::UI_ForceHealPip_C**)((uintptr_t)this + 0x230);
}
int32_t& _Game_UI_HUD_UI_ForceHealCounter::UI_ForceHealCounter_C::get_NewVar_0() {
    return *(int32_t*)((uintptr_t)this + 0x240);
}
int32_t& _Game_UI_HUD_UI_ForceHealCounter::UI_ForceHealCounter_C::get_OldCurrentPips() {
    return *(int32_t*)((uintptr_t)this + 0x244);
}
_Script_CoreUObject::Class* _Game_UI_HUD_UI_ForceHealCounter::UI_ForceHealCounter_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/HUD/UI_ForceHealCounter.UI_ForceHealCounter_C");
    return result;
}
void _Game_UI_HUD_UI_ForceHealCounter::UI_ForceHealCounter_C::UpdateHealthPips(bool PipByPipRefill) {
    return;
}
void _Game_UI_HUD_UI_ForceHealCounter::UI_ForceHealCounter_C::Construct0() {
    return;
}
void _Game_UI_HUD_UI_ForceHealCounter::UI_ForceHealCounter_C::HealFail() {
    return;
}
void _Game_UI_HUD_UI_ForceHealCounter::UI_ForceHealCounter_C::ExecuteUbergraph_UI_ForceHealCounter(int32_t EntryPoint) {
    return;
}
