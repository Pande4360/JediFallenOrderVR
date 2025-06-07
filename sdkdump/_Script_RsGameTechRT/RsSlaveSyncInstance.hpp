#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsSyncInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsSlaveSyncInstance : public RsSyncInstance {
    private: char pad_1f0[0x90]; public:
    void* get_OffsetTransform();
    void* get_ConstrainedBoneName();
    bool get_MaintainRelativeRotation();
    void set_MaintainRelativeRotation(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x280
#pragma pack(pop)
}
