#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintAsyncActionBase.hpp"
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_HeadMountedDisplay {
struct XRDeviceId;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Transform;
}
namespace _Script_HeadMountedDisplay {
#pragma pack(push, 1)
struct AsyncTask_LoadXRDeviceVisComponent : public _Script_Engine::BlueprintAsyncActionBase {
    private: char pad_30[0x30]; public:
    void* get_OnModelLoaded();
    void* get_OnLoadFailure();
    _Script_Engine::PrimitiveComponent*& get_SpawnedComponent();
    static _Script_CoreUObject::Class* static_class();
    _Script_HeadMountedDisplay::AsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(_Script_Engine::Actor* Target, void* SystemName, void* DeviceName, bool bManualAttachment, _Script_CoreUObject::Transform& RelativeTransform, _Script_HeadMountedDisplay::XRDeviceId& XRDeviceId, _Script_Engine::PrimitiveComponent*& NewComponent);
    _Script_HeadMountedDisplay::AsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(_Script_Engine::Actor* Target, _Script_HeadMountedDisplay::XRDeviceId& XRDeviceId, bool bManualAttachment, _Script_CoreUObject::Transform& RelativeTransform, _Script_Engine::PrimitiveComponent*& NewComponent);
}; // Size: 0x60
#pragma pack(pop)
}
