#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\LocalPlayer.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "PanelSlot.hpp"
#include "PanelWidget.hpp"
#include "Visual.hpp"
#include "Widget.hpp"
#include "WidgetNavigation.hpp"
#include "WidgetTransform.hpp"
void _Script_UMG::Widget::SetVisibility(void* InVisibility) {
    return;
}
_Script_UMG::PanelSlot*& _Script_UMG::Widget::get_Slot() {
    return *(_Script_UMG::PanelSlot**)((uintptr_t)this + 0x28);
}
void _Script_UMG::Widget::SetNavigationRule(void* Direction, void* Rule, void* WidgetToFocus) {
    return;
}
void* _Script_UMG::Widget::get_bIsEnabledDelegate() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_UMG::Widget::get_ToolTipText() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_UMG::Widget::GetIsEnabled() {
    return;
}
void* _Script_UMG::Widget::get_ToolTipTextDelegate() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_UMG::Widget::get_ToolTipWidgetDelegate() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_UMG::Widget*& _Script_UMG::Widget::get_ToolTipWidget() {
    return *(_Script_UMG::Widget**)((uintptr_t)this + 0x68);
}
void* _Script_UMG::Widget::GetVisibility() {
    return;
}
void* _Script_UMG::Widget::get_VisibilityDelegate() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_UMG::Widget::get_RenderTransformPivot() {
    return (void*)((uintptr_t)this + 0xac);
}
void* _Script_UMG::Widget::get_RenderTransform() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_Engine::LocalPlayer* _Script_UMG::Widget::GetOwningLocalPlayer() {
    return;
}
bool _Script_UMG::Widget::get_bIsVariable() {
    return (*(uint8_t*)((uintptr_t)this + 0xb4 + 0)) & 1 != 0;
}
bool _Script_UMG::Widget::HasAnyUserFocus() {
    return;
}
bool _Script_UMG::Widget::HasFocusedDescendants() {
    return;
}
void _Script_UMG::Widget::set_bIsVariable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_UMG::Widget::SetRenderAngle(float Angle) {
    return;
}
bool _Script_UMG::Widget::get_bCreatedByConstructionScript() {
    return (*(uint8_t*)((uintptr_t)this + 0xb4 + 0)) & 2 != 0;
}
void _Script_UMG::Widget::set_bCreatedByConstructionScript(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb4 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_UMG::Widget::SetClipping(void* InClipping) {
    return;
}
bool _Script_UMG::Widget::get_bIsVolatile() {
    return (*(uint8_t*)((uintptr_t)this + 0xb4 + 0)) & 16 != 0;
}
bool _Script_UMG::Widget::get_bIsEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0xb4 + 0)) & 4 != 0;
}
void _Script_UMG::Widget::set_bIsEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb4 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_UMG::Widget::get_bOverride_Cursor() {
    return (*(uint8_t*)((uintptr_t)this + 0xb4 + 0)) & 8 != 0;
}
void _Script_UMG::Widget::SetAllNavigationRules(void* Rule, void* WidgetToFocus) {
    return;
}
void _Script_UMG::Widget::set_bOverride_Cursor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb4 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_UMG::Widget::RemoveFromParent() {
    return;
}
void _Script_UMG::Widget::set_bIsVolatile(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb4 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void* _Script_UMG::Widget::get_Cursor() {
    return (void*)((uintptr_t)this + 0xb5);
}
void* _Script_UMG::Widget::get_Clipping() {
    return (void*)((uintptr_t)this + 0xb6);
}
bool _Script_UMG::Widget::IsVisible() {
    return;
}
void* _Script_UMG::Widget::get_Visibility() {
    return (void*)((uintptr_t)this + 0xb7);
}
bool _Script_UMG::Widget::HasUserFocusedDescendants(_Script_Engine::PlayerController* PlayerController) {
    return;
}
float& _Script_UMG::Widget::get_RenderOpacity() {
    return *(float*)((uintptr_t)this + 0xb8);
}
_Script_UMG::WidgetNavigation*& _Script_UMG::Widget::get_Navigation() {
    return *(_Script_UMG::WidgetNavigation**)((uintptr_t)this + 0xc0);
}
void* _Script_UMG::Widget::get_NativeBindings() {
    return (void*)((uintptr_t)this + 0xf0);
}
_Script_CoreUObject::Class* _Script_UMG::Widget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.Widget");
    return result;
}
void _Script_UMG::Widget::SetUserFocus(_Script_Engine::PlayerController* PlayerController) {
    return;
}
void _Script_UMG::Widget::SetToolTipText(void*& InToolTipText) {
    return;
}
void _Script_UMG::Widget::SetToolTip(_Script_UMG::Widget* Widget) {
    return;
}
bool _Script_UMG::Widget::HasUserFocus(_Script_Engine::PlayerController* PlayerController) {
    return;
}
void _Script_UMG::Widget::SetRenderTranslation(_Script_CoreUObject::Vector2D Translation) {
    return;
}
void _Script_UMG::Widget::SetRenderTransformPivot(_Script_CoreUObject::Vector2D Pivot) {
    return;
}
void _Script_UMG::Widget::SetRenderTransform(_Script_UMG::WidgetTransform InTransform) {
    return;
}
void _Script_UMG::Widget::SetRenderShear(_Script_CoreUObject::Vector2D Shear) {
    return;
}
void _Script_UMG::Widget::SetRenderScale(_Script_CoreUObject::Vector2D Scale) {
    return;
}
void _Script_UMG::Widget::SetRenderOpacity(float InOpacity) {
    return;
}
void _Script_UMG::Widget::SetKeyboardFocus() {
    return;
}
void _Script_UMG::Widget::SetIsEnabled(bool bInIsEnabled) {
    return;
}
void _Script_UMG::Widget::SetCursor(void* InCursor) {
    return;
}
void _Script_UMG::Widget::ResetCursor() {
    return;
}
bool _Script_UMG::Widget::IsHovered() {
    return;
}
void _Script_UMG::Widget::InvalidateLayoutAndVolatility() {
    return;
}
bool _Script_UMG::Widget::HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex) {
    return;
}
_Script_UMG::PanelWidget* _Script_UMG::Widget::GetParent() {
    return;
}
bool _Script_UMG::Widget::HasMouseCapture() {
    return;
}
bool _Script_UMG::Widget::HasKeyboardFocus() {
    return;
}
float _Script_UMG::Widget::GetRenderOpacity() {
    return;
}
_Script_Engine::PlayerController* _Script_UMG::Widget::GetOwningPlayer() {
    return;
}
_Script_CoreUObject::Vector2D _Script_UMG::Widget::GetDesiredSize() {
    return;
}
_Script_SlateCore::Geometry _Script_UMG::Widget::GetCachedGeometry() {
    return;
}
void* _Script_UMG::Widget::GetClipping() {
    return;
}
void _Script_UMG::Widget::ForceVolatile(bool bForce) {
    return;
}
void _Script_UMG::Widget::ForceLayoutPrepass() {
    return;
}
