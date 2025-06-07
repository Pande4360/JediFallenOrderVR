#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsPlayerState.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwPlayerState : public _Script_RsGameTechRT::RsPlayerState {
    private: char pad_450[0x8]; public:
    int32_t& get_NumDeaths();
    static _Script_CoreUObject::Class* static_class();
    int32_t GetNumDeaths();
}; // Size: 0x458
#pragma pack(pop)
}
