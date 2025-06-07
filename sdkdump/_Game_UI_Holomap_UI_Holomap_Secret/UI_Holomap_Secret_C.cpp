#include "..\FUObjectArray.hpp"
#include "UI_Holomap_Secret_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapHologramBase.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_RsGameTechRT::RsWorldMapHologramBase*& _Game_UI_Holomap_UI_Holomap_Secret::UI_Holomap_Secret_C::get_HolomapRef() {
    return *(_Script_RsGameTechRT::RsWorldMapHologramBase**)((uintptr_t)this + 0x228);
}
void* _Game_UI_Holomap_UI_Holomap_Secret::UI_Holomap_Secret_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_CoreUObject::Class* _Game_UI_Holomap_UI_Holomap_Secret::UI_Holomap_Secret_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Holomap/UI_Holomap_Secret.UI_Holomap_Secret_C");
    return result;
}
_Script_UMG::WidgetAnimation*& _Game_UI_Holomap_UI_Holomap_Secret::UI_Holomap_Secret_C::get_FadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Holomap_UI_Holomap_Secret::UI_Holomap_Secret_C::get_Pulse() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x218);
}
_Script_UMG::Image*& _Game_UI_Holomap_UI_Holomap_Secret::UI_Holomap_Secret_C::get_LocalObjective() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x220);
}
void* _Game_UI_Holomap_UI_Holomap_Secret::UI_Holomap_Secret_C::get_RegionName() {
    return (void*)((uintptr_t)this + 0x230);
}
void _Game_UI_Holomap_UI_Holomap_Secret::UI_Holomap_Secret_C::Construct0() {
    return;
}
void _Game_UI_Holomap_UI_Holomap_Secret::UI_Holomap_Secret_C::ExecuteUbergraph_UI_Holomap_Secret(int32_t EntryPoint) {
    return;
}
