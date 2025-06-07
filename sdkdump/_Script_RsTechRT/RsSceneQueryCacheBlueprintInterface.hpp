#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsSceneQueryCacheBlueprintInterface : public _Script_CoreUObject::Object {
    private: char pad_28[0x9f8]; public:
    static _Script_CoreUObject::Class* static_class();
    void Uninitialize();
    void OverlapSphere(float InRadius, _Script_CoreUObject::Vector InQueryPostion, void* InQueryChannel);
    void OverlapCapsule(float InRadius, float InHalfHeight, _Script_CoreUObject::Vector InQueryPostion, _Script_CoreUObject::Rotator InQueryRotation, void* InQueryChannel);
    void OverlapBox(_Script_CoreUObject::Vector InHalfExtents, _Script_CoreUObject::Vector InQueryPostion, _Script_CoreUObject::Rotator InQueryRotation, void* InQueryChannel);
    void Initialize();
    void DebugDraw(int32_t InDrawFlags);
}; // Size: 0xa20
#pragma pack(pop)
}
