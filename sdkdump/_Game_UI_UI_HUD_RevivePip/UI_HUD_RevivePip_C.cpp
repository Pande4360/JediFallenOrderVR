#include "..\FUObjectArray.hpp"
#include "UI_HUD_RevivePip_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_UMG::Image*& _Game_UI_UI_HUD_RevivePip::UI_HUD_RevivePip_C::get_Rim() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x228);
}
void* _Game_UI_UI_HUD_RevivePip::UI_HUD_RevivePip_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
int32_t& _Game_UI_UI_HUD_RevivePip::UI_HUD_RevivePip_C::get_TotalRevives() {
    return *(int32_t*)((uintptr_t)this + 0x238);
}
_Script_UMG::Image*& _Game_UI_UI_HUD_RevivePip::UI_HUD_RevivePip_C::get_base() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x210);
}
_Script_UMG::Image*& _Game_UI_UI_HUD_RevivePip::UI_HUD_RevivePip_C::get_Fill() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x218);
}
_Script_UMG::CanvasPanel*& _Game_UI_UI_HUD_RevivePip::UI_HUD_RevivePip_C::get_ReviveCanvas() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x220);
}
_Script_UMG::TextBlock*& _Game_UI_UI_HUD_RevivePip::UI_HUD_RevivePip_C::get_TotalRevivesText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x230);
}
_Script_CoreUObject::Class* _Game_UI_UI_HUD_RevivePip::UI_HUD_RevivePip_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/UI_HUD_RevivePip.UI_HUD_RevivePip_C");
    return result;
}
void* _Game_UI_UI_HUD_RevivePip::UI_HUD_RevivePip_C::Get_TotalRevives_Text_0() {
    return;
}
void _Game_UI_UI_HUD_RevivePip::UI_HUD_RevivePip_C::SetEquipped(bool IsEquipped, int32_t TotalRevives) {
    return;
}
void _Game_UI_UI_HUD_RevivePip::UI_HUD_RevivePip_C::Collapse() {
    return;
}
void _Game_UI_UI_HUD_RevivePip::UI_HUD_RevivePip_C::ExecuteUbergraph_UI_HUD_RevivePip(int32_t EntryPoint) {
    return;
}
