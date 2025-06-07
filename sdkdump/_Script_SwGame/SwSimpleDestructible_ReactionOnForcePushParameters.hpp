#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwSimpleDestructible_ReactionOnForcePushParameters {
    private: char pad_0[0x18]; public:
    bool get_DestroyPhaseOnForcePush();
    void set_DestroyPhaseOnForcePush(bool value);
    void* get_StartPhysicsOnForcePushOnSingleBonesWithPrefix();
    float& get_DirectionalHitRadiusFalloff();
    bool get_EnableDebugDrawForHitPoint();
    void set_EnableDebugDrawForHitPoint(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
