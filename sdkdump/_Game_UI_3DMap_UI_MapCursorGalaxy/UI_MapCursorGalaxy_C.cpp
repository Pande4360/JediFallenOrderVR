#include "..\FUObjectArray.hpp"
#include "UI_MapCursorGalaxy_C.hpp"
#include "..\_Game_UI_Map_MapReticule_UI_mapreticule_triangle\UI_mapreticule_triangle_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\CanvasPanelSlot.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
#include "..\_Script_UMG\Spacer.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UniformGridPanel.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
float& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_PaddingValue() {
    return *(float*)((uintptr_t)this + 0x2e8);
}
_Script_UMG::Spacer*& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_GalaxyZoomSpacer() {
    return *(_Script_UMG::Spacer**)((uintptr_t)this + 0x240);
}
void* _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::WidgetAnimation*& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_NewSelection() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_UMG::UniformGridPanel*& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_GalaxyZoomContainer() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x238);
}
_Script_UMG::WidgetAnimation*& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_ElevationControlsTutorial() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x218);
}
_Script_UMG::Spacer*& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_BracketSpacer() {
    return *(_Script_UMG::Spacer**)((uintptr_t)this + 0x220);
}
void _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::ExecuteUbergraph_UI_MapCursorGalaxy(int32_t EntryPoint) {
    return;
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_DashedRing() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x228);
}
_Script_UMG::Border*& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_GalaxyTarget() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x230);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_Graphs() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x248);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_Image_2() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x250);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_Image_3() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x258);
}
void _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::set_IsGalaxy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x46c + 0);
    *(uint8_t*)((uintptr_t)this + 0x46c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_l_bracket() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_Medical() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_nottoscale() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::UniformGridPanel*& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_PlanetFlyoutAurebesh() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x278);
}
_Script_UMG::TextBlock*& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_PlanetNameAurebesh() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_ProgressCircle() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_r_bracket() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
_Script_UMG::RetainerBox*& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_RetainerBox_0() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x298);
}
float& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_SpacerSize() {
    return *(float*)((uintptr_t)this + 0x2ec);
}
_Script_UMG::Spacer*& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_TriangleSpacer1() {
    return *(_Script_UMG::Spacer**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::Spacer*& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_TriangleSpacer2() {
    return *(_Script_UMG::Spacer**)((uintptr_t)this + 0x2a8);
}
_Game_UI_Map_MapReticule_UI_mapreticule_triangle::UI_mapreticule_triangle_C*& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_UI_mapreticule_triangle() {
    return *(_Game_UI_Map_MapReticule_UI_mapreticule_triangle::UI_mapreticule_triangle_C**)((uintptr_t)this + 0x2b0);
}
_Game_UI_Map_MapReticule_UI_mapreticule_triangle::UI_mapreticule_triangle_C*& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_UI_mapreticule_triangle_1() {
    return *(_Game_UI_Map_MapReticule_UI_mapreticule_triangle::UI_mapreticule_triangle_C**)((uintptr_t)this + 0x2b8);
}
_Game_UI_Map_MapReticule_UI_mapreticule_triangle::UI_mapreticule_triangle_C*& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_UI_mapreticule_triangle_5() {
    return *(_Game_UI_Map_MapReticule_UI_mapreticule_triangle::UI_mapreticule_triangle_C**)((uintptr_t)this + 0x2c0);
}
_Game_UI_Map_MapReticule_UI_mapreticule_triangle::UI_mapreticule_triangle_C*& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_UI_mapreticule_triangle_6() {
    return *(_Game_UI_Map_MapReticule_UI_mapreticule_triangle::UI_mapreticule_triangle_C**)((uintptr_t)this + 0x2c8);
}
float& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_hSpace() {
    return *(float*)((uintptr_t)this + 0x2d0);
}
float& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_vSpace() {
    return *(float*)((uintptr_t)this + 0x2d4);
}
float& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_ZoomScaleMultiplier() {
    return *(float*)((uintptr_t)this + 0x2d8);
}
float& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_InitialZoomValue() {
    return *(float*)((uintptr_t)this + 0x2dc);
}
int32_t& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_TotalLevels() {
    return *(int32_t*)((uintptr_t)this + 0x2e0);
}
int32_t& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_Current_Level() {
    return *(int32_t*)((uintptr_t)this + 0x2e4);
}
_Script_CoreUObject::Class* _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/3DMap/UI_MapCursorGalaxy.UI_MapCursorGalaxy_C");
    return result;
}
void* _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_StyleSheet() {
    return (void*)((uintptr_t)this + 0x2f0);
}
void* _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_SelectedRegion() {
    return (void*)((uintptr_t)this + 0x460);
}
int32_t& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_RegionCompletionPercent() {
    return *(int32_t*)((uintptr_t)this + 0x468);
}
bool _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_IsGalaxy() {
    return (*(uint8_t*)((uintptr_t)this + 0x46c + 0)) & 1 != 0;
}
float& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_GalaxyScaleUpperBound() {
    return *(float*)((uintptr_t)this + 0x470);
}
void _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::Construct0() {
    return;
}
_Script_UMG::CanvasPanelSlot*& _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_FlyoutCanvasSlotRef() {
    return *(_Script_UMG::CanvasPanelSlot**)((uintptr_t)this + 0x478);
}
bool _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_IsNewPlanetHighlighted() {
    return (*(uint8_t*)((uintptr_t)this + 0x480 + 0)) & 1 != 0;
}
void _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::set_IsNewPlanetHighlighted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x480 + 0);
    *(uint8_t*)((uintptr_t)this + 0x480 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::get_PlanetNameUnlocalized() {
    return (void*)((uintptr_t)this + 0x488);
}
void _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::NewPlanetSelected(void* PlanetNameUnlocalized) {
    return;
}
void _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C::UpdateProgressCircle(float Progress) {
    return;
}
