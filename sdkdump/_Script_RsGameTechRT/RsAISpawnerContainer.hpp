#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAISpawnerContainer : public _Script_Engine::Actor {
    private: char pad_360[0x10]; public:
    void* get_SpawnerRefs();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x370
#pragma pack(pop)
}
