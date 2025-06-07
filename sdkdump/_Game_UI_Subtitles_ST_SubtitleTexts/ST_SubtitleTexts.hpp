#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Subtitles_ST_SubtitleTexts {
#pragma pack(push, 1)
struct ST_SubtitleTexts {
    private: char pad_0[0x38]; public:
    int32_t& get_UID_7_78660E364F64826C56CDC9984F4D2B74();
    void* get_Speaker_2_BDB00BB44EBF573CA18C52901BE2C39E();
    void* get_Content_4_58CE9AE846C59C567E2657BDC9FD91E2();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
