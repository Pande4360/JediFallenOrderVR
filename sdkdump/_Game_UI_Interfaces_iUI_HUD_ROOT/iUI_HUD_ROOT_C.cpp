#include "..\FUObjectArray.hpp"
#include "iUI_HUD_ROOT_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
_Script_CoreUObject::Class* _Game_UI_Interfaces_iUI_HUD_ROOT::iUI_HUD_ROOT_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/UI/Interfaces/iUI_HUD_ROOT.iUI_HUD_ROOT_C");
    return result;
}
void _Game_UI_Interfaces_iUI_HUD_ROOT::iUI_HUD_ROOT_C::SetSubtitleManagerVisibility(bool Visible) {
    return;
}
void _Game_UI_Interfaces_iUI_HUD_ROOT::iUI_HUD_ROOT_C::iSetSettingsHideHUD(bool HideHUD) {
    return;
}
void _Game_UI_Interfaces_iUI_HUD_ROOT::iUI_HUD_ROOT_C::iNewXPGain(bool IsRevenge) {
    return;
}
void _Game_UI_Interfaces_iUI_HUD_ROOT::iUI_HUD_ROOT_C::iForcePointSpent(int32_t CurrentUnspentPoints) {
    return;
}
void _Game_UI_Interfaces_iUI_HUD_ROOT::iUI_HUD_ROOT_C::iResetXPZero() {
    return;
}
