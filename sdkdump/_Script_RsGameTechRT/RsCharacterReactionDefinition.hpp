#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct DamageType;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsCharacterReactionDefinition : public _Script_Engine::DataAsset {
    private: char pad_30[0xa0]; public:
    void* get_DamageToReactionMapping();
    void* get_ReactionDataContainer();
    static _Script_CoreUObject::Class* static_class();
    void* GetReactionFromDamageType(_Script_Engine::DamageType* DamageType);
}; // Size: 0xd0
#pragma pack(pop)
}
