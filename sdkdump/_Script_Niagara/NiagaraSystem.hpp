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
struct NiagaraSystem : public _Script_CoreUObject::Object {
    private: char pad_28[0x150]; public:
    bool get_bDumpDebugSystemInfo();
    void set_bDumpDebugSystemInfo(bool value);
    bool get_bDumpDebugEmitterInfo();
    void set_bDumpDebugEmitterInfo(bool value);
    void* get_EmitterHandles();
    void* get_ParameterCollectionOverrides();
    void* get_ActiveCompilations();
    _Script_Niagara::NiagaraScript*& get_SystemSpawnScript();
    _Script_Niagara::NiagaraScript*& get_SystemUpdateScript();
    void* get_EmitterSpawnAttributes();
    void* get_ExposedParameters();
    bool get_bAutoDeactivate();
    void set_bAutoDeactivate(bool value);
    float& get_WarmupTime();
    int32_t& get_WarmupTickCount();
    float& get_WarmupTickDelta();
    bool get_bSolo();
    void set_bSolo(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x178
#pragma pack(pop)
}
