#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_StarChartAnimLoadSave\UI_StarChartAnimLoadSave_C.hpp"
#include "UI_ActivityIndicator_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_UI_UI_ActivityIndicator::UI_ActivityIndicator_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
void _Game_UI_UI_ActivityIndicator::UI_ActivityIndicator_C::PreConstruct(bool IsDesignTime) {
    return;
}
bool _Game_UI_UI_ActivityIndicator::UI_ActivityIndicator_C::get_GradBackground() {
    return (*(uint8_t*)((uintptr_t)this + 0x620 + 0)) & 1 != 0;
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_ActivityIndicator::UI_ActivityIndicator_C::get_FadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x610);
}
_Game_UI_GameMenu_SubMenus_UI_StarChartAnimLoadSave::UI_StarChartAnimLoadSave_C*& _Game_UI_UI_ActivityIndicator::UI_ActivityIndicator_C::get_UI_StarChartAnimLoadSave() {
    return *(_Game_UI_GameMenu_SubMenus_UI_StarChartAnimLoadSave::UI_StarChartAnimLoadSave_C**)((uintptr_t)this + 0x618);
}
void _Game_UI_UI_ActivityIndicator::UI_ActivityIndicator_C::set_GradBackground(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x620 + 0);
    *(uint8_t*)((uintptr_t)this + 0x620 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_UI_UI_ActivityIndicator::UI_ActivityIndicator_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/UI_ActivityIndicator.UI_ActivityIndicator_C");
    return result;
}
void _Game_UI_UI_ActivityIndicator::UI_ActivityIndicator_C::OnWindowOpened0() {
    return;
}
void _Game_UI_UI_ActivityIndicator::UI_ActivityIndicator_C::ExecuteUbergraph_UI_ActivityIndicator(int32_t EntryPoint) {
    return;
}
