#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsCharacterDeathDefinition : public _Script_Engine::DataAsset {
    private: char pad_30[0xa0]; public:
    void* get_DamageToDeathMapping();
    void* get_DeathDataContainer();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd0
#pragma pack(pop)
}
