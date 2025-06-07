#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct ActorComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SCS_Node : public _Script_CoreUObject::Object {
    private: char pad_28[0xb8]; public:
    void* get_ComponentClass();
    _Script_Engine::ActorComponent*& get_ComponentTemplate();
    void* get_CookedComponentInstancingData();
    void* get_AttachToName();
    void* get_ParentComponentOrVariableName();
    void* get_ParentComponentOwnerClassName();
    bool get_bIsParentComponentNative();
    void set_bIsParentComponentNative(bool value);
    void* get_ChildNodes();
    void* get_MetaDataArray();
    void* get_VariableGuid();
    void* get_InternalVariableName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
