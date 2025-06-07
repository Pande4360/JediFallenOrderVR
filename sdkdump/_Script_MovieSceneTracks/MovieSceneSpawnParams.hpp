#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneSpawnParams {
    private: char pad_0[0x38]; public:
    bool get_bUsePlayerCharacter();
    void set_bUsePlayerCharacter(bool value);
    bool get_bUseBuddyDroidCharacter();
    void set_bUseBuddyDroidCharacter(bool value);
    void* get_AISpawner();
    bool get_bIsMovable();
    void set_bIsMovable(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
