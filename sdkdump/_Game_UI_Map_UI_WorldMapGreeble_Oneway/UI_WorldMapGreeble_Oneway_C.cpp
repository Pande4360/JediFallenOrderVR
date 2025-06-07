#include "..\FUObjectArray.hpp"
#include "UI_WorldMapGreeble_Oneway_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_SlateCore\SlateColor.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
#include "..\_Script_UMG\ScaleBox.hpp"
float& _Game_UI_Map_UI_WorldMapGreeble_Oneway::UI_WorldMapGreeble_Oneway_C::get_OrigScale() {
    return *(float*)((uintptr_t)this + 0x630);
}
void* _Game_UI_Map_UI_WorldMapGreeble_Oneway::UI_WorldMapGreeble_Oneway_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
void* _Game_UI_Map_UI_WorldMapGreeble_Oneway::UI_WorldMapGreeble_Oneway_C::get_UnlockableColor() {
    return (void*)((uintptr_t)this + 0x638);
}
_Script_UMG::Border*& _Game_UI_Map_UI_WorldMapGreeble_Oneway::UI_WorldMapGreeble_Oneway_C::get_BorderColor() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x610);
}
_Script_UMG::Image*& _Game_UI_Map_UI_WorldMapGreeble_Oneway::UI_WorldMapGreeble_Oneway_C::get_Img_Additive() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x618);
}
_Script_UMG::RetainerBox*& _Game_UI_Map_UI_WorldMapGreeble_Oneway::UI_WorldMapGreeble_Oneway_C::get_RetainerBox_0() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x620);
}
_Script_UMG::ScaleBox*& _Game_UI_Map_UI_WorldMapGreeble_Oneway::UI_WorldMapGreeble_Oneway_C::get_Scaler() {
    return *(_Script_UMG::ScaleBox**)((uintptr_t)this + 0x628);
}
void* _Game_UI_Map_UI_WorldMapGreeble_Oneway::UI_WorldMapGreeble_Oneway_C::get_LockedColor() {
    return (void*)((uintptr_t)this + 0x660);
}
bool _Game_UI_Map_UI_WorldMapGreeble_Oneway::UI_WorldMapGreeble_Oneway_C::get_ShouldScale() {
    return (*(uint8_t*)((uintptr_t)this + 0x688 + 0)) & 1 != 0;
}
void _Game_UI_Map_UI_WorldMapGreeble_Oneway::UI_WorldMapGreeble_Oneway_C::set_ShouldScale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x688 + 0);
    *(uint8_t*)((uintptr_t)this + 0x688 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_Map_UI_WorldMapGreeble_Oneway::UI_WorldMapGreeble_Oneway_C::get_UnlockedColor() {
    return (void*)((uintptr_t)this + 0x690);
}
_Script_CoreUObject::Class* _Game_UI_Map_UI_WorldMapGreeble_Oneway::UI_WorldMapGreeble_Oneway_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Map/UI_WorldMapGreeble_Oneway.UI_WorldMapGreeble_Oneway_C");
    return result;
}
void _Game_UI_Map_UI_WorldMapGreeble_Oneway::UI_WorldMapGreeble_Oneway_C::Construct() {
    return;
}
void _Game_UI_Map_UI_WorldMapGreeble_Oneway::UI_WorldMapGreeble_Oneway_C::Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_UI_Map_UI_WorldMapGreeble_Oneway::UI_WorldMapGreeble_Oneway_C::SetScale() {
    return;
}
void _Game_UI_Map_UI_WorldMapGreeble_Oneway::UI_WorldMapGreeble_Oneway_C::SetTintColor(_Script_SlateCore::SlateColor TintColor) {
    return;
}
void _Game_UI_Map_UI_WorldMapGreeble_Oneway::UI_WorldMapGreeble_Oneway_C::SetType_ForcePull() {
    return;
}
void _Game_UI_Map_UI_WorldMapGreeble_Oneway::UI_WorldMapGreeble_Oneway_C::SetType_ForcePush() {
    return;
}
void _Game_UI_Map_UI_WorldMapGreeble_Oneway::UI_WorldMapGreeble_Oneway_C::SetType_Hack() {
    return;
}
void _Game_UI_Map_UI_WorldMapGreeble_Oneway::UI_WorldMapGreeble_Oneway_C::SetType_Overcharge() {
    return;
}
void _Game_UI_Map_UI_WorldMapGreeble_Oneway::UI_WorldMapGreeble_Oneway_C::SetState_Locked() {
    return;
}
void _Game_UI_Map_UI_WorldMapGreeble_Oneway::UI_WorldMapGreeble_Oneway_C::SetState_Unlockable() {
    return;
}
void _Game_UI_Map_UI_WorldMapGreeble_Oneway::UI_WorldMapGreeble_Oneway_C::SetType_WallRun() {
    return;
}
void _Game_UI_Map_UI_WorldMapGreeble_Oneway::UI_WorldMapGreeble_Oneway_C::SetType_Climbwall() {
    return;
}
void _Game_UI_Map_UI_WorldMapGreeble_Oneway::UI_WorldMapGreeble_Oneway_C::SetType_ClawWall() {
    return;
}
void _Game_UI_Map_UI_WorldMapGreeble_Oneway::UI_WorldMapGreeble_Oneway_C::SetType_Workbench() {
    return;
}
void _Game_UI_Map_UI_WorldMapGreeble_Oneway::UI_WorldMapGreeble_Oneway_C::SetState_Unlocked() {
    return;
}
void _Game_UI_Map_UI_WorldMapGreeble_Oneway::UI_WorldMapGreeble_Oneway_C::ExecuteUbergraph_UI_WorldMapGreeble_Oneway(int32_t EntryPoint) {
    return;
}
