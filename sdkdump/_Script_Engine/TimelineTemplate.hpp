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
struct TimelineTemplate : public _Script_CoreUObject::Object {
    private: char pad_28[0x70]; public:
    float& get_TimelineLength();
    void* get_LengthMode();
    bool get_bAutoPlay();
    void set_bAutoPlay(bool value);
    bool get_bLoop();
    void set_bLoop(bool value);
    bool get_bReplicated();
    void set_bReplicated(bool value);
    bool get_bValidatedAsWired();
    void set_bValidatedAsWired(bool value);
    bool get_bIgnoreTimeDilation();
    void set_bIgnoreTimeDilation(bool value);
    void* get_EventTracks();
    void* get_FloatTracks();
    void* get_VectorTracks();
    void* get_LinearColorTracks();
    void* get_MetaDataArray();
    void* get_TimelineGuid();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
