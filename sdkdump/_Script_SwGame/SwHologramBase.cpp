#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\SceneCaptureComponent2D.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TextureRenderTarget2D.hpp"
#include "SwHologramBase.hpp"
#include "SwHologramCameraFacerComponent.hpp"
bool _Script_SwGame::SwHologramBase::get_bStartActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x360 + 0)) & 1 != 0;
}
void _Script_SwGame::SwHologramBase::set_bStartActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x360 + 0);
    *(uint8_t*)((uintptr_t)this + 0x360 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwHologramBase::get_BaseHologramMaterialPtr() {
    return (void*)((uintptr_t)this + 0x368);
}
_Script_Engine::MaterialInstanceDynamic*& _Script_SwGame::SwHologramBase::get_HologramMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x908);
}
float& _Script_SwGame::SwHologramBase::get_EmissiveIntensity() {
    return *(float*)((uintptr_t)this + 0x390);
}
float& _Script_SwGame::SwHologramBase::get_DisplayRampTime() {
    return *(float*)((uintptr_t)this + 0x394);
}
float& _Script_SwGame::SwHologramBase::get_CardScale() {
    return *(float*)((uintptr_t)this + 0x39c);
}
void _Script_SwGame::SwHologramBase::ActivateHologram() {
    return;
}
float& _Script_SwGame::SwHologramBase::get_CardVerticalOffset() {
    return *(float*)((uintptr_t)this + 0x398);
}
void _Script_SwGame::SwHologramBase::SetCameraFOV(float FOV) {
    return;
}
_Script_Engine::SceneCaptureComponent2D*& _Script_SwGame::SwHologramBase::get_HologramCaptureCamera() {
    return *(_Script_Engine::SceneCaptureComponent2D**)((uintptr_t)this + 0x8f8);
}
int32_t& _Script_SwGame::SwHologramBase::get_CardTranslucencySortPriority() {
    return *(int32_t*)((uintptr_t)this + 0x3a0);
}
float& _Script_SwGame::SwHologramBase::get_CameraDistance() {
    return *(float*)((uintptr_t)this + 0x3a4);
}
bool _Script_SwGame::SwHologramBase::HologramActive() {
    return;
}
float& _Script_SwGame::SwHologramBase::get_CameraFOV() {
    return *(float*)((uintptr_t)this + 0x3a8);
}
int32_t& _Script_SwGame::SwHologramBase::get_RenderTargetSize() {
    return *(int32_t*)((uintptr_t)this + 0x3ac);
}
_Script_Engine::SceneComponent*& _Script_SwGame::SwHologramBase::get_HologramSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x3b0);
}
void* _Script_SwGame::SwHologramBase::get_HologramSceneName() {
    return (void*)((uintptr_t)this + 0x3b8);
}
void* _Script_SwGame::SwHologramBase::get_CameraPostProcessSettings() {
    return (void*)((uintptr_t)this + 0x3c0);
}
_Script_SwGame::SwHologramCameraFacerComponent*& _Script_SwGame::SwHologramBase::get_CameraFacer() {
    return *(_Script_SwGame::SwHologramCameraFacerComponent**)((uintptr_t)this + 0x8e0);
}
_Script_Engine::StaticMeshComponent*& _Script_SwGame::SwHologramBase::get_HologramDisplayCard() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x8e8);
}
_Script_SwGame::SwHologramCameraFacerComponent*& _Script_SwGame::SwHologramBase::get_CameraArm() {
    return *(_Script_SwGame::SwHologramCameraFacerComponent**)((uintptr_t)this + 0x8f0);
}
_Script_Engine::TextureRenderTarget2D*& _Script_SwGame::SwHologramBase::get_RenderTarget() {
    return *(_Script_Engine::TextureRenderTarget2D**)((uintptr_t)this + 0x900);
}
_Script_CoreUObject::Class* _Script_SwGame::SwHologramBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwHologramBase");
    return result;
}
void _Script_SwGame::SwHologramBase::HologramDeactivated() {
    return;
}
void _Script_SwGame::SwHologramBase::HologramActivated() {
    return;
}
_Script_Engine::MaterialInstanceDynamic* _Script_SwGame::SwHologramBase::GetHologramMaterial() {
    return;
}
float _Script_SwGame::SwHologramBase::GetActiveRampValue() {
    return;
}
void _Script_SwGame::SwHologramBase::DeactivateHologram() {
    return;
}
