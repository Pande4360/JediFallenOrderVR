#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Hero_Logic_Definitions_ReminderTutorial_Data {
#pragma pack(push, 1)
struct ReminderTutorial_Data {
    private: char pad_0[0x18]; public:
    void* get_tutorialType_7_000751FF4BC6E1A900D3ABB5DAE5ACAB();
    void* get_UnlockFlag_26_FD178CDB45C7054810E5DBA51DA6C3A7();
    float& get_elapsedSeconds_2_1B35463644B1924A3334C9BE04ED9BE8();
    float& get_timeStamp_4_944C59CD45BD541CE9EB8484DB98AC50();
    void* get_TutorialMessage_29_7F21AC6440C335E753EC64BCAD0AEF71();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
