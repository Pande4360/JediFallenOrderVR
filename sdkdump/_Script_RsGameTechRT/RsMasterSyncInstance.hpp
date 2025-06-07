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
struct RsMasterSyncInstance : public RsSyncInstance {
    private: char pad_1f0[0xe0]; public:
    void* get_ConstraintLocator();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2d0
#pragma pack(pop)
}
