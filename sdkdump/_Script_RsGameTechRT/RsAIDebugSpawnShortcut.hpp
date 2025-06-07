#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAIDebugSpawnShortcut {
    private: char pad_0[0x40]; public:
    void* get_Hotkey();
    void* get_AICharacterDefinition();
    float& get_SpawnDistance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
