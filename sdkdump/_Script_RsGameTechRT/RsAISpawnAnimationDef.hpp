#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_RsGameTechRT {
struct RsAICharacterDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAISpawnAnimationDef {
    private: char pad_0[0x18]; public:
    _Script_RsGameTechRT::RsAICharacterDefinition*& get_AICharacterDefinition();
    void* get_SpawnAnimations();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
