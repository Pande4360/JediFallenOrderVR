#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneNiagaraParameterSectionTemplate.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct MovieSceneNiagaraColorParameterSectionTemplate : public MovieSceneNiagaraParameterSectionTemplate {
    private: char pad_50[0x280]; public:
    void* get_RedChannel();
    void* get_GreenChannel();
    void* get_BlueChannel();
    void* get_AlphaChannel();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2d0
#pragma pack(pop)
}
