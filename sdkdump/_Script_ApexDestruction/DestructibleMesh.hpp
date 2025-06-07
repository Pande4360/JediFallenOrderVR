#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SkeletalMesh.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ApexDestruction {
#pragma pack(push, 1)
struct DestructibleMesh : public _Script_Engine::SkeletalMesh {
    private: char pad_2f8[0xa0]; public:
    void* get_DefaultDestructibleParameters();
    void* get_FractureEffects();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x398
#pragma pack(pop)
}
