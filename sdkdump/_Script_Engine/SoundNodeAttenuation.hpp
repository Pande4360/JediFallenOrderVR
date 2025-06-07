#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SoundNode.hpp"
namespace _Script_Engine {
struct SoundAttenuation;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundNodeAttenuation : public SoundNode {
    private: char pad_38[0x2b8]; public:
    _Script_Engine::SoundAttenuation*& get_AttenuationSettings();
    void* get_AttenuationOverrides();
    bool get_bOverrideAttenuation();
    void set_bOverrideAttenuation(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2f0
#pragma pack(pop)
}
