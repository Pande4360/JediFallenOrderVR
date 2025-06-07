#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimCompress.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimCompress_Automatic : public AnimCompress {
    private: char pad_50[0x8]; public:
    float& get_MaxEndEffectorError();
    bool get_bRunCurrentDefaultCompressor();
    void set_bRunCurrentDefaultCompressor(bool value);
    bool get_bAutoReplaceIfExistingErrorTooGreat();
    void set_bAutoReplaceIfExistingErrorTooGreat(bool value);
    bool get_bRaiseMaxErrorToExisting();
    void set_bRaiseMaxErrorToExisting(bool value);
    bool get_bTryExhaustiveSearch();
    void set_bTryExhaustiveSearch(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
