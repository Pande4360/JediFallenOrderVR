#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_WorldMap_Enum_ST_MissionObjective {
#pragma pack(push, 1)
struct ST_MissionObjective {
    private: char pad_0[0x58]; public:
    void* get_ObjectiveName_30_29D4A4564EEDEAD74D27668EBBADEF6D();
    void* get_ObjectiveDescription_31_62FCED1445B26A7711E123BD2C8B985A();
    void* get_ObjectiveType_29_70F8EE3E4CBB706BA56544970F77E3CB();
    void* get_MapSectionVolumeTag_22_AA6C613444EA959CE47691AE65629DF9();
    void* get_Location_26_4B4D760E46DA24634EDDBEA88DFA6F6E();
    bool get_Autoplay__39_5AF6254D406070ED003B2C859EA674C1();
    void set_Autoplay__39_5AF6254D406070ED003B2C859EA674C1(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
