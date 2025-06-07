#include "..\FUObjectArray.hpp"
#include "UI_Credits_Scrolling_Credit_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
_Script_UMG::TextBlock*& _Game_UI_Credits_UI_Credits_Scrolling_Credit::UI_Credits_Scrolling_Credit_C::get_PersonNAME() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x618);
}
void* _Game_UI_Credits_UI_Credits_Scrolling_Credit::UI_Credits_Scrolling_Credit_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
_Script_UMG::TextBlock*& _Game_UI_Credits_UI_Credits_Scrolling_Credit::UI_Credits_Scrolling_Credit_C::get_CREDITTITLE() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x610);
}
void _Game_UI_Credits_UI_Credits_Scrolling_Credit::UI_Credits_Scrolling_Credit_C::set_TitleEnalbed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x648 + 0);
    *(uint8_t*)((uintptr_t)this + 0x648 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_Credits_UI_Credits_Scrolling_Credit::UI_Credits_Scrolling_Credit_C::get_CreditTitleString() {
    return (void*)((uintptr_t)this + 0x620);
}
bool _Game_UI_Credits_UI_Credits_Scrolling_Credit::UI_Credits_Scrolling_Credit_C::get_TitleEnalbed() {
    return (*(uint8_t*)((uintptr_t)this + 0x648 + 0)) & 1 != 0;
}
void* _Game_UI_Credits_UI_Credits_Scrolling_Credit::UI_Credits_Scrolling_Credit_C::get_Credit_Name() {
    return (void*)((uintptr_t)this + 0x638);
}
void* _Game_UI_Credits_UI_Credits_Scrolling_Credit::UI_Credits_Scrolling_Credit_C::get_StyleSheet() {
    return (void*)((uintptr_t)this + 0x650);
}
_Script_CoreUObject::Class* _Game_UI_Credits_UI_Credits_Scrolling_Credit::UI_Credits_Scrolling_Credit_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Credits/UI_Credits_Scrolling_Credit.UI_Credits_Scrolling_Credit_C");
    return result;
}
void _Game_UI_Credits_UI_Credits_Scrolling_Credit::UI_Credits_Scrolling_Credit_C::PreConstruct(bool IsDesignTime) {
    return;
}
void _Game_UI_Credits_UI_Credits_Scrolling_Credit::UI_Credits_Scrolling_Credit_C::Construct() {
    return;
}
void _Game_UI_Credits_UI_Credits_Scrolling_Credit::UI_Credits_Scrolling_Credit_C::ExecuteUbergraph_UI_Credits_Scrolling_Credit(int32_t EntryPoint) {
    return;
}
