#include "..\FUObjectArray.hpp"
#include "UI_Widget_PipHolder_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_UI_GameMenu_Widgets_UI_Widget_PipHolder::UI_Widget_PipHolder_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::Image*& _Game_UI_GameMenu_Widgets_UI_Widget_PipHolder::UI_Widget_PipHolder_C::get_Image_0() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x210);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_Widgets_UI_Widget_PipHolder::UI_Widget_PipHolder_C::get_PipTotal() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x240);
}
_Script_UMG::Image*& _Game_UI_GameMenu_Widgets_UI_Widget_PipHolder::UI_Widget_PipHolder_C::get_Image_1() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x218);
}
_Script_UMG::Image*& _Game_UI_GameMenu_Widgets_UI_Widget_PipHolder::UI_Widget_PipHolder_C::get_Image_2() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x220);
}
_Script_UMG::Image*& _Game_UI_GameMenu_Widgets_UI_Widget_PipHolder::UI_Widget_PipHolder_C::get_Image_3() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x228);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_Widgets_UI_Widget_PipHolder::UI_Widget_PipHolder_C::get_PipCurrent() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x230);
}
_Script_UMG::HorizontalBox*& _Game_UI_GameMenu_Widgets_UI_Widget_PipHolder::UI_Widget_PipHolder_C::get_PipHolder() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x238);
}
void* _Game_UI_GameMenu_Widgets_UI_Widget_PipHolder::UI_Widget_PipHolder_C::get_PipTags() {
    return (void*)((uintptr_t)this + 0x248);
}
int32_t& _Game_UI_GameMenu_Widgets_UI_Widget_PipHolder::UI_Widget_PipHolder_C::get_CurrentFocusedPip() {
    return *(int32_t*)((uintptr_t)this + 0x258);
}
void* _Game_UI_GameMenu_Widgets_UI_Widget_PipHolder::UI_Widget_PipHolder_C::get_UnlockedPipIndices() {
    return (void*)((uintptr_t)this + 0x260);
}
int32_t& _Game_UI_GameMenu_Widgets_UI_Widget_PipHolder::UI_Widget_PipHolder_C::get_TotalPips() {
    return *(int32_t*)((uintptr_t)this + 0x270);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_Widgets_UI_Widget_PipHolder::UI_Widget_PipHolder_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/Widgets/UI_Widget_PipHolder.UI_Widget_PipHolder_C");
    return result;
}
void _Game_UI_GameMenu_Widgets_UI_Widget_PipHolder::UI_Widget_PipHolder_C::GetNextNavigablePip(void* Direction, int32_t& Index, bool& Found) {
    return;
}
void _Game_UI_GameMenu_Widgets_UI_Widget_PipHolder::UI_Widget_PipHolder_C::UpdateFocusedPip(int32_t Index) {
    return;
}
void _Game_UI_GameMenu_Widgets_UI_Widget_PipHolder::UI_Widget_PipHolder_C::SetPips(void*& PipContentTags) {
    return;
}
void _Game_UI_GameMenu_Widgets_UI_Widget_PipHolder::UI_Widget_PipHolder_C::ExecuteUbergraph_UI_Widget_PipHolder(int32_t EntryPoint) {
    return;
}
