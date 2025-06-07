#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "InterpTrackInst.hpp"
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct InterpTrackInstSound : public InterpTrackInst {
    private: char pad_28[0x10]; public:
    float& get_LastUpdatePosition();
    _Script_Engine::AudioComponent*& get_PlayAudioComp();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
