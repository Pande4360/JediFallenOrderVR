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
struct NiagaraFunctionSignature {
    private: char pad_0[0x38]; public:
    void* get_Name();
    void* get_Inputs();
    void* get_Outputs();
    void* get_OwnerName();
    bool get_bRequiresContext();
    void set_bRequiresContext(bool value);
    bool get_bMemberFunction();
    void set_bMemberFunction(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
