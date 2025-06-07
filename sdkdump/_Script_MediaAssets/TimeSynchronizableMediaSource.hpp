#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BaseMediaSource.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MediaAssets {
#pragma pack(push, 1)
struct TimeSynchronizableMediaSource : public BaseMediaSource {
    private: char pad_38[0x8]; public:
    bool get_bUseTimeSynchronization();
    void set_bUseTimeSynchronization(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
