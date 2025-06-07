#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_LevelSequence\LevelSequenceDirector.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CinematicCamera {
struct CineCameraActor;
}
namespace _Game_Cinematics_Bogano_CIN_BOG_230_VaultEnter_BOG_230_VaultEnter_040 {
#pragma pack(push, 1)
struct SequenceDirector_C : public _Script_LevelSequence::LevelSequenceDirector {
    static _Script_CoreUObject::Class* static_class();
    void Call_BlendOutOfCinematicCamera_0(_Script_CinematicCamera::CineCameraActor* Target);
}; // Size: 0x30
#pragma pack(pop)
}
