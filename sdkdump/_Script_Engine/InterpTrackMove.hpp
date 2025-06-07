#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "InterpTrack.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct InterpTrackMove : public InterpTrack {
    private: char pad_70[0x58]; public:
    void* get_PosTrack();
    void* get_EulerTrack();
    void* get_LookupTrack();
    void* get_LookAtGroupName();
    float& get_LinCurveTension();
    float& get_AngCurveTension();
    bool get_bUseQuatInterpolation();
    void set_bUseQuatInterpolation(bool value);
    bool get_bShowArrowAtKeys();
    void set_bShowArrowAtKeys(bool value);
    bool get_bDisableMovement();
    void set_bDisableMovement(bool value);
    bool get_bShowTranslationOnCurveEd();
    void set_bShowTranslationOnCurveEd(bool value);
    bool get_bShowRotationOnCurveEd();
    void set_bShowRotationOnCurveEd(bool value);
    bool get_bHide3DTrack();
    void set_bHide3DTrack(bool value);
    void* get_RotMode();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}
