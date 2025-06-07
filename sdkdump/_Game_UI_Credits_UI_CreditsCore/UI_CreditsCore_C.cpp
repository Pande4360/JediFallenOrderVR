#include "..\FUObjectArray.hpp"
#include "UI_CreditsCore_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\ScrollBox.hpp"
void* _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
_Script_UMG::CanvasPanel*& _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::get_CanvasPanel_0() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x610);
}
void* _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::get_CurrentFormat() {
    return (void*)((uintptr_t)this + 0x63c);
}
_Script_UMG::Image*& _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::get_Image_0() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x620);
}
_Script_UMG::ScrollBox*& _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::get_EndCredits_ScrollBox() {
    return *(_Script_UMG::ScrollBox**)((uintptr_t)this + 0x618);
}
_Script_UMG::ScrollBox*& _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::get_MenuCredits_ScrollBox() {
    return *(_Script_UMG::ScrollBox**)((uintptr_t)this + 0x628);
}
_Script_Engine::DataTable*& _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::get_UIStringsDataTable() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x630);
}
int32_t& _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::get_DataTableCounter() {
    return *(int32_t*)((uintptr_t)this + 0x638);
}
void* _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::get_CurrentTitle() {
    return (void*)((uintptr_t)this + 0x640);
}
void* _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::get_BlankTitle() {
    return (void*)((uintptr_t)this + 0x658);
}
void* _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::get_PreviousTitle() {
    return (void*)((uintptr_t)this + 0x670);
}
void* _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::get_CreditsTitle() {
    return (void*)((uintptr_t)this + 0x688);
}
void* _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::get_CreditsName() {
    return (void*)((uintptr_t)this + 0x6a0);
}
void* _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::get_SubstituteTitle() {
    return (void*)((uintptr_t)this + 0x6b0);
}
void* _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::get_ColumnizedName1() {
    return (void*)((uintptr_t)this + 0x6c8);
}
void* _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::get_ColumnizedName2() {
    return (void*)((uintptr_t)this + 0x6d8);
}
void* _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::get_ColumnizedName3() {
    return (void*)((uintptr_t)this + 0x6e8);
}
bool _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::get_ExitColumnizedNames() {
    return (*(uint8_t*)((uintptr_t)this + 0x6f8 + 0)) & 1 != 0;
}
void _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::set_ExitColumnizedNames(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6f8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::get_Scrolling() {
    return *(float*)((uintptr_t)this + 0x6fc);
}
void* _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::get_E_CreditsScrollCompleted() {
    return (void*)((uintptr_t)this + 0x700);
}
bool _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::get_IsEndCredits() {
    return (*(uint8_t*)((uintptr_t)this + 0x710 + 0)) & 1 != 0;
}
void _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::set_IsEndCredits(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x710 + 0);
    *(uint8_t*)((uintptr_t)this + 0x710 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::get_ScrollRate() {
    return *(float*)((uintptr_t)this + 0x714);
}
float& _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::get_FastForward() {
    return *(float*)((uintptr_t)this + 0x718);
}
_Script_CoreUObject::Class* _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Credits/UI_CreditsCore.UI_CreditsCore_C");
    return result;
}
void _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::Construct() {
    return;
}
void _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::Destruct() {
    return;
}
void _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::StartEndCredits() {
    return;
}
void _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::StartMenuCredits() {
    return;
}
void _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::ExecuteUbergraph_UI_CreditsCore(int32_t EntryPoint) {
    return;
}
void _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::SkipCredits(void* ActionName) {
    return;
}
void _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C::E_CreditsScrollCompleted__DelegateSignature() {
    return;
}
