#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAIEncounterManager : public _Script_CoreUObject::Object {
    private: char pad_28[0x38]; public:
    void* get_LoadedEncounterGroupActors();
    void* get_MasterEncounterGroupsSpawned();
    void* get_OnBountyHunterEncounterSpawned();
    static _Script_CoreUObject::Class* static_class();
    void OnEncounterInstanceIncremented();
}; // Size: 0x60
#pragma pack(pop)
}
