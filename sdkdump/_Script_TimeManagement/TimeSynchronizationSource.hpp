#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_TimeManagement {
#pragma pack(push, 1)
struct TimeSynchronizationSource : public _Script_CoreUObject::Object {
    private: char pad_28[0x8]; public:
    bool get_bUseForSynchronization();
    void set_bUseForSynchronization(bool value);
    int32_t& get_FrameOffset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
