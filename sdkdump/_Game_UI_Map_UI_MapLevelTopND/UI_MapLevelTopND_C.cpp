#include "..\FUObjectArray.hpp"
#include "UI_MapLevelTopND_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_UI_Map_UI_MapLevelTopND::UI_MapLevelTopND_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::Image*& _Game_UI_Map_UI_MapLevelTopND::UI_MapLevelTopND_C::get_MapLevelTopImg() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x210);
}
void* _Game_UI_Map_UI_MapLevelTopND::UI_MapLevelTopND_C::get_StyleSheet_Holomap() {
    return (void*)((uintptr_t)this + 0x218);
}
void _Game_UI_Map_UI_MapLevelTopND::UI_MapLevelTopND_C::UpdateLevelNumber(int32_t CurrentLevel) {
    return;
}
_Script_CoreUObject::Class* _Game_UI_Map_UI_MapLevelTopND::UI_MapLevelTopND_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Map/UI_MapLevelTopND.UI_MapLevelTopND_C");
    return result;
}
void _Game_UI_Map_UI_MapLevelTopND::UI_MapLevelTopND_C::Activate() {
    return;
}
void _Game_UI_Map_UI_MapLevelTopND::UI_MapLevelTopND_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_UI_Map_UI_MapLevelTopND::UI_MapLevelTopND_C::Construct0() {
    return;
}
void _Game_UI_Map_UI_MapLevelTopND::UI_MapLevelTopND_C::ExecuteUbergraph_UI_MapLevelTopND(int32_t EntryPoint) {
    return;
}
