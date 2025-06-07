#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsAIController.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAIController : public _Script_RsGameTechRT::RsAIController {
    private: char pad_828[0x20]; public:
    static _Script_CoreUObject::Class* static_class();
    void TriggerWildcardFightBonus();
    void SetActiveFightLoopToInfinite(bool bIsInfinite);
    bool IsActiveFightLoopInfinite();
}; // Size: 0x848
#pragma pack(pop)
}
