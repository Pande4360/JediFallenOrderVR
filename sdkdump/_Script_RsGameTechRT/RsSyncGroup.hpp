#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_RsGameTechRT {
struct RsMasterSyncInstance;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsSyncGroup {
    private: char pad_0[0x20]; public:
    _Script_RsGameTechRT::RsMasterSyncInstance*& get_Master();
    void* get_SlaveArray();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
