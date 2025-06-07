#include "..\FUObjectArray.hpp"
#include "UI_mapreticule_triangle_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_UI_Map_MapReticule_UI_mapreticule_triangle::UI_mapreticule_triangle_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Map_MapReticule_UI_mapreticule_triangle::UI_mapreticule_triangle_C::get_Blink() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_UMG::Image*& _Game_UI_Map_MapReticule_UI_mapreticule_triangle::UI_mapreticule_triangle_C::get_filled() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x218);
}
_Script_UMG::Image*& _Game_UI_Map_MapReticule_UI_mapreticule_triangle::UI_mapreticule_triangle_C::get_hollow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x220);
}
void _Game_UI_Map_MapReticule_UI_mapreticule_triangle::UI_mapreticule_triangle_C::ExecuteUbergraph_UI_mapreticule_triangle(int32_t EntryPoint) {
    return;
}
_Script_CoreUObject::Class* _Game_UI_Map_MapReticule_UI_mapreticule_triangle::UI_mapreticule_triangle_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Map/MapReticule/UI_mapreticule_triangle.UI_mapreticule_triangle_C");
    return result;
}
void _Game_UI_Map_MapReticule_UI_mapreticule_triangle::UI_mapreticule_triangle_C::PlayBlink() {
    return;
}
