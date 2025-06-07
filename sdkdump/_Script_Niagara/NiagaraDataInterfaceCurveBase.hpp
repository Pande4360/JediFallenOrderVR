#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraDataInterface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraDataInterfaceCurveBase : public NiagaraDataInterface {
    private: char pad_28[0x40]; public:
    bool get_GPUBufferDirty();
    void set_GPUBufferDirty(bool value);
    void* get_ShaderLUT();
    float& get_LUTMinTime();
    float& get_LUTMaxTime();
    float& get_LUTInvTimeRange();
    bool get_bUseLUT();
    void set_bUseLUT(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
