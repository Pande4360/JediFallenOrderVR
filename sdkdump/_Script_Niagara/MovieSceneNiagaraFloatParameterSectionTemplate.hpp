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
struct MovieSceneNiagaraFloatParameterSectionTemplate : public MovieSceneNiagaraParameterSectionTemplate {
    private: char pad_50[0xa0]; public:
    void* get_FloatChannel();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf0
#pragma pack(pop)
}
