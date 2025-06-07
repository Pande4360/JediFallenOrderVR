#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Effects_Blueprints_BPFX_Focus_Attack {
#pragma pack(push, 1)
struct BPFX_Focus_Attack_C : public _Script_Engine::Actor {
    private: char pad_360[0x98]; public:
    void* get_UberGraphFrame();
    _Script_Engine::ParticleSystemComponent*& get_P_Hero_FocusAttack_Copy();
    _Script_Engine::ParticleSystemComponent*& get_P_FocusAttack_head();
    _Script_Engine::ParticleSystemComponent*& get_P_FocusAttack_thigh_r();
    _Script_Engine::ParticleSystemComponent*& get_P_FocusAttack_thigh_l();
    _Script_Engine::ParticleSystemComponent*& get_P_FocusAttack_knee_r();
    _Script_Engine::ParticleSystemComponent*& get_P_FocusAttack_knee_l();
    _Script_Engine::ParticleSystemComponent*& get_P_FocusAttack_shoulder_r();
    _Script_Engine::ParticleSystemComponent*& get_P_FocusAttack_shoulder_l();
    _Script_Engine::ParticleSystemComponent*& get_P_FocusAttack_elbow_r();
    _Script_Engine::ParticleSystemComponent*& get_P_FocusAttack_elbow_l();
    _Script_Engine::ParticleSystemComponent*& get_P_FocusAttack_Back();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    float& get_Timeline_0_blend_854AE86049761ED1CE5A20B36F19EE56();
    void* get_Timeline_0__Direction_854AE86049761ED1CE5A20B36F19EE56();
    _Script_Engine::TimelineComponent*& get_Timeline_0();
    _Script_Engine::SkeletalMeshComponent*& get_SkelMesh();
    float& get_Timer();
    float& get_Duration();
    float& get_Width();
    float& get_Blend();
    float& get_BlurScale();
    static _Script_CoreUObject::Class* static_class();
    void EndTrails();
    void BeginTrails();
    void UserConstructionScript0();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay0();
    void ReceiveTick0(float DeltaSeconds);
    void ExecuteUbergraph_BPFX_Focus_Attack(int32_t EntryPoint);
}; // Size: 0x3f8
#pragma pack(pop)
}
