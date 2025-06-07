#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_FlameTrooper_Logic_BPC_FlameTrooper_FireFXHelper {
#pragma pack(push, 1)
struct BPC_FlameTrooper_FireFXHelper_C : public _Script_Engine::ActorComponent {
    private: char pad_170[0x18]; public:
    void* get_UberGraphFrame();
    _Script_Engine::ParticleSystemComponent*& get_ParticleEmitterReference();
    bool get_PendingKill();
    void set_PendingKill(bool value);
    float& get_FireLifetime();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveBeginPlay0();
    void Refresh();
    void Disappear();
    void DestroySelf();
    void ExecuteUbergraph_BPC_FlameTrooper_FireFXHelper(int32_t EntryPoint);
}; // Size: 0x188
#pragma pack(pop)
}
