#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNotifyState.hpp"
namespace _Script_Engine {
struct ParticleSystem;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct AnimSequenceBase;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimNotifyState_Trail : public AnimNotifyState {
    private: char pad_30[0x38]; public:
    _Script_Engine::ParticleSystem*& get_PSTemplate();
    void* get_FirstSocketName();
    void* get_SecondSocketName();
    void* get_WidthScaleMode();
    void* get_WidthScaleCurve();
    bool get_bRecycleSpawnedSystems();
    void set_bRecycleSpawnedSystems(bool value);
    static _Script_CoreUObject::Class* static_class();
    _Script_Engine::ParticleSystem* OverridePSTemplate(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation);
}; // Size: 0x68
#pragma pack(pop)
}
