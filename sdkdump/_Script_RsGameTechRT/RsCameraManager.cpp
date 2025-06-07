#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\PlayerCameraManager.hpp"
#include "RsCameraManager.hpp"
#include "RsCameraManagerDefinition.hpp"
#include "RsCameraMode.hpp"
#include "RsCharacter.hpp"
void* _Script_RsGameTechRT::RsCameraManager::get_DefinitionPath() {
    return (void*)((uintptr_t)this + 0x25d0);
}
_Script_RsGameTechRT::RsCameraMode*& _Script_RsGameTechRT::RsCameraManager::get_ActiveCameraMode() {
    return *(_Script_RsGameTechRT::RsCameraMode**)((uintptr_t)this + 0x2600);
}
_Script_RsGameTechRT::RsCameraManagerDefinition*& _Script_RsGameTechRT::RsCameraManager::get_Definition() {
    return *(_Script_RsGameTechRT::RsCameraManagerDefinition**)((uintptr_t)this + 0x25e0);
}
void* _Script_RsGameTechRT::RsCameraManager::get_ModeInputs() {
    return (void*)((uintptr_t)this + 0x2610);
}
void* _Script_RsGameTechRT::RsCameraManager::get_CameraModeSets() {
    return (void*)((uintptr_t)this + 0x25e8);
}
void* _Script_RsGameTechRT::RsCameraManager::get_ActiveShakes() {
    return (void*)((uintptr_t)this + 0x2d18);
}
void* _Script_RsGameTechRT::RsCameraManager::get_FocusInputs() {
    return (void*)((uintptr_t)this + 0x2d00);
}
void* _Script_RsGameTechRT::RsCameraManager::get_DefaultCameraModeOverride() {
    return (void*)((uintptr_t)this + 0x25f8);
}
void* _Script_RsGameTechRT::RsCameraManager::get_ModeOutputs() {
    return (void*)((uintptr_t)this + 0x2740);
}
void* _Script_RsGameTechRT::RsCameraManager::get_ActiveSplineCameraModeName() {
    return (void*)((uintptr_t)this + 0x2d10);
}
void* _Script_RsGameTechRT::RsCameraManager::get_ActivePostProcessEffects() {
    return (void*)((uintptr_t)this + 0x2d28);
}
void* _Script_RsGameTechRT::RsCameraManager::get_PawnsToCollideWith() {
    return (void*)((uintptr_t)this + 0x2d38);
}
void* _Script_RsGameTechRT::RsCameraManager::get_CameraModeUpdateDelegate() {
    return (void*)((uintptr_t)this + 0x34a8);
}
_Script_Engine::Actor*& _Script_RsGameTechRT::RsCameraManager::get_AutoDepthOfFieldTarget() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x3470);
}
void* _Script_RsGameTechRT::RsCameraManager::get_AutoDepthOfFieldBoneName() {
    return (void*)((uintptr_t)this + 0x3478);
}
void* _Script_RsGameTechRT::RsCameraManager::get_CameraModeCompletionDelegate() {
    return (void*)((uintptr_t)this + 0x3498);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsCameraManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsCameraManager");
    return result;
}
void _Script_RsGameTechRT::RsCameraManager::SetAutoDepthOfFieldTarget(_Script_Engine::Actor* Actor, void* BoneName) {
    return;
}
void _Script_RsGameTechRT::RsCameraManager::RequestCSZoom() {
    return;
}
void _Script_RsGameTechRT::RsCameraManager::OnViewTargetTeleported(_Script_RsGameTechRT::RsCharacter* Character) {
    return;
}
bool _Script_RsGameTechRT::RsCameraManager::IsPointInViewFrustum(_Script_CoreUObject::Vector& Point, float FarPlaneDist) {
    return;
}
void* _Script_RsGameTechRT::RsCameraManager::GetViewLocationsRenderedLastFrame() {
    return;
}
void _Script_RsGameTechRT::RsCameraManager::ClearAutoDepthOfFieldTarget() {
    return;
}
