#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SpotLightComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "SwPhotomodeCameraController.hpp"
_Script_Engine::SpotLightComponent*& _Script_SwGame::SwPhotomodeCameraController::get_PhotoLightComponent() {
    return *(_Script_Engine::SpotLightComponent**)((uintptr_t)this + 0x6d0);
}
_Script_Engine::SceneComponent*& _Script_SwGame::SwPhotomodeCameraController::get_PhotoLightVisualGuide() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x6d8);
}
void _Script_SwGame::SwPhotomodeCameraController::PhotomodePhotoTaken() {
    return;
}
void* _Script_SwGame::SwPhotomodeCameraController::get_SpectatorPawnClass() {
    return (void*)((uintptr_t)this + 0x6e8);
}
_Script_Engine::StaticMeshComponent*& _Script_SwGame::SwPhotomodeCameraController::get_FocalPlaneComponent() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x6e0);
}
void* _Script_SwGame::SwPhotomodeCameraController::get_HUDClass() {
    return (void*)((uintptr_t)this + 0x6f0);
}
void* _Script_SwGame::SwPhotomodeCameraController::get_TextNone() {
    return (void*)((uintptr_t)this + 0x718);
}
void* _Script_SwGame::SwPhotomodeCameraController::get_PhotomodeFilters() {
    return (void*)((uintptr_t)this + 0x6f8);
}
void* _Script_SwGame::SwPhotomodeCameraController::get_BlacklistedCameraModes() {
    return (void*)((uintptr_t)this + 0x708);
}
bool _Script_SwGame::SwPhotomodeCameraController::IsSpotlightVisible() {
    return;
}
void* _Script_SwGame::SwPhotomodeCameraController::get_TextOff() {
    return (void*)((uintptr_t)this + 0x730);
}
void* _Script_SwGame::SwPhotomodeCameraController::get_TextOn() {
    return (void*)((uintptr_t)this + 0x748);
}
float _Script_SwGame::SwPhotomodeCameraController::GetSliderValue(void* TweakID) {
    return;
}
_Script_Engine::MaterialInstanceDynamic*& _Script_SwGame::SwPhotomodeCameraController::get_CurrentFilter() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x760);
}
_Script_Engine::MaterialInstanceDynamic*& _Script_SwGame::SwPhotomodeCameraController::get_FocalPlaneMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x768);
}
void* _Script_SwGame::SwPhotomodeCameraController::get_HideableAIList() {
    return (void*)((uintptr_t)this + 0x770);
}
bool _Script_SwGame::SwPhotomodeCameraController::IsSelected(void* TweakID) {
    return;
}
void* _Script_SwGame::SwPhotomodeCameraController::get_PostProcessTextureReferences() {
    return (void*)((uintptr_t)this + 0x1540);
}
_Script_CoreUObject::Class* _Script_SwGame::SwPhotomodeCameraController::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwPhotomodeCameraController");
    return result;
}
void _Script_SwGame::SwPhotomodeCameraController::TogglePhotomode() {
    return;
}
void _Script_SwGame::SwPhotomodeCameraController::PhotomodeValueChanged(float Delta) {
    return;
}
void _Script_SwGame::SwPhotomodeCameraController::PhotomodeToggleSpotlight(bool bEnabled) {
    return;
}
void _Script_SwGame::SwPhotomodeCameraController::PhotomodeSelectionChanged() {
    return;
}
void _Script_SwGame::SwPhotomodeCameraController::PhotomodeHideHUD(bool bHUDHidden) {
    return;
}
bool _Script_SwGame::SwPhotomodeCameraController::IsMenuHidden() {
    return;
}
void* _Script_SwGame::SwPhotomodeCameraController::GetTextValue(void* TweakID) {
    return;
}
