#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct InterpTrack : public _Script_CoreUObject::Object {
    private: char pad_28[0x48]; public:
    void* get_SubTracks();
    void* get_TrackInstClass();
    void* get_ActiveCondition();
    void* get_TrackTitle();
    bool get_bOnePerGroup();
    void set_bOnePerGroup(bool value);
    bool get_bDirGroupOnly();
    void set_bDirGroupOnly(bool value);
    bool get_bDisableTrack();
    void set_bDisableTrack(bool value);
    bool get_bIsSelected();
    void set_bIsSelected(bool value);
    bool get_bIsAnimControlTrack();
    void set_bIsAnimControlTrack(bool value);
    bool get_bSubTrackOnly();
    void set_bSubTrackOnly(bool value);
    bool get_bVisible();
    void set_bVisible(bool value);
    bool get_bIsRecording();
    void set_bIsRecording(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
