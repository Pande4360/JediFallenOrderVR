#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsAISpawner.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAIDefaultSpawner : public RsAISpawner {
    private: char pad_390[0xd0]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x460
#pragma pack(pop)
}
