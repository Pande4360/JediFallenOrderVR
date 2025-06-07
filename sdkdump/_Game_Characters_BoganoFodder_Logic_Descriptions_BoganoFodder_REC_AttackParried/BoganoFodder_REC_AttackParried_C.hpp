#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwReactionState.hpp"
namespace _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder {
struct BP_BoganoFodder_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_RsGameTechRT {
struct RsCharacterAnimationData;
}
namespace _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_REC_AttackParried {
#pragma pack(push, 1)
struct BoganoFodder_REC_AttackParried_C : public _Script_SwGame::SwReactionState {
    private: char pad_130[0x10]; public:
    void* get_UberGraphFrame();
    _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C*& get_BogFod_Ref();
    static _Script_CoreUObject::Class* static_class();
    void OverrideAnimationData(_Script_RsGameTechRT::RsCharacter* TheAttacker, _Script_RsGameTechRT::RsCharacterAnimationData& CurrentAnimationData, _Script_RsGameTechRT::RsCharacterAnimationData& NewAnimationData);
    void OnEndReaction0(_Script_RsGameTechRT::RsCharacter* TheOneReacting);
    void ExecuteUbergraph_BoganoFodder_REC_AttackParried(int32_t EntryPoint);
}; // Size: 0x140
#pragma pack(pop)
}
