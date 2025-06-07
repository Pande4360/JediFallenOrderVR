#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_Map_MapObjective\MapObjective_C.hpp"
#include "UI_ObjectiveMarker_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_zDoNotShip_DebugUI_UI_ObjectiveMarker::UI_ObjectiveMarker_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
void* _Game_zDoNotShip_DebugUI_UI_ObjectiveMarker::UI_ObjectiveMarker_C::GetText_1() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_zDoNotShip_DebugUI_UI_ObjectiveMarker::UI_ObjectiveMarker_C::get_NewAnimation_2() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_UMG::Image*& _Game_zDoNotShip_DebugUI_UI_ObjectiveMarker::UI_ObjectiveMarker_C::get_Image_83() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x218);
}
_Script_UMG::TextBlock*& _Game_zDoNotShip_DebugUI_UI_ObjectiveMarker::UI_ObjectiveMarker_C::get_TextBlock_265() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x220);
}
_Script_CoreUObject::Class* _Game_zDoNotShip_DebugUI_UI_ObjectiveMarker::UI_ObjectiveMarker_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/zDoNotShip/DebugUI/UI_ObjectiveMarker.UI_ObjectiveMarker_C");
    return result;
}
_Game_UI_Map_MapObjective::MapObjective_C*& _Game_zDoNotShip_DebugUI_UI_ObjectiveMarker::UI_ObjectiveMarker_C::get_objective() {
    return *(_Game_UI_Map_MapObjective::MapObjective_C**)((uintptr_t)this + 0x228);
}
void _Game_zDoNotShip_DebugUI_UI_ObjectiveMarker::UI_ObjectiveMarker_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_zDoNotShip_DebugUI_UI_ObjectiveMarker::UI_ObjectiveMarker_C::Activate(_Game_UI_Map_MapObjective::MapObjective_C* objective) {
    return;
}
void _Game_zDoNotShip_DebugUI_UI_ObjectiveMarker::UI_ObjectiveMarker_C::ExecuteUbergraph_UI_ObjectiveMarker(int32_t EntryPoint) {
    return;
}
