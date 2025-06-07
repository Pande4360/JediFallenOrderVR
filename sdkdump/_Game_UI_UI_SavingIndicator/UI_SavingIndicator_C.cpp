#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_StarChartAnimLoadSave\UI_StarChartAnimLoadSave_C.hpp"
#include "UI_SavingIndicator_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_UI_UI_SavingIndicator::UI_SavingIndicator_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
void* _Game_UI_UI_SavingIndicator::UI_SavingIndicator_C::Get_SavingGameText_Visibility_0() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_SavingIndicator::UI_SavingIndicator_C::get_Fade() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x610);
}
_Game_UI_GameMenu_SubMenus_UI_StarChartAnimLoadSave::UI_StarChartAnimLoadSave_C*& _Game_UI_UI_SavingIndicator::UI_SavingIndicator_C::get_UI_StarChartAnimLoadSave() {
    return *(_Game_UI_GameMenu_SubMenus_UI_StarChartAnimLoadSave::UI_StarChartAnimLoadSave_C**)((uintptr_t)this + 0x618);
}
void _Game_UI_UI_SavingIndicator::UI_SavingIndicator_C::Construct() {
    return;
}
_Script_CoreUObject::Class* _Game_UI_UI_SavingIndicator::UI_SavingIndicator_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/UI_SavingIndicator.UI_SavingIndicator_C");
    return result;
}
void _Game_UI_UI_SavingIndicator::UI_SavingIndicator_C::HIdeText(bool HIdeText) {
    return;
}
void _Game_UI_UI_SavingIndicator::UI_SavingIndicator_C::ExecuteUbergraph_UI_SavingIndicator(int32_t EntryPoint) {
    return;
}
