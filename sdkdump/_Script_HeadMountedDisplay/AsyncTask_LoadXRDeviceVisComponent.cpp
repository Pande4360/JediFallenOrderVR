#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BlueprintAsyncActionBase.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "AsyncTask_LoadXRDeviceVisComponent.hpp"
#include "XRDeviceId.hpp"
void* _Script_HeadMountedDisplay::AsyncTask_LoadXRDeviceVisComponent::get_OnModelLoaded() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_Engine::PrimitiveComponent*& _Script_HeadMountedDisplay::AsyncTask_LoadXRDeviceVisComponent::get_SpawnedComponent() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x58);
}
void* _Script_HeadMountedDisplay::AsyncTask_LoadXRDeviceVisComponent::get_OnLoadFailure() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_HeadMountedDisplay::AsyncTask_LoadXRDeviceVisComponent* _Script_HeadMountedDisplay::AsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync(_Script_Engine::Actor* Target, void* SystemName, void* DeviceName, bool bManualAttachment, _Script_CoreUObject::Transform& RelativeTransform, _Script_HeadMountedDisplay::XRDeviceId& XRDeviceId, _Script_Engine::PrimitiveComponent*& NewComponent) {
    return;
}
_Script_CoreUObject::Class* _Script_HeadMountedDisplay::AsyncTask_LoadXRDeviceVisComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent");
    return result;
}
_Script_HeadMountedDisplay::AsyncTask_LoadXRDeviceVisComponent* _Script_HeadMountedDisplay::AsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync(_Script_Engine::Actor* Target, _Script_HeadMountedDisplay::XRDeviceId& XRDeviceId, bool bManualAttachment, _Script_CoreUObject::Transform& RelativeTransform, _Script_Engine::PrimitiveComponent*& NewComponent) {
    return;
}
