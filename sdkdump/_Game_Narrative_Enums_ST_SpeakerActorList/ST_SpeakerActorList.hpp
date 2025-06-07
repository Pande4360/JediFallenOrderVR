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
namespace _Game_Narrative_Enums_ST_SpeakerActorList {
#pragma pack(push, 1)
struct ST_SpeakerActorList {
    private: char pad_0[0x18]; public:
    void* get_SpeakerActors_8_31742D08433CFCBBBDEFD384C6736AF9();
    _Script_Engine::Actor*& get_MostRecent_7_98526296456402CE5975EFA771393CA6();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
