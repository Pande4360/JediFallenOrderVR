#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Niagara {
struct NiagaraScript;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraEmitter : public _Script_CoreUObject::Object {
    private: char pad_28[0x110]; public:
    bool get_bLocalSpace();
    void set_bLocalSpace(bool value);
    void* get_UpdateScriptProps();
    void* get_SpawnScriptProps();
    void* get_EmitterSpawnScriptProps();
    void* get_EmitterUpdateScriptProps();
    void* get_SimTarget();
    void* get_FixedBounds();
    int32_t& get_MinDetailLevel();
    int32_t& get_MaxDetailLevel();
    bool get_bInterpolatedSpawning();
    void set_bInterpolatedSpawning(bool value);
    bool get_bFixedBounds();
    void set_bFixedBounds(bool value);
    bool get_bUseMinDetailLevel();
    void set_bUseMinDetailLevel(bool value);
    bool get_bUseMaxDetailLevel();
    void set_bUseMaxDetailLevel(bool value);
    bool get_bRequiresPersistentIDs();
    void set_bRequiresPersistentIDs(bool value);
    void* get_UniqueEmitterName();
    void* get_RendererProperties();
    void* get_EventHandlerScriptProps();
    _Script_Niagara::NiagaraScript*& get_GPUComputeScript();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x138
#pragma pack(pop)
}
