#include "..\FUObjectArray.hpp"
#include "UI_MapCursor_C.hpp"
#include "..\_Game_UI_Map_UI_MapLevelLow\UI_MapLevelLow_C.hpp"
#include "..\_Game_UI_Map_UI_MapLevelTop\UI_MapLevelTop_C.hpp"
#include "..\_Game_UI_Map_UI_Map_Loader\UI_Map_Loader_C.hpp"
#include "..\_Game_UI_UI_MenuButtonPrompt\UI_MenuButtonPrompt_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\CanvasPanelSlot.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
#include "..\_Script_UMG\SizeBox.hpp"
#include "..\_Script_UMG\Spacer.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::VerticalBox*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_LevelContainer() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x270);
}
void* _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::WidgetAnimation*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_ElevationControlsTutorial() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_UMG::TextBlock*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_ExploredPercentLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x238);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_ele_botline() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x218);
}
float& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_SpacerSize() {
    return *(float*)((uintptr_t)this + 0x34c);
}
_Script_UMG::VerticalBox*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_EleLevel() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x228);
}
int32_t& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_TotalLevels() {
    return *(int32_t*)((uintptr_t)this + 0x340);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_ele_topline() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x220);
}
_Script_UMG::VerticalBox*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_ElevationPromptContainer() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x230);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_Image_0() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x240);
}
void _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::ExecuteUbergraph_UI_MapCursor(int32_t EntryPoint) {
    return;
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_Image_1() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x248);
}
void* _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_StyleSheet() {
    return (void*)((uintptr_t)this + 0x350);
}
_Game_UI_Map_UI_MapLevelLow::UI_MapLevelLow_C*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_UI_MapLevelLow_C_2() {
    return *(_Game_UI_Map_UI_MapLevelLow::UI_MapLevelLow_C**)((uintptr_t)this + 0x2f8);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_Image_4() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x250);
}
float& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_GalaxyScaleUpperBound() {
    return *(float*)((uintptr_t)this + 0x4d0);
}
float& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_InitialZoomValue() {
    return *(float*)((uintptr_t)this + 0x33c);
}
_Game_UI_Map_UI_MapLevelLow::UI_MapLevelLow_C*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_UI_MapLevelLow_1() {
    return *(_Game_UI_Map_UI_MapLevelLow::UI_MapLevelLow_C**)((uintptr_t)this + 0x2e8);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_Image_5() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x258);
}
bool _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_IsGalaxy() {
    return (*(uint8_t*)((uintptr_t)this + 0x4cc + 0)) & 1 != 0;
}
_Script_UMG::Border*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_PromptHolder() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x290);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_Image_6() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_Image_7() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_LevelDown() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x278);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_LevelUp() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x280);
}
_Script_UMG::CanvasPanel*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_MainCanvas() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_Ret_Default() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
float& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_vSpace() {
    return *(float*)((uintptr_t)this + 0x334);
}
_Script_UMG::RetainerBox*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_RetainerBox_0() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::RetainerBox*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_RetainerBox_6() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::CanvasPanel*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_Reticule() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::RetainerBox*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_RoamingTarget() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x2b8);
}
_Script_UMG::CanvasPanelSlot*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_FlyoutCanvasSlotRef() {
    return *(_Script_UMG::CanvasPanelSlot**)((uintptr_t)this + 0x4d8);
}
_Script_UMG::SizeBox*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_SizeBox_0() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x2c0);
}
_Script_UMG::Spacer*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_ZoomSlideSpacer() {
    return *(_Script_UMG::Spacer**)((uintptr_t)this + 0x328);
}
_Script_UMG::HorizontalBox*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_TargetContainer() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x2c8);
}
void _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::PreConstruct0(bool IsDesignTime) {
    return;
}
_Script_UMG::TextBlock*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_TextBlock_3() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2d0);
}
void _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::HandleTargetMode(bool IsLoading) {
    return;
}
_Game_UI_Map_UI_Map_Loader::UI_Map_Loader_C*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_UI_Map_Loader() {
    return *(_Game_UI_Map_UI_Map_Loader::UI_Map_Loader_C**)((uintptr_t)this + 0x2d8);
}
float& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_hSpace() {
    return *(float*)((uintptr_t)this + 0x330);
}
_Game_UI_Map_UI_MapLevelLow::UI_MapLevelLow_C*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_UI_MapLevelLow() {
    return *(_Game_UI_Map_UI_MapLevelLow::UI_MapLevelLow_C**)((uintptr_t)this + 0x2e0);
}
void* _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_SelectedRegion() {
    return (void*)((uintptr_t)this + 0x4c0);
}
_Game_UI_Map_UI_MapLevelLow::UI_MapLevelLow_C*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_UI_MapLevelLow_C_1() {
    return *(_Game_UI_Map_UI_MapLevelLow::UI_MapLevelLow_C**)((uintptr_t)this + 0x2f0);
}
_Game_UI_Map_UI_MapLevelTop::UI_MapLevelTop_C*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_UI_MapLevelTop() {
    return *(_Game_UI_Map_UI_MapLevelTop::UI_MapLevelTop_C**)((uintptr_t)this + 0x300);
}
void _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::set_IsGalaxy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4cc + 0);
    *(uint8_t*)((uintptr_t)this + 0x4cc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::Spacer*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_wSpacerTarget1() {
    return *(_Script_UMG::Spacer**)((uintptr_t)this + 0x308);
}
void _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::UpdateElevationLevel(int32_t CurrentLevel, int32_t TotalLevels) {
    return;
}
_Script_UMG::Spacer*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_wSpacerTarget2() {
    return *(_Script_UMG::Spacer**)((uintptr_t)this + 0x310);
}
void _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::Construct0() {
    return;
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_ZoomIndicator() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x318);
}
float& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_PaddingValue() {
    return *(float*)((uintptr_t)this + 0x348);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_ZoomLines() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x320);
}
float& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_ZoomScaleMultiplier() {
    return *(float*)((uintptr_t)this + 0x338);
}
int32_t& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_Current_Level() {
    return *(int32_t*)((uintptr_t)this + 0x344);
}
int32_t& _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::get_RegionCompletionPercent() {
    return *(int32_t*)((uintptr_t)this + 0x4c8);
}
_Script_CoreUObject::Class* _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/3DMap/UI_MapCursor.UI_MapCursor_C");
    return result;
}
void _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::PlayElevationTutorialBlink(bool Blink) {
    return;
}
void _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::HandleTargetInteriorLevel() {
    return;
}
void _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C::UpdateButtonPromptKeys() {
    return;
}
