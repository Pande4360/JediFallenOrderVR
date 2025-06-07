#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwPlayerReactionState.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_RsGameTechRT {
struct RsCharacterAnimationData;
}
namespace _Game_Characters_Hero_Logic_Descriptions_BP_Hero_ProjectileReactionDescription {
#pragma pack(push, 1)
struct BP_Hero_ProjectileReactionDescription_C : public _Script_SwGame::SwPlayerReactionState {
    static _Script_CoreUObject::Class* static_class();
    void OverrideAnimationData(_Script_RsGameTechRT::RsCharacter* TheAttacker, _Script_RsGameTechRT::RsCharacterAnimationData& CurrentAnimationData, _Script_RsGameTechRT::RsCharacterAnimationData& NewAnimationData);
}; // Size: 0x130
#pragma pack(pop)
}
