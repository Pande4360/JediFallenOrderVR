#include "..\FUObjectArray.hpp"
#include "UI_MapLevelLowND_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_UI_Map_UI_MapLevelLowND::UI_MapLevelLowND_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_CoreUObject::Class* _Game_UI_Map_UI_MapLevelLowND::UI_MapLevelLowND_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Map/UI_MapLevelLowND.UI_MapLevelLowND_C");
    return result;
}
_Script_UMG::Image*& _Game_UI_Map_UI_MapLevelLowND::UI_MapLevelLowND_C::get_Image_0() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x210);
}
void* _Game_UI_Map_UI_MapLevelLowND::UI_MapLevelLowND_C::get_StyleSheet_Holomap() {
    return (void*)((uintptr_t)this + 0x230);
}
void* _Game_UI_Map_UI_MapLevelLowND::UI_MapLevelLowND_C::get_TintColor() {
    return (void*)((uintptr_t)this + 0x218);
}
bool _Game_UI_Map_UI_MapLevelLowND::UI_MapLevelLowND_C::get_ui_ss_holomap() {
    return (*(uint8_t*)((uintptr_t)this + 0x228 + 0)) & 1 != 0;
}
void _Game_UI_Map_UI_MapLevelLowND::UI_MapLevelLowND_C::set_ui_ss_holomap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x228 + 0);
    *(uint8_t*)((uintptr_t)this + 0x228 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_Map_UI_MapLevelLowND::UI_MapLevelLowND_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_UI_Map_UI_MapLevelLowND::UI_MapLevelLowND_C::Construct0() {
    return;
}
void _Game_UI_Map_UI_MapLevelLowND::UI_MapLevelLowND_C::Activate() {
    return;
}
void _Game_UI_Map_UI_MapLevelLowND::UI_MapLevelLowND_C::ExecuteUbergraph_UI_MapLevelLowND(int32_t EntryPoint) {
    return;
}
