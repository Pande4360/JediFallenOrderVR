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
struct MovieSceneNiagaraVectorParameterSectionTemplate : public MovieSceneNiagaraParameterSectionTemplate {
    private: char pad_50[0x288]; public:
    void* get_VectorChannels();
    int32_t& get_ChannelsUsed();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2d8
#pragma pack(pop)
}
