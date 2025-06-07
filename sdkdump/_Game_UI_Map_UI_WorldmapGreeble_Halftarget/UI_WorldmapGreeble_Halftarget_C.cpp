#include "..\FUObjectArray.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_WorldMapHologram\BP_WorldMapHologram_C.hpp"
#include "UI_WorldmapGreeble_Halftarget_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\ScaleBox.hpp"
void* _Game_UI_Map_UI_WorldmapGreeble_Halftarget::UI_WorldmapGreeble_Halftarget_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
_Script_UMG::Image*& _Game_UI_Map_UI_WorldmapGreeble_Halftarget::UI_WorldmapGreeble_Halftarget_C::get_Greeble() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x610);
}
_Script_CoreUObject::Class* _Game_UI_Map_UI_WorldmapGreeble_Halftarget::UI_WorldmapGreeble_Halftarget_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Map/UI_WorldmapGreeble_Halftarget.UI_WorldmapGreeble_Halftarget_C");
    return result;
}
float& _Game_UI_Map_UI_WorldmapGreeble_Halftarget::UI_WorldmapGreeble_Halftarget_C::get_OrigScale() {
    return *(float*)((uintptr_t)this + 0x620);
}
_Script_UMG::ScaleBox*& _Game_UI_Map_UI_WorldmapGreeble_Halftarget::UI_WorldmapGreeble_Halftarget_C::get_Scaler() {
    return *(_Script_UMG::ScaleBox**)((uintptr_t)this + 0x618);
}
_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& _Game_UI_Map_UI_WorldmapGreeble_Halftarget::UI_WorldmapGreeble_Halftarget_C::get_HologramActor() {
    return *(_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C**)((uintptr_t)this + 0x628);
}
void _Game_UI_Map_UI_WorldmapGreeble_Halftarget::UI_WorldmapGreeble_Halftarget_C::Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_UI_Map_UI_WorldmapGreeble_Halftarget::UI_WorldmapGreeble_Halftarget_C::PreConstruct(bool IsDesignTime) {
    return;
}
void _Game_UI_Map_UI_WorldmapGreeble_Halftarget::UI_WorldmapGreeble_Halftarget_C::SetScale() {
    return;
}
void _Game_UI_Map_UI_WorldmapGreeble_Halftarget::UI_WorldmapGreeble_Halftarget_C::ExecuteUbergraph_UI_WorldmapGreeble_Halftarget(int32_t EntryPoint) {
    return;
}
