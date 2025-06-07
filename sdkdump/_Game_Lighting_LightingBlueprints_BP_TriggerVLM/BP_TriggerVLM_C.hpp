#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TriggerBox.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Lighting_LightingBlueprints_BP_TriggerVLM {
#pragma pack(push, 1)
struct BP_TriggerVLM_C : public _Script_Engine::TriggerBox {
    private: char pad_368[0x10]; public:
    void* get_UberGraphFrame();
    void* get_VLM();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveActorBeginOverlap(_Script_Engine::Actor* OtherActor);
    void ReceiveActorEndOverlap(_Script_Engine::Actor* OtherActor);
    void ExecuteUbergraph_BP_TriggerVLM(int32_t EntryPoint);
}; // Size: 0x378
#pragma pack(pop)
}
