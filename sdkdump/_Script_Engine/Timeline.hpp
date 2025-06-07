#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Property;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct Timeline {
    private: char pad_0[0x98]; public:
    void* get_LengthMode();
    bool get_bLooping();
    void set_bLooping(bool value);
    bool get_bReversePlayback();
    void set_bReversePlayback(bool value);
    bool get_bPlaying();
    void set_bPlaying(bool value);
    float& get_Length();
    float& get_Playrate();
    float& get_Position();
    void* get_Events();
    void* get_InterpVectors();
    void* get_InterpFloats();
    void* get_InterpLinearColors();
    void* get_TimelinePostUpdateFunc();
    void* get_TimelineFinishedFunc();
    void* get_PropertySetObject();
    void* get_DirectionPropertyName();
    _Script_CoreUObject::Property*& get_DirectionProperty();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
