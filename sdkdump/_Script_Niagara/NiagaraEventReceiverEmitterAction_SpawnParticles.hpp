#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraEventReceiverEmitterAction.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraEventReceiverEmitterAction_SpawnParticles : public NiagaraEventReceiverEmitterAction {
    private: char pad_28[0x8]; public:
    void* get_NumParticles();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
