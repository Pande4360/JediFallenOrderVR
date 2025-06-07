#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "XRAssetFunctionLibrary.hpp"
#include "XRDeviceId.hpp"
_Script_CoreUObject::Class* _Script_HeadMountedDisplay::XRAssetFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HeadMountedDisplay.XRAssetFunctionLibrary");
    return result;
}
_Script_Engine::PrimitiveComponent* _Script_HeadMountedDisplay::XRAssetFunctionLibrary::AddNamedDeviceVisualizationComponentBlocking(_Script_Engine::Actor* Target, void* SystemName, void* DeviceName, bool bManualAttachment, _Script_CoreUObject::Transform& RelativeTransform, _Script_HeadMountedDisplay::XRDeviceId& XRDeviceId) {
    return;
}
_Script_Engine::PrimitiveComponent* _Script_HeadMountedDisplay::XRAssetFunctionLibrary::AddDeviceVisualizationComponentBlocking(_Script_Engine::Actor* Target, _Script_HeadMountedDisplay::XRDeviceId& XRDeviceId, bool bManualAttachment, _Script_CoreUObject::Transform& RelativeTransform) {
    return;
}
