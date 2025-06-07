#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsAIAwarenessStateDefinition_Aggro.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAIAwarenessStateDefinition_Aggro : public _Script_RsGameTechRT::RsAIAwarenessStateDefinition_Aggro {
    private: char pad_38[0xc0]; public:
    void* get_AggroTimeOuts();
    float& get_ZTargetBonusDuration();
    float& get_WildcardBonusDuration();
    float& get_InnerFightSectorCharacterRadiusMultiplier();
    float& get_OuterFightSectorCharacterRadiusMultiplier();
    void* get_FightStyle();
    void* get_FightResourceWeights();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf8
#pragma pack(pop)
}
