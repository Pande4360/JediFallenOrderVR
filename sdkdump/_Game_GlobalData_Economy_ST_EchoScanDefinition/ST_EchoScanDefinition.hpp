#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_GlobalData_Economy_ST_EchoScanDefinition {
#pragma pack(push, 1)
struct ST_EchoScanDefinition {
    private: char pad_0[0x28]; public:
    void* get_SceneName_13_6F4F278B4234F5F9F50D0B935D936FD6();
    void* get_RewardTier_5_39F9C56043240B0EA4D1818D367BB9F4();
    void* get_INFOForceHealthUpgrade_26_F95A54DA45343660D060EE8AD6435768();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
