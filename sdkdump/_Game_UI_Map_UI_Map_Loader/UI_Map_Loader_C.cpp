#include "..\FUObjectArray.hpp"
#include "UI_Map_Loader_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_Map_UI_Map_Loader::UI_Map_Loader_C::get_LoaderMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x228);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Map_UI_Map_Loader::UI_Map_Loader_C::get_Loop() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
void* _Game_UI_Map_UI_Map_Loader::UI_Map_Loader_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::Image*& _Game_UI_Map_UI_Map_Loader::UI_Map_Loader_C::get_LoaderImage() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x218);
}
int32_t& _Game_UI_Map_UI_Map_Loader::UI_Map_Loader_C::get_Frame() {
    return *(int32_t*)((uintptr_t)this + 0x220);
}
_Script_CoreUObject::Class* _Game_UI_Map_UI_Map_Loader::UI_Map_Loader_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Map/UI_Map_Loader.UI_Map_Loader_C");
    return result;
}
void _Game_UI_Map_UI_Map_Loader::UI_Map_Loader_C::Construct0() {
    return;
}
void _Game_UI_Map_UI_Map_Loader::UI_Map_Loader_C::ExecuteUbergraph_UI_Map_Loader(int32_t EntryPoint) {
    return;
}
