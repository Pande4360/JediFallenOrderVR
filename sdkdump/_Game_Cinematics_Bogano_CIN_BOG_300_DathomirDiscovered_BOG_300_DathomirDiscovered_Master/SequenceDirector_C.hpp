#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_LevelSequence\LevelSequenceDirector.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_WorldInteracts_Hologram_BP_Hologram_sequence_anim {
struct BP_Hologram_Sequence_Anim_C;
}
namespace _Script_LevelSequence {
struct LevelSequenceActor;
}
namespace _Game_Cinematics_Bogano_CIN_BOG_300_DathomirDiscovered_BOG_300_DathomirDiscovered_Master {
#pragma pack(push, 1)
struct SequenceDirector_C : public _Script_LevelSequence::LevelSequenceDirector {
    static _Script_CoreUObject::Class* static_class();
    void SequenceEvent_4(_Game_WorldInteracts_Hologram_BP_Hologram_sequence_anim::BP_Hologram_Sequence_Anim_C* Target);
    void SequenceEvent_3(_Game_WorldInteracts_Hologram_BP_Hologram_sequence_anim::BP_Hologram_Sequence_Anim_C* Target);
    void SequenceEvent_2(_Game_WorldInteracts_Hologram_BP_Hologram_sequence_anim::BP_Hologram_Sequence_Anim_C* Target);
    void SequenceEvent_1(_Game_WorldInteracts_Hologram_BP_Hologram_sequence_anim::BP_Hologram_Sequence_Anim_C* Target);
    void SequenceEvent_0(_Script_LevelSequence::LevelSequenceActor* Target);
    void Music_Start();
}; // Size: 0x30
#pragma pack(pop)
}
