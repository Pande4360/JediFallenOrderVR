#include "..\FUObjectArray.hpp"
#include "UI_MapGreeble_Tutorial_C.hpp"
#include "..\_Game_UI_UI_HUD_ROOT\UI_HUD_ROOT_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
#include "..\_Script_UMG\ScaleBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
float& _Game_UI_Map_UI_MapGreeble_Tutorial::UI_MapGreeble_Tutorial_C::get_OrigScale() {
    return *(float*)((uintptr_t)this + 0x630);
}
_Script_UMG::RetainerBox*& _Game_UI_Map_UI_MapGreeble_Tutorial::UI_MapGreeble_Tutorial_C::get_LabelContainer() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x620);
}
void* _Game_UI_Map_UI_MapGreeble_Tutorial::UI_MapGreeble_Tutorial_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Map_UI_MapGreeble_Tutorial::UI_MapGreeble_Tutorial_C::get_WipeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x610);
}
_Script_UMG::TextBlock*& _Game_UI_Map_UI_MapGreeble_Tutorial::UI_MapGreeble_Tutorial_C::get_GreebleTxt() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x618);
}
_Script_UMG::ScaleBox*& _Game_UI_Map_UI_MapGreeble_Tutorial::UI_MapGreeble_Tutorial_C::get_Scaler() {
    return *(_Script_UMG::ScaleBox**)((uintptr_t)this + 0x628);
}
void* _Game_UI_Map_UI_MapGreeble_Tutorial::UI_MapGreeble_Tutorial_C::get_LabelText() {
    return (void*)((uintptr_t)this + 0x638);
}
_Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C*& _Game_UI_Map_UI_MapGreeble_Tutorial::UI_MapGreeble_Tutorial_C::get_HUD_Ref() {
    return *(_Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C**)((uintptr_t)this + 0x650);
}
_Script_CoreUObject::Class* _Game_UI_Map_UI_MapGreeble_Tutorial::UI_MapGreeble_Tutorial_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Map/UI_MapGreeble_Tutorial.UI_MapGreeble_Tutorial_C");
    return result;
}
void _Game_UI_Map_UI_MapGreeble_Tutorial::UI_MapGreeble_Tutorial_C::Construct() {
    return;
}
void _Game_UI_Map_UI_MapGreeble_Tutorial::UI_MapGreeble_Tutorial_C::Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_UI_Map_UI_MapGreeble_Tutorial::UI_MapGreeble_Tutorial_C::SetScale() {
    return;
}
void _Game_UI_Map_UI_MapGreeble_Tutorial::UI_MapGreeble_Tutorial_C::SetLabelText(void* InText) {
    return;
}
void _Game_UI_Map_UI_MapGreeble_Tutorial::UI_MapGreeble_Tutorial_C::ExecuteUbergraph_UI_MapGreeble_Tutorial(int32_t EntryPoint) {
    return;
}
