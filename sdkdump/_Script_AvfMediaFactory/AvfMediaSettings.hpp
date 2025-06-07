#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AvfMediaFactory {
#pragma pack(push, 1)
struct AvfMediaSettings : public _Script_CoreUObject::Object {
    private: char pad_28[0x8]; public:
    bool get_NativeAudioOut();
    void set_NativeAudioOut(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
