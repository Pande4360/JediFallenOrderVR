#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Narrative_Enums_ST_SpeakerForActor {
#pragma pack(push, 1)
struct ST_SpeakerForActor {
    private: char pad_0[0x10]; public:
    void* get_SpeakerTag_2_8B8ABE0E414204DB3964FEB13E45C2D3();
    _Script_Engine::Actor*& get_Actor_6_4436996B42BA8C3F9B1EE9A8C14F357C();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
