#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraDataInterfaceCurveBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraDataInterfaceVector2DCurve : public NiagaraDataInterfaceCurveBase {
    private: char pad_68[0xe0]; public:
    void* get_XCurve();
    void* get_YCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x148
#pragma pack(pop)
}
