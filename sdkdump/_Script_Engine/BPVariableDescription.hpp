#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct BPVariableDescription {
    private: char pad_0[0xd8]; public:
    void* get_VarName();
    void* get_VarGuid();
    void* get_VarType();
    void* get_FriendlyName();
    void* get_Category();
    void* get_PropertyFlags();
    void* get_RepNotifyFunc();
    void* get_ReplicationCondition();
    void* get_MetaDataArray();
    void* get_DefaultValue();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd8
#pragma pack(pop)
}
