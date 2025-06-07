#include "..\FUObjectArray.hpp"
#include "UI_Credits_MajorCredit_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
_Script_UMG::TextBlock*& _Game_UI_Credits_UI_Credits_MajorCredit::UI_Credits_MajorCredit_C::get_PersonNAME() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x620);
}
void* _Game_UI_Credits_UI_Credits_MajorCredit::UI_Credits_MajorCredit_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
_Script_UMG::Border*& _Game_UI_Credits_UI_Credits_MajorCredit::UI_Credits_MajorCredit_C::get_Border_0() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x610);
}
void* _Game_UI_Credits_UI_Credits_MajorCredit::UI_Credits_MajorCredit_C::get_Credit_Name() {
    return (void*)((uintptr_t)this + 0x640);
}
_Script_UMG::TextBlock*& _Game_UI_Credits_UI_Credits_MajorCredit::UI_Credits_MajorCredit_C::get_CREDITTITLE() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x618);
}
_Script_CoreUObject::Class* _Game_UI_Credits_UI_Credits_MajorCredit::UI_Credits_MajorCredit_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Credits/UI_Credits_MajorCredit.UI_Credits_MajorCredit_C");
    return result;
}
void* _Game_UI_Credits_UI_Credits_MajorCredit::UI_Credits_MajorCredit_C::get_CreditTitleString() {
    return (void*)((uintptr_t)this + 0x628);
}
void* _Game_UI_Credits_UI_Credits_MajorCredit::UI_Credits_MajorCredit_C::get_StyleSheet() {
    return (void*)((uintptr_t)this + 0x650);
}
void _Game_UI_Credits_UI_Credits_MajorCredit::UI_Credits_MajorCredit_C::PreConstruct(bool IsDesignTime) {
    return;
}
void _Game_UI_Credits_UI_Credits_MajorCredit::UI_Credits_MajorCredit_C::Construct() {
    return;
}
void _Game_UI_Credits_UI_Credits_MajorCredit::UI_Credits_MajorCredit_C::ExecuteUbergraph_UI_Credits_MajorCredit(int32_t EntryPoint) {
    return;
}
