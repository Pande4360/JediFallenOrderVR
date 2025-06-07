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
struct MovieSceneNiagaraIntegerParameterSectionTemplate : public MovieSceneNiagaraParameterSectionTemplate {
    private: char pad_50[0x90]; public:
    void* get_IntegerChannel();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
