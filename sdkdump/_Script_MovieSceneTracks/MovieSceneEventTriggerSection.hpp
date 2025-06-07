#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneEventSectionBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneEventTriggerSection : public MovieSceneEventSectionBase {
    private: char pad_e0[0x88]; public:
    void* get_EventChannel();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x168
#pragma pack(pop)
}
