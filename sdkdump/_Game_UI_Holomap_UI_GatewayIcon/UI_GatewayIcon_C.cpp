#include "..\FUObjectArray.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_WorldMapHologram\BP_WorldMapHologram_C.hpp"
#include "UI_GatewayIcon_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
_Script_UMG::Image*& _Game_UI_Holomap_UI_GatewayIcon::UI_GatewayIcon_C::get_Gateway() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x620);
}
void* _Game_UI_Holomap_UI_GatewayIcon::UI_GatewayIcon_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
_Script_UMG::TextBlock*& _Game_UI_Holomap_UI_GatewayIcon::UI_GatewayIcon_C::get_DoorType() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x618);
}
_Script_UMG::Image*& _Game_UI_Holomap_UI_GatewayIcon::UI_GatewayIcon_C::get_Background() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x610);
}
_Script_UMG::CanvasPanel*& _Game_UI_Holomap_UI_GatewayIcon::UI_GatewayIcon_C::get_MainCanvas() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x628);
}
_Script_UMG::Image*& _Game_UI_Holomap_UI_GatewayIcon::UI_GatewayIcon_C::get_Stem() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x630);
}
void* _Game_UI_Holomap_UI_GatewayIcon::UI_GatewayIcon_C::get_IconMats() {
    return (void*)((uintptr_t)this + 0x638);
}
void* _Game_UI_Holomap_UI_GatewayIcon::UI_GatewayIcon_C::get_StemMats() {
    return (void*)((uintptr_t)this + 0x688);
}
void* _Game_UI_Holomap_UI_GatewayIcon::UI_GatewayIcon_C::get_EDoorTypes() {
    return (void*)((uintptr_t)this + 0x6d8);
}
void* _Game_UI_Holomap_UI_GatewayIcon::UI_GatewayIcon_C::get_StyleSheet() {
    return (void*)((uintptr_t)this + 0x6e0);
}
_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& _Game_UI_Holomap_UI_GatewayIcon::UI_GatewayIcon_C::get_HolomapRef() {
    return *(_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C**)((uintptr_t)this + 0x708);
}
_Script_CoreUObject::Class* _Game_UI_Holomap_UI_GatewayIcon::UI_GatewayIcon_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Holomap/UI_GatewayIcon.UI_GatewayIcon_C");
    return result;
}
void _Game_UI_Holomap_UI_GatewayIcon::UI_GatewayIcon_C::HandleDoorLabels(void* InText) {
    return;
}
void _Game_UI_Holomap_UI_GatewayIcon::UI_GatewayIcon_C::CreateSavePointIconWidget() {
    return;
}
void _Game_UI_Holomap_UI_GatewayIcon::UI_GatewayIcon_C::CreateMissionObjectiveIconWidtget() {
    return;
}
void _Game_UI_Holomap_UI_GatewayIcon::UI_GatewayIcon_C::CreateDeathLocationIconWidget() {
    return;
}
void _Game_UI_Holomap_UI_GatewayIcon::UI_GatewayIcon_C::CreateOneWay() {
    return;
}
void _Game_UI_Holomap_UI_GatewayIcon::UI_GatewayIcon_C::CreateDroidHack() {
    return;
}
void _Game_UI_Holomap_UI_GatewayIcon::UI_GatewayIcon_C::CreateDroidOvercharge() {
    return;
}
void _Game_UI_Holomap_UI_GatewayIcon::UI_GatewayIcon_C::Construct() {
    return;
}
void _Game_UI_Holomap_UI_GatewayIcon::UI_GatewayIcon_C::CreateWorldMapIconWidget(void* IconType) {
    return;
}
void _Game_UI_Holomap_UI_GatewayIcon::UI_GatewayIcon_C::CustomEvent_0() {
    return;
}
void _Game_UI_Holomap_UI_GatewayIcon::UI_GatewayIcon_C::Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_UI_Holomap_UI_GatewayIcon::UI_GatewayIcon_C::CreateForcePush() {
    return;
}
void _Game_UI_Holomap_UI_GatewayIcon::UI_GatewayIcon_C::CreateForcePull() {
    return;
}
void _Game_UI_Holomap_UI_GatewayIcon::UI_GatewayIcon_C::CreateForceTele() {
    return;
}
void _Game_UI_Holomap_UI_GatewayIcon::UI_GatewayIcon_C::CreateForceSlow() {
    return;
}
void _Game_UI_Holomap_UI_GatewayIcon::UI_GatewayIcon_C::ExecuteUbergraph_UI_GatewayIcon(int32_t EntryPoint) {
    return;
}
