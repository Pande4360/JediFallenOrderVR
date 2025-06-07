#include "..\FUObjectArray.hpp"
#include "UI_HUD_LightSaberSwitch_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_UI_UI_HUD_LightSaberSwitch::UI_HUD_LightSaberSwitch_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::CanvasPanel*& _Game_UI_UI_HUD_LightSaberSwitch::UI_HUD_LightSaberSwitch_C::get_CanvasPanel_0() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x210);
}
_Script_UMG::TextBlock*& _Game_UI_UI_HUD_LightSaberSwitch::UI_HUD_LightSaberSwitch_C::get_TempSaberText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x218);
}
void* _Game_UI_UI_HUD_LightSaberSwitch::UI_HUD_LightSaberSwitch_C::get_HighlightedSaber() {
    return (void*)((uintptr_t)this + 0x231);
}
_Script_UMG::TextBlock*& _Game_UI_UI_HUD_LightSaberSwitch::UI_HUD_LightSaberSwitch_C::get_TempStaffText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x220);
}
_Script_UMG::TextBlock*& _Game_UI_UI_HUD_LightSaberSwitch::UI_HUD_LightSaberSwitch_C::get_TempTwinText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x228);
}
bool _Game_UI_UI_HUD_LightSaberSwitch::UI_HUD_LightSaberSwitch_C::get_IsVisible_0() {
    return (*(uint8_t*)((uintptr_t)this + 0x230 + 0)) & 1 != 0;
}
void _Game_UI_UI_HUD_LightSaberSwitch::UI_HUD_LightSaberSwitch_C::set_IsVisible_0(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x230 + 0);
    *(uint8_t*)((uintptr_t)this + 0x230 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_UI_HUD_LightSaberSwitch::UI_HUD_LightSaberSwitch_C::get_TempUnhighlightedColour() {
    return (void*)((uintptr_t)this + 0x238);
}
void* _Game_UI_UI_HUD_LightSaberSwitch::UI_HUD_LightSaberSwitch_C::get_TempHighlightColour() {
    return (void*)((uintptr_t)this + 0x260);
}
void* _Game_UI_UI_HUD_LightSaberSwitch::UI_HUD_LightSaberSwitch_C::get_TempSelectColour() {
    return (void*)((uintptr_t)this + 0x288);
}
_Script_CoreUObject::Class* _Game_UI_UI_HUD_LightSaberSwitch::UI_HUD_LightSaberSwitch_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/UI_HUD_LightSaberSwitch.UI_HUD_LightSaberSwitch_C");
    return result;
}
void _Game_UI_UI_HUD_LightSaberSwitch::UI_HUD_LightSaberSwitch_C::Construct0() {
    return;
}
void _Game_UI_UI_HUD_LightSaberSwitch::UI_HUD_LightSaberSwitch_C::HighlightLightsaberType(void* LightsaberType) {
    return;
}
void _Game_UI_UI_HUD_LightSaberSwitch::UI_HUD_LightSaberSwitch_C::ShowWidget() {
    return;
}
void _Game_UI_UI_HUD_LightSaberSwitch::UI_HUD_LightSaberSwitch_C::HideWidget() {
    return;
}
void _Game_UI_UI_HUD_LightSaberSwitch::UI_HUD_LightSaberSwitch_C::SetHighlight(void* LightsaberType) {
    return;
}
void _Game_UI_UI_HUD_LightSaberSwitch::UI_HUD_LightSaberSwitch_C::ConfirmLightsaberType() {
    return;
}
void _Game_UI_UI_HUD_LightSaberSwitch::UI_HUD_LightSaberSwitch_C::ExecuteUbergraph_UI_HUD_LightSaberSwitch(int32_t EntryPoint) {
    return;
}
