#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Game_Characters_Hero_Logic_Components_Navigation_BP_SlideSpeedVolume {
#pragma pack(push, 1)
struct BP_SlideSpeedVolume_C : public _Script_Engine::Actor {
    private: char pad_360[0x20]; public:
    void* get_UberGraphFrame();
    _Script_Engine::BoxComponent*& get_EntryVolume();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    void* get_SlideSpeed();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void BndEvt__EntryVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ExecuteUbergraph_BP_SlideSpeedVolume(int32_t EntryPoint);
}; // Size: 0x380
#pragma pack(pop)
}
