#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsReactionState.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwReactionState : public _Script_RsGameTechRT::RsReactionState {
    private: char pad_118[0x18]; public:
    bool get_bHasTickImplemetation();
    void set_bHasTickImplemetation(bool value);
    static _Script_CoreUObject::Class* static_class();
    void TickReaction(_Script_RsGameTechRT::RsCharacter* TheOneReacting, float DeltaTime);
    void OnEndReaction(_Script_RsGameTechRT::RsCharacter* TheOneReacting);
    void OnBeginReaction(_Script_RsGameTechRT::RsCharacter* TheOneReacting);
}; // Size: 0x130
#pragma pack(pop)
}
