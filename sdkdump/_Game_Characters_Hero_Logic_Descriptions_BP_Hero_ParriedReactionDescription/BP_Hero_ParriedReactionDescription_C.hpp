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
namespace _Game_Characters_Hero_Logic_Descriptions_BP_Hero_ParriedReactionDescription {
#pragma pack(push, 1)
struct BP_Hero_ParriedReactionDescription_C : public _Script_SwGame::SwPlayerReactionState {
    private: char pad_130[0x8]; public:
    void* get_UberGraphFrame();
    static _Script_CoreUObject::Class* static_class();
    void OnBeginReaction(_Script_RsGameTechRT::RsCharacter* TheOneReacting);
    void OnEndReaction(_Script_RsGameTechRT::RsCharacter* TheOneReacting);
    void ExecuteUbergraph_BP_Hero_ParriedReactionDescription(int32_t EntryPoint);
}; // Size: 0x138
#pragma pack(pop)
}
