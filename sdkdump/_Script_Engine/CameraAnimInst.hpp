#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct CameraAnim;
}
namespace _Script_Engine {
struct InterpGroupInst;
}
namespace _Script_Engine {
struct InterpTrackMove;
}
namespace _Script_Engine {
struct InterpTrackInstMove;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CameraAnimInst : public _Script_CoreUObject::Object {
    private: char pad_28[0xe8]; public:
    _Script_Engine::CameraAnim*& get_CamAnim();
    _Script_Engine::InterpGroupInst*& get_InterpGroupInst();
    float& get_Playrate();
    _Script_Engine::InterpTrackMove*& get_MoveTrack();
    _Script_Engine::InterpTrackInstMove*& get_MoveInst();
    void* get_PlaySpace();
    static _Script_CoreUObject::Class* static_class();
    void Stop(bool bImmediate);
    void SetScale(float NewDuration);
    void SetDuration(float NewDuration);
}; // Size: 0x110
#pragma pack(pop)
}
