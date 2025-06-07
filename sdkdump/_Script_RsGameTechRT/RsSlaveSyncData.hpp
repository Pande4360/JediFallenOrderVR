#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsSyncData.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsSlaveSyncData : public RsSyncData {
    bool get_MaintainRelativeRotation();
    void set_MaintainRelativeRotation(bool value);
    bool get_PutInReactionState();
    void set_PutInReactionState(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x100
#pragma pack(pop)
}
