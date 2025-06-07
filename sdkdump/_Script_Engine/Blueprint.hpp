#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BlueprintCore.hpp"
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SimpleConstructionScript;
}
namespace _Script_Engine {
struct InheritableComponentHandler;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct Blueprint : public BlueprintCore {
    private: char pad_50[0x90]; public:
    bool get_bRecompileOnLoad();
    void set_bRecompileOnLoad(bool value);
    void* get_ParentClass();
    _Script_CoreUObject::Object*& get_PRIVATE_InnermostPreviousCDO();
    bool get_bHasBeenRegenerated();
    void set_bHasBeenRegenerated(bool value);
    bool get_bIsRegeneratingOnLoad();
    void set_bIsRegeneratingOnLoad(bool value);
    _Script_Engine::SimpleConstructionScript*& get_SimpleConstructionScript();
    void* get_ComponentTemplates();
    void* get_Timelines();
    _Script_Engine::InheritableComponentHandler*& get_InheritableComponentHandler();
    void* get_BlueprintType();
    int32_t& get_BlueprintSystemVersion();
    bool get_bNativize();
    void set_bNativize(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
