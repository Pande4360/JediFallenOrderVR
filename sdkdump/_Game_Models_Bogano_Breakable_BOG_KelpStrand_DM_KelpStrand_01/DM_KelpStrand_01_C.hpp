#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_SwGame\SwSimpleDestructibleActor.hpp"
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct CapsuleComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_RsGameTechRT {
struct RsNavModifierComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_Models_Bogano_Breakable_BOG_KelpStrand_DM_KelpStrand_01 {
#pragma pack(push, 1)
struct DM_KelpStrand_01_C : public _Script_SwGame::SwSimpleDestructibleActor {
    private: char pad_750[0x30]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SceneComponent*& get_Top();
    _Script_Engine::CapsuleComponent*& get_capsule();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::SkeletalMeshComponent*& get_Brake();
    _Script_RsGameTechRT::RsNavModifierComponent*& get_RsNavModifier();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void OnLastPhaseDestructed0();
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* HitComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, _Script_CoreUObject::Vector NormalImpulse, _Script_Engine::HitResult& Hit);
    void ExecuteUbergraph_DM_KelpStrand_01(int32_t EntryPoint);
}; // Size: 0x780
#pragma pack(pop)
}
