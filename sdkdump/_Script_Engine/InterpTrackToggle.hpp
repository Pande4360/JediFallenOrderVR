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
struct InterpTrackToggle : public InterpTrack {
    private: char pad_70[0x18]; public:
    void* get_ToggleTrack();
    bool get_bActivateSystemEachUpdate();
    void set_bActivateSystemEachUpdate(bool value);
    bool get_bActivateWithJustAttachedFlag();
    void set_bActivateWithJustAttachedFlag(bool value);
    bool get_bFireEventsWhenForwards();
    void set_bFireEventsWhenForwards(bool value);
    bool get_bFireEventsWhenBackwards();
    void set_bFireEventsWhenBackwards(bool value);
    bool get_bFireEventsWhenJumpingForwards();
    void set_bFireEventsWhenJumpingForwards(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
