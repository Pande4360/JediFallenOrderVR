#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Transform;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_HeadMountedDisplay {
struct XRDeviceId;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_HeadMountedDisplay {
#pragma pack(push, 1)
struct XRAssetFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    _Script_Engine::PrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(_Script_Engine::Actor* Target, void* SystemName, void* DeviceName, bool bManualAttachment, _Script_CoreUObject::Transform& RelativeTransform, _Script_HeadMountedDisplay::XRDeviceId& XRDeviceId);
    _Script_Engine::PrimitiveComponent* AddDeviceVisualizationComponentBlocking(_Script_Engine::Actor* Target, _Script_HeadMountedDisplay::XRDeviceId& XRDeviceId, bool bManualAttachment, _Script_CoreUObject::Transform& RelativeTransform);
}; // Size: 0x28
#pragma pack(pop)
}
