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
struct MicroTransactionBase : public PlatformInterfaceBase {
    private: char pad_38[0x30]; public:
    void* get_AvailableProducts();
    void* get_LastError();
    void* get_LastErrorSolution();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
