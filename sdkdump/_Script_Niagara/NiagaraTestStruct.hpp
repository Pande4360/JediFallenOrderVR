#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraTestStruct {
    private: char pad_0[0x48]; public:
    void* get_Vector1();
    void* get_Vector2();
    void* get_InnerStruct1();
    void* get_InnerStruct2();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
