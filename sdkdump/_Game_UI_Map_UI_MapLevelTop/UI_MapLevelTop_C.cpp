#include "..\FUObjectArray.hpp"
#include "UI_MapLevelTop_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_UI_Map_UI_MapLevelTop::UI_MapLevelTop_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::Image*& _Game_UI_Map_UI_MapLevelTop::UI_MapLevelTop_C::get_Image_0() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x210);
}
_Script_UMG::TextBlock*& _Game_UI_Map_UI_MapLevelTop::UI_MapLevelTop_C::get_LevelNumber() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x218);
}
_Script_UMG::Image*& _Game_UI_Map_UI_MapLevelTop::UI_MapLevelTop_C::get_MapLevelTopImg() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x220);
}
void* _Game_UI_Map_UI_MapLevelTop::UI_MapLevelTop_C::get_StyleSheet_Holomap() {
    return (void*)((uintptr_t)this + 0x228);
}
_Script_CoreUObject::Class* _Game_UI_Map_UI_MapLevelTop::UI_MapLevelTop_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Map/UI_MapLevelTop.UI_MapLevelTop_C");
    return result;
}
void _Game_UI_Map_UI_MapLevelTop::UI_MapLevelTop_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_UI_Map_UI_MapLevelTop::UI_MapLevelTop_C::Construct0() {
    return;
}
void _Game_UI_Map_UI_MapLevelTop::UI_MapLevelTop_C::UpdateLevelNumber(int32_t CurrentLevel) {
    return;
}
void _Game_UI_Map_UI_MapLevelTop::UI_MapLevelTop_C::ExecuteUbergraph_UI_MapLevelTop(int32_t EntryPoint) {
    return;
}
