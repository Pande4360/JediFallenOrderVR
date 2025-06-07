#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimCompress.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimCompress_RemoveEverySecondKey : public AnimCompress {
    private: char pad_50[0x8]; public:
    int32_t& get_MinKeys();
    bool get_bStartAtSecondKey();
    void set_bStartAtSecondKey(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
