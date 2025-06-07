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
struct ActorInQuicksandVolume {
    private: char pad_0[0x1c]; public:
    void* get_ActorPtr();
    bool get_IsAffectedByQuicksand();
    void set_IsAffectedByQuicksand(bool value);
    float& get_BoundingVolumeImmersionCoef();
    float& get_TimeInQuicksand();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1c
#pragma pack(pop)
}
