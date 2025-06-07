#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PlatformInterfaceBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CloudStorageBase : public PlatformInterfaceBase {
    private: char pad_38[0x18]; public:
    void* get_LocalCloudFiles();
    bool get_bSuppressDelegateCalls();
    void set_bSuppressDelegateCalls(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
