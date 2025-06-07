#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\BodySetup.hpp"
#include "..\_Script_Engine\LocalPlayer.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\MeshComponent.hpp"
#include "..\_Script_Engine\TextureRenderTarget2D.hpp"
#include "UserWidget.hpp"
#include "WidgetComponent.hpp"
void* _Script_UMG::WidgetComponent::get_Space() {
    return (void*)((uintptr_t)this + 0xb60);
}
float& _Script_UMG::WidgetComponent::get_CylinderArcAngle() {
    return *(float*)((uintptr_t)this + 0xc58);
}
void _Script_UMG::WidgetComponent::set_bRedrawRequested(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb79 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb79 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::WidgetComponent::get_bRedrawRequested() {
    return (*(uint8_t*)((uintptr_t)this + 0xb79 + 0)) & 1 != 0;
}
void* _Script_UMG::WidgetComponent::get_TimingPolicy() {
    return (void*)((uintptr_t)this + 0xb61);
}
_Script_Engine::MaterialInterface*& _Script_UMG::WidgetComponent::get_TranslucentMaterial_OneSided() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0xc08);
}
void* _Script_UMG::WidgetComponent::get_WidgetClass() {
    return (void*)((uintptr_t)this + 0xb68);
}
void _Script_UMG::WidgetComponent::set_bManuallyRedraw(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb78 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::MaterialInterface*& _Script_UMG::WidgetComponent::get_OpaqueMaterial_OneSided() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0xc18);
}
void* _Script_UMG::WidgetComponent::get_DrawSize() {
    return (void*)((uintptr_t)this + 0xb70);
}
bool _Script_UMG::WidgetComponent::get_bManuallyRedraw() {
    return (*(uint8_t*)((uintptr_t)this + 0xb78 + 0)) & 1 != 0;
}
_Script_UMG::UserWidget* _Script_UMG::WidgetComponent::GetUserWidgetObject() {
    return;
}
_Script_Engine::TextureRenderTarget2D* _Script_UMG::WidgetComponent::GetRenderTarget() {
    return;
}
float& _Script_UMG::WidgetComponent::get_RedrawTime() {
    return *(float*)((uintptr_t)this + 0xb7c);
}
int32_t& _Script_UMG::WidgetComponent::get_LayerZOrder() {
    return *(int32_t*)((uintptr_t)this + 0xc50);
}
void* _Script_UMG::WidgetComponent::get_CurrentDrawSize() {
    return (void*)((uintptr_t)this + 0xb88);
}
void _Script_UMG::WidgetComponent::set_bNeedToRequestWidget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc43 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc43 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::WidgetComponent::get_bDrawAtDesiredSize() {
    return (*(uint8_t*)((uintptr_t)this + 0xb90 + 0)) & 1 != 0;
}
void _Script_UMG::WidgetComponent::set_bDrawAtDesiredSize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb90 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb90 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_UMG::WidgetComponent::SetDrawSize(_Script_CoreUObject::Vector2D Size) {
    return;
}
void* _Script_UMG::WidgetComponent::get_Pivot() {
    return (void*)((uintptr_t)this + 0xb94);
}
void _Script_UMG::WidgetComponent::SetTintColorAndOpacity(_Script_CoreUObject::LinearColor NewTintColorAndOpacity) {
    return;
}
bool _Script_UMG::WidgetComponent::get_bReceiveHardwareInput() {
    return (*(uint8_t*)((uintptr_t)this + 0xb9c + 0)) & 1 != 0;
}
void _Script_UMG::WidgetComponent::set_bReceiveHardwareInput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb9c + 0);
    *(uint8_t*)((uintptr_t)this + 0xb9c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::LocalPlayer* _Script_UMG::WidgetComponent::GetOwnerPlayer() {
    return;
}
void _Script_UMG::WidgetComponent::SetOwnerPlayer(_Script_Engine::LocalPlayer* LocalPlayer) {
    return;
}
bool _Script_UMG::WidgetComponent::get_bWindowFocusable() {
    return (*(uint8_t*)((uintptr_t)this + 0xb9d + 0)) & 1 != 0;
}
void _Script_UMG::WidgetComponent::set_bIsTwoSided(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbcd + 0);
    *(uint8_t*)((uintptr_t)this + 0xbcd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_UMG::WidgetComponent::set_bWindowFocusable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb9d + 0);
    *(uint8_t*)((uintptr_t)this + 0xb9d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::WidgetComponent::get_bApplyGammaCorrection() {
    return (*(uint8_t*)((uintptr_t)this + 0xb9e + 0)) & 1 != 0;
}
void _Script_UMG::WidgetComponent::set_bApplyGammaCorrection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb9e + 0);
    *(uint8_t*)((uintptr_t)this + 0xb9e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::TextureRenderTarget2D*& _Script_UMG::WidgetComponent::get_RenderTarget() {
    return *(_Script_Engine::TextureRenderTarget2D**)((uintptr_t)this + 0xc30);
}
_Script_Engine::LocalPlayer*& _Script_UMG::WidgetComponent::get_OwnerPlayer() {
    return *(_Script_Engine::LocalPlayer**)((uintptr_t)this + 0xba0);
}
void* _Script_UMG::WidgetComponent::get_BackgroundColor() {
    return (void*)((uintptr_t)this + 0xba8);
}
void* _Script_UMG::WidgetComponent::get_TintColorAndOpacity() {
    return (void*)((uintptr_t)this + 0xbb8);
}
float& _Script_UMG::WidgetComponent::get_OpacityFromTexture() {
    return *(float*)((uintptr_t)this + 0xbc8);
}
void _Script_UMG::WidgetComponent::SetManuallyRedraw(bool bUseManualRedraw) {
    return;
}
void* _Script_UMG::WidgetComponent::get_BlendMode() {
    return (void*)((uintptr_t)this + 0xbcc);
}
bool _Script_UMG::WidgetComponent::get_bIsTwoSided() {
    return (*(uint8_t*)((uintptr_t)this + 0xbcd + 0)) & 1 != 0;
}
bool _Script_UMG::WidgetComponent::get_TickWhenOffscreen() {
    return (*(uint8_t*)((uintptr_t)this + 0xbce + 0)) & 1 != 0;
}
void _Script_UMG::WidgetComponent::set_TickWhenOffscreen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbce + 0);
    *(uint8_t*)((uintptr_t)this + 0xbce + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::UserWidget*& _Script_UMG::WidgetComponent::get_Widget() {
    return *(_Script_UMG::UserWidget**)((uintptr_t)this + 0xbd0);
}
_Script_Engine::BodySetup*& _Script_UMG::WidgetComponent::get_BodySetup() {
    return *(_Script_Engine::BodySetup**)((uintptr_t)this + 0xbf8);
}
_Script_Engine::MaterialInterface*& _Script_UMG::WidgetComponent::get_TranslucentMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0xc00);
}
_Script_Engine::MaterialInterface*& _Script_UMG::WidgetComponent::get_OpaqueMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0xc10);
}
_Script_Engine::MaterialInterface*& _Script_UMG::WidgetComponent::get_MaskedMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0xc20);
}
void _Script_UMG::WidgetComponent::set_bEditTimeUsable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc41 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc41 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::MaterialInterface*& _Script_UMG::WidgetComponent::get_MaskedMaterial_OneSided() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0xc28);
}
_Script_Engine::MaterialInstanceDynamic*& _Script_UMG::WidgetComponent::get_MaterialInstance() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0xc38);
}
bool _Script_UMG::WidgetComponent::get_bAddedToScreen() {
    return (*(uint8_t*)((uintptr_t)this + 0xc40 + 0)) & 1 != 0;
}
void _Script_UMG::WidgetComponent::set_bAddedToScreen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc40 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::WidgetComponent::get_bEditTimeUsable() {
    return (*(uint8_t*)((uintptr_t)this + 0xc41 + 0)) & 1 != 0;
}
bool _Script_UMG::WidgetComponent::get_bShouldUsePooling() {
    return (*(uint8_t*)((uintptr_t)this + 0xc42 + 0)) & 1 != 0;
}
void _Script_UMG::WidgetComponent::set_bShouldUsePooling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc42 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc42 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::WidgetComponent::get_bNeedToRequestWidget() {
    return (*(uint8_t*)((uintptr_t)this + 0xc43 + 0)) & 1 != 0;
}
void* _Script_UMG::WidgetComponent::get_SharedLayerName() {
    return (void*)((uintptr_t)this + 0xc48);
}
void* _Script_UMG::WidgetComponent::get_GeometryMode() {
    return (void*)((uintptr_t)this + 0xc54);
}
_Script_CoreUObject::Class* _Script_UMG::WidgetComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.WidgetComponent");
    return result;
}
void _Script_UMG::WidgetComponent::SetWidget(_Script_UMG::UserWidget* Widget) {
    return;
}
void _Script_UMG::WidgetComponent::SetBackgroundColor(_Script_CoreUObject::LinearColor NewBackgroundColor) {
    return;
}
void _Script_UMG::WidgetComponent::RequestRedraw() {
    return;
}
bool _Script_UMG::WidgetComponent::RequestPooledResources() {
    return;
}
void _Script_UMG::WidgetComponent::ReleasePooledResources() {
    return;
}
_Script_Engine::MaterialInstanceDynamic* _Script_UMG::WidgetComponent::GetMaterialInstance() {
    return;
}
_Script_CoreUObject::Vector2D _Script_UMG::WidgetComponent::GetDrawSize() {
    return;
}
