#include "..\FUObjectArray.hpp"
#include "UI_WorldMapGreeble_Secondary_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapHologramBase.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\ScaleBox.hpp"
void* _Game_UI_Map_UI_WorldMapGreeble_Secondary::UI_WorldMapGreeble_Secondary_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
_Script_RsGameTechRT::RsWorldMapHologramBase*& _Game_UI_Map_UI_WorldMapGreeble_Secondary::UI_WorldMapGreeble_Secondary_C::get_HologramActor() {
    return *(_Script_RsGameTechRT::RsWorldMapHologramBase**)((uintptr_t)this + 0x628);
}
_Script_UMG::ScaleBox*& _Game_UI_Map_UI_WorldMapGreeble_Secondary::UI_WorldMapGreeble_Secondary_C::get_Scaler() {
    return *(_Script_UMG::ScaleBox**)((uintptr_t)this + 0x620);
}
_Script_UMG::Border*& _Game_UI_Map_UI_WorldMapGreeble_Secondary::UI_WorldMapGreeble_Secondary_C::get_Border_0() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x610);
}
_Script_UMG::Image*& _Game_UI_Map_UI_WorldMapGreeble_Secondary::UI_WorldMapGreeble_Secondary_C::get_Image_0() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x618);
}
float& _Game_UI_Map_UI_WorldMapGreeble_Secondary::UI_WorldMapGreeble_Secondary_C::get_OrigScale() {
    return *(float*)((uintptr_t)this + 0x630);
}
_Script_CoreUObject::Class* _Game_UI_Map_UI_WorldMapGreeble_Secondary::UI_WorldMapGreeble_Secondary_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Map/UI_WorldMapGreeble_Secondary.UI_WorldMapGreeble_Secondary_C");
    return result;
}
void _Game_UI_Map_UI_WorldMapGreeble_Secondary::UI_WorldMapGreeble_Secondary_C::Construct() {
    return;
}
void _Game_UI_Map_UI_WorldMapGreeble_Secondary::UI_WorldMapGreeble_Secondary_C::Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_UI_Map_UI_WorldMapGreeble_Secondary::UI_WorldMapGreeble_Secondary_C::SetScale() {
    return;
}
void _Game_UI_Map_UI_WorldMapGreeble_Secondary::UI_WorldMapGreeble_Secondary_C::ExecuteUbergraph_UI_WorldMapGreeble_Secondary(int32_t EntryPoint) {
    return;
}
