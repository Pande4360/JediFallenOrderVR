#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraEmitterScriptProperties.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraEventScriptProperties : public NiagaraEmitterScriptProperties {
    private: char pad_28[0x30]; public:
    void* get_ExecutionMode();
    void* get_SpawnNumber();
    void* get_MaxEventsPerFrame();
    void* get_SourceEmitterID();
    void* get_SourceEventName();
    bool get_bRandomSpawnNumber();
    void set_bRandomSpawnNumber(bool value);
    void* get_MinSpawnNumber();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
