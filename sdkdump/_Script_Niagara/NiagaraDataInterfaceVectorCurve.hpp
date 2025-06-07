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
struct NiagaraDataInterfaceVectorCurve : public NiagaraDataInterfaceCurveBase {
    private: char pad_68[0x150]; public:
    void* get_XCurve();
    void* get_YCurve();
    void* get_ZCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1b8
#pragma pack(pop)
}
