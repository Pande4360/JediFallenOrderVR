#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "BorderSlot.hpp"
#include "CanvasPanelSlot.hpp"
#include "GridSlot.hpp"
#include "HorizontalBoxSlot.hpp"
#include "OverlaySlot.hpp"
#include "UniformGridSlot.hpp"
#include "VerticalBoxSlot.hpp"
#include "Widget.hpp"
#include "WidgetLayoutLibrary.hpp"
_Script_CoreUObject::Class* _Script_UMG::WidgetLayoutLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.WidgetLayoutLibrary");
    return result;
}
_Script_UMG::VerticalBoxSlot* _Script_UMG::WidgetLayoutLibrary::SlotAsVerticalBoxSlot(_Script_UMG::Widget* Widget) {
    return;
}
_Script_UMG::UniformGridSlot* _Script_UMG::WidgetLayoutLibrary::SlotAsUniformGridSlot(_Script_UMG::Widget* Widget) {
    return;
}
_Script_UMG::GridSlot* _Script_UMG::WidgetLayoutLibrary::SlotAsGridSlot(_Script_UMG::Widget* Widget) {
    return;
}
_Script_UMG::OverlaySlot* _Script_UMG::WidgetLayoutLibrary::SlotAsOverlaySlot(_Script_UMG::Widget* Widget) {
    return;
}
_Script_UMG::CanvasPanelSlot* _Script_UMG::WidgetLayoutLibrary::SlotAsCanvasSlot(_Script_UMG::Widget* Widget) {
    return;
}
_Script_UMG::HorizontalBoxSlot* _Script_UMG::WidgetLayoutLibrary::SlotAsHorizontalBoxSlot(_Script_UMG::Widget* Widget) {
    return;
}
_Script_UMG::BorderSlot* _Script_UMG::WidgetLayoutLibrary::SlotAsBorderSlot(_Script_UMG::Widget* Widget) {
    return;
}
void _Script_UMG::WidgetLayoutLibrary::RemoveAllWidgets(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
bool _Script_UMG::WidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition(_Script_Engine::PlayerController* PlayerController, _Script_CoreUObject::Vector WorldLocation, _Script_CoreUObject::Vector2D& ScreenPosition) {
    return;
}
_Script_SlateCore::Geometry _Script_UMG::WidgetLayoutLibrary::GetViewportWidgetGeometry(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
_Script_CoreUObject::Vector2D _Script_UMG::WidgetLayoutLibrary::GetViewportSize(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
float _Script_UMG::WidgetLayoutLibrary::GetViewportScale(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
_Script_SlateCore::Geometry _Script_UMG::WidgetLayoutLibrary::GetPlayerScreenWidgetGeometry(_Script_Engine::PlayerController* PlayerController) {
    return;
}
bool _Script_UMG::WidgetLayoutLibrary::GetMousePositionScaledByDPI(_Script_Engine::PlayerController* Player, float& LocationX, float& LocationY) {
    return;
}
_Script_CoreUObject::Vector2D _Script_UMG::WidgetLayoutLibrary::GetMousePositionOnViewport(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
_Script_CoreUObject::Vector2D _Script_UMG::WidgetLayoutLibrary::GetMousePositionOnPlatform() {
    return;
}
