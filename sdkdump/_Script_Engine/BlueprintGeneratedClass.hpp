#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Class.hpp"
namespace _Script_Engine {
struct SimpleConstructionScript;
}
namespace _Script_Engine {
struct InheritableComponentHandler;
}
namespace _Script_CoreUObject {
struct Function;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct BlueprintGeneratedClass : public _Script_CoreUObject::Class {
    private: char pad_210[0xd8]; public:
    int32_t& get_NumReplicatedProperties();
    bool get_bHasNativizedParent();
    void set_bHasNativizedParent(bool value);
    void* get_DynamicBindingObjects();
    void* get_ComponentTemplates();
    void* get_Timelines();
    _Script_Engine::SimpleConstructionScript*& get_SimpleConstructionScript();
    _Script_Engine::InheritableComponentHandler*& get_InheritableComponentHandler();
    _Script_CoreUObject::Function*& get_UberGraphFunction();
    void* get_CookedComponentInstancingData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2e8
#pragma pack(pop)
}
