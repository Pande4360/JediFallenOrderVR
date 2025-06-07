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
struct NiagaraDataInterfaceCurlNoise : public NiagaraDataInterface {
    private: char pad_28[0x13328]; public:
    void* get_Seed();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x13350
#pragma pack(pop)
}
