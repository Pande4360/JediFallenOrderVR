#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModule : public _Script_CoreUObject::Object {
    private: char pad_28[0x8]; public:
    bool get_bSpawnModule();
    void set_bSpawnModule(bool value);
    bool get_bUpdateModule();
    void set_bUpdateModule(bool value);
    bool get_bFinalUpdateModule();
    void set_bFinalUpdateModule(bool value);
    bool get_bUpdateForGPUEmitter();
    void set_bUpdateForGPUEmitter(bool value);
    bool get_bCurvesAsColor();
    void set_bCurvesAsColor(bool value);
    bool get_b3DDrawMode();
    void set_b3DDrawMode(bool value);
    bool get_bSupported3DDrawMode();
    void set_bSupported3DDrawMode(bool value);
    bool get_bEnabled();
    void set_bEnabled(bool value);
    bool get_bEditable();
    void set_bEditable(bool value);
    bool get_LODDuplicate();
    void set_LODDuplicate(bool value);
    bool get_bSupportsRandomSeed();
    void set_bSupportsRandomSeed(bool value);
    bool get_bRequiresLoopingNotification();
    void set_bRequiresLoopingNotification(bool value);
    void* get_LODValidity();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
