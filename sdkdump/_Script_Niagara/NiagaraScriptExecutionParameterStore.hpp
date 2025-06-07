#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraParameterStore.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraScriptExecutionParameterStore : public NiagaraParameterStore {
    private: char pad_e0[0x20]; public:
    int32_t& get_ParameterSize();
    void* get_PaddedParameterSize();
    void* get_PaddingInfo();
    bool get_bInitialized();
    void set_bInitialized(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x100
#pragma pack(pop)
}
