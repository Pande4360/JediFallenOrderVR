#include "..\FUObjectArray.hpp"
#include "UI_MapLevelIndicator_C.hpp"
#include "..\_Game_UI_Map_UI_MapLevelLowND\UI_MapLevelLowND_C.hpp"
#include "..\_Game_UI_Map_UI_MapLevelTopND\UI_MapLevelTopND_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
_Script_UMG::TextBlock*& _Game_UI_Map_UI_MapLevelIndicator::UI_MapLevelIndicator_C::get_LevelText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x218);
}
void _Game_UI_Map_UI_MapLevelIndicator::UI_MapLevelIndicator_C::ExecuteUbergraph_UI_MapLevelIndicator(int32_t EntryPoint) {
    return;
}
void* _Game_UI_Map_UI_MapLevelIndicator::UI_MapLevelIndicator_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::Image*& _Game_UI_Map_UI_MapLevelIndicator::UI_MapLevelIndicator_C::get_Dpad() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x210);
}
_Script_UMG::VerticalBox*& _Game_UI_Map_UI_MapLevelIndicator::UI_MapLevelIndicator_C::get_LevelVertBox() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x220);
}
_Script_UMG::RetainerBox*& _Game_UI_Map_UI_MapLevelIndicator::UI_MapLevelIndicator_C::get_RetainerBox_0() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x228);
}
void _Game_UI_Map_UI_MapLevelIndicator::UI_MapLevelIndicator_C::Construct0() {
    return;
}
_Script_UMG::RetainerBox*& _Game_UI_Map_UI_MapLevelIndicator::UI_MapLevelIndicator_C::get_RetainerBox_1() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x230);
}
_Game_UI_Map_UI_MapLevelLowND::UI_MapLevelLowND_C*& _Game_UI_Map_UI_MapLevelIndicator::UI_MapLevelIndicator_C::get_UI_MapLevelLowND() {
    return *(_Game_UI_Map_UI_MapLevelLowND::UI_MapLevelLowND_C**)((uintptr_t)this + 0x238);
}
_Game_UI_Map_UI_MapLevelTopND::UI_MapLevelTopND_C*& _Game_UI_Map_UI_MapLevelIndicator::UI_MapLevelIndicator_C::get_UI_MapLevelTopND() {
    return *(_Game_UI_Map_UI_MapLevelTopND::UI_MapLevelTopND_C**)((uintptr_t)this + 0x240);
}
int32_t& _Game_UI_Map_UI_MapLevelIndicator::UI_MapLevelIndicator_C::get_CurrentLevel() {
    return *(int32_t*)((uintptr_t)this + 0x248);
}
int32_t& _Game_UI_Map_UI_MapLevelIndicator::UI_MapLevelIndicator_C::get_TotalLevels() {
    return *(int32_t*)((uintptr_t)this + 0x24c);
}
void* _Game_UI_Map_UI_MapLevelIndicator::UI_MapLevelIndicator_C::get_StyleSheet() {
    return (void*)((uintptr_t)this + 0x250);
}
_Script_CoreUObject::Class* _Game_UI_Map_UI_MapLevelIndicator::UI_MapLevelIndicator_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Map/UI_MapLevelIndicator.UI_MapLevelIndicator_C");
    return result;
}
void _Game_UI_Map_UI_MapLevelIndicator::UI_MapLevelIndicator_C::Update(int32_t CurrentLevel, int32_t TotalLevels) {
    return;
}
