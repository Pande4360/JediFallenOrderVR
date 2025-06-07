#include "..\FUObjectArray.hpp"
#include "UI_ButtonScreenSpace_C.hpp"
#include "..\_Game_UI_UI_MenuButtonPrompt\UI_MenuButtonPrompt_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_UI_UI_ButtonScreenSpace::UI_ButtonScreenSpace_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_ButtonScreenSpace::UI_ButtonScreenSpace_C::get_Intro() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_UMG::Image*& _Game_UI_UI_ButtonScreenSpace::UI_ButtonScreenSpace_C::get_Dot() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x218);
}
_Script_UMG::Image*& _Game_UI_UI_ButtonScreenSpace::UI_ButtonScreenSpace_C::get_Image_0() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x220);
}
_Script_UMG::TextBlock*& _Game_UI_UI_ButtonScreenSpace::UI_ButtonScreenSpace_C::get_InteractText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x228);
}
_Script_UMG::CanvasPanel*& _Game_UI_UI_ButtonScreenSpace::UI_ButtonScreenSpace_C::get_MainContainer() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x230);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_UI_ButtonScreenSpace::UI_ButtonScreenSpace_C::get_UI_MenuButtonPrompt() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x238);
}
void* _Game_UI_UI_ButtonScreenSpace::UI_ButtonScreenSpace_C::get_PromptText() {
    return (void*)((uintptr_t)this + 0x240);
}
bool _Game_UI_UI_ButtonScreenSpace::UI_ButtonScreenSpace_C::get_NewVar_0() {
    return (*(uint8_t*)((uintptr_t)this + 0x258 + 0)) & 1 != 0;
}
void _Game_UI_UI_ButtonScreenSpace::UI_ButtonScreenSpace_C::set_NewVar_0(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x258 + 0);
    *(uint8_t*)((uintptr_t)this + 0x258 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_UI_UI_ButtonScreenSpace::UI_ButtonScreenSpace_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/UI_ButtonScreenSpace.UI_ButtonScreenSpace_C");
    return result;
}
void* _Game_UI_UI_ButtonScreenSpace::UI_ButtonScreenSpace_C::GetVisibility_0() {
    return;
}
void _Game_UI_UI_ButtonScreenSpace::UI_ButtonScreenSpace_C::UpdateButton() {
    return;
}
void _Game_UI_UI_ButtonScreenSpace::UI_ButtonScreenSpace_C::Display() {
    return;
}
void _Game_UI_UI_ButtonScreenSpace::UI_ButtonScreenSpace_C::SetType(void* Type) {
    return;
}
void _Game_UI_UI_ButtonScreenSpace::UI_ButtonScreenSpace_C::Dismiss() {
    return;
}
void _Game_UI_UI_ButtonScreenSpace::UI_ButtonScreenSpace_C::ExecuteUbergraph_UI_ButtonScreenSpace(int32_t EntryPoint) {
    return;
}
