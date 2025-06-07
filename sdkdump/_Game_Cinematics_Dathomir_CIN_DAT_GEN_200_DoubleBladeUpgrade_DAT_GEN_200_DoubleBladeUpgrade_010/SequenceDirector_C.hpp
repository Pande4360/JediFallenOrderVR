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
namespace _Game_Cinematics_Dathomir_CIN_DAT_GEN_200_DoubleBladeUpgrade_DAT_GEN_200_DoubleBladeUpgrade_010 {
#pragma pack(push, 1)
struct SequenceDirector_C : public _Script_LevelSequence::LevelSequenceDirector {
    static _Script_CoreUObject::Class* static_class();
    void Call_BlendOutOfCinematicCamera_0(_Script_CinematicCamera::CineCameraActor* Target);
}; // Size: 0x30
#pragma pack(pop)
}
