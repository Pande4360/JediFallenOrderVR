#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AkMidiEventBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkMidiNoteAftertouch : public AkMidiEventBase {
    private: char pad_2[0x2]; public:
    void* get_Note();
    void* get_Value();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4
#pragma pack(pop)
}
