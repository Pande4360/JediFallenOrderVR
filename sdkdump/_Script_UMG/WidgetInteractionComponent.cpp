#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "WidgetComponent.hpp"
#include "WidgetInteractionComponent.hpp"
void* _Script_UMG::WidgetInteractionComponent::get_OnHoveredWidgetChanged() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void* _Script_UMG::WidgetInteractionComponent::get_TraceChannel() {
    return (void*)((uintptr_t)this + 0x2f0);
}
void _Script_UMG::WidgetInteractionComponent::SetCustomHitResult(_Script_Engine::HitResult& HitResult) {
    return;
}
int32_t& _Script_UMG::WidgetInteractionComponent::get_VirtualUserIndex() {
    return *(int32_t*)((uintptr_t)this + 0x2e8);
}
float& _Script_UMG::WidgetInteractionComponent::get_PointerIndex() {
    return *(float*)((uintptr_t)this + 0x2ec);
}
void* _Script_UMG::WidgetInteractionComponent::get_InteractionSource() {
    return (void*)((uintptr_t)this + 0x2f8);
}
float& _Script_UMG::WidgetInteractionComponent::get_InteractionDistance() {
    return *(float*)((uintptr_t)this + 0x2f4);
}
void _Script_UMG::WidgetInteractionComponent::set_bEnableHitTesting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::WidgetInteractionComponent::IsOverFocusableWidget() {
    return;
}
bool _Script_UMG::WidgetInteractionComponent::get_bEnableHitTesting() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f9 + 0)) & 1 != 0;
}
bool _Script_UMG::WidgetInteractionComponent::get_bShowDebug() {
    return (*(uint8_t*)((uintptr_t)this + 0x2fa + 0)) & 1 != 0;
}
void _Script_UMG::WidgetInteractionComponent::set_bShowDebug(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2fa + 0);
    *(uint8_t*)((uintptr_t)this + 0x2fa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::WidgetInteractionComponent::get_DebugColor() {
    return (void*)((uintptr_t)this + 0x2fc);
}
void* _Script_UMG::WidgetInteractionComponent::get_CustomHitResult() {
    return (void*)((uintptr_t)this + 0x388);
}
void* _Script_UMG::WidgetInteractionComponent::get_LocalHitLocation() {
    return (void*)((uintptr_t)this + 0x420);
}
void* _Script_UMG::WidgetInteractionComponent::get_LastLocalHitLocation() {
    return (void*)((uintptr_t)this + 0x428);
}
_Script_UMG::WidgetComponent*& _Script_UMG::WidgetInteractionComponent::get_HoveredWidgetComponent() {
    return *(_Script_UMG::WidgetComponent**)((uintptr_t)this + 0x430);
}
void* _Script_UMG::WidgetInteractionComponent::get_LastHitResult() {
    return (void*)((uintptr_t)this + 0x438);
}
bool _Script_UMG::WidgetInteractionComponent::get_bIsHoveredWidgetInteractable() {
    return (*(uint8_t*)((uintptr_t)this + 0x4d0 + 0)) & 1 != 0;
}
void _Script_UMG::WidgetInteractionComponent::set_bIsHoveredWidgetInteractable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::WidgetInteractionComponent::get_bIsHoveredWidgetFocusable() {
    return (*(uint8_t*)((uintptr_t)this + 0x4d1 + 0)) & 1 != 0;
}
void _Script_UMG::WidgetInteractionComponent::set_bIsHoveredWidgetFocusable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4d1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4d1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::WidgetInteractionComponent::get_bIsHoveredWidgetHitTestVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x4d2 + 0)) & 1 != 0;
}
void _Script_UMG::WidgetInteractionComponent::set_bIsHoveredWidgetHitTestVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4d2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4d2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_UMG::WidgetInteractionComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.WidgetInteractionComponent");
    return result;
}
bool _Script_UMG::WidgetInteractionComponent::SendKeyChar(void* Characters, bool bRepeat) {
    return;
}
void _Script_UMG::WidgetInteractionComponent::ScrollWheel(float ScrollDelta) {
    return;
}
void _Script_UMG::WidgetInteractionComponent::ReleasePointerKey(_Script_InputCore::Key Key) {
    return;
}
bool _Script_UMG::WidgetInteractionComponent::ReleaseKey(_Script_InputCore::Key Key) {
    return;
}
_Script_UMG::WidgetComponent* _Script_UMG::WidgetInteractionComponent::GetHoveredWidgetComponent() {
    return;
}
void _Script_UMG::WidgetInteractionComponent::PressPointerKey(_Script_InputCore::Key Key) {
    return;
}
bool _Script_UMG::WidgetInteractionComponent::PressKey(_Script_InputCore::Key Key, bool bRepeat) {
    return;
}
bool _Script_UMG::WidgetInteractionComponent::PressAndReleaseKey(_Script_InputCore::Key Key) {
    return;
}
bool _Script_UMG::WidgetInteractionComponent::IsOverInteractableWidget() {
    return;
}
bool _Script_UMG::WidgetInteractionComponent::IsOverHitTestVisibleWidget() {
    return;
}
_Script_Engine::HitResult _Script_UMG::WidgetInteractionComponent::GetLastHitResult() {
    return;
}
_Script_CoreUObject::Vector2D _Script_UMG::WidgetInteractionComponent::Get2DHitLocation() {
    return;
}
