#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraParameterStore {
    private: char pad_0[0xe0]; public:
    _Script_CoreUObject::Object*& get_Owner();
    void* get_ParameterOffsets();
    void* get_ParameterData();
    void* get_DataInterfaces();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
