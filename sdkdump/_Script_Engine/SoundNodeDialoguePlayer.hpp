#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SoundNode.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundNodeDialoguePlayer : public SoundNode {
    private: char pad_38[0x28]; public:
    void* get_DialogueWaveParameter();
    bool get_bLooping();
    void set_bLooping(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
