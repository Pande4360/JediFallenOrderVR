#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_GlobalData_Structs_Struct_CameraPOIVar {
#pragma pack(push, 1)
struct Struct_CameraPOIVar {
    private: char pad_0[0x40]; public:
    _Script_Engine::Actor*& get_FocusActor_17_01E1E1894F3A5831038C8ABE22F23907();
    void* get_POIType_18_8C93503D45B5730D9C056CB75717B60E();
    float& get_BlendInTime_11_DCE4D81C430A5363EBC025B69445B9E4();
    float& get_BlendOutTime_12_C960FCF041FFBF54C0132C80C54BF64C();
    float& get_FocusDuration_21_24A90C88462E50DB39134CA866ED8AB3();
    float& get_LockDuration_22_6DF3522144A571145E82F891907AC7B3();
    bool get_ShouldResetCameraOnEnd_24_BE4820DE49258ED5AC2E3FA01FF2278F();
    void set_ShouldResetCameraOnEnd_24_BE4820DE49258ED5AC2E3FA01FF2278F(bool value);
    void* get_DynamicLocationOffset_30_5545F8D7447E59AF33F38DB6F456FD79();
    void* get_DynamicRotationOffset_31_AF6ECAB140F2F528B7C1A5ACCE57C0DA();
    float& get_FocusBreakResistance_35_DB229DB8451BAB2F69817D96BB8CEDD4();
    bool get_SetAutoDepthOfFieldTarget_37_A37D3C11494771AFBDA7BDBE4D800926();
    void set_SetAutoDepthOfFieldTarget_37_A37D3C11494771AFBDA7BDBE4D800926(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
