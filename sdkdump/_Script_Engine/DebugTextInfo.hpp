#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct Font;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct DebugTextInfo {
    private: char pad_0[0x60]; public:
    _Script_Engine::Actor*& get_SrcActor();
    void* get_SrcActorOffset();
    void* get_SrcActorDesiredOffset();
    void* get_DebugText();
    float& get_TimeRemaining();
    float& get_Duration();
    void* get_TextColor();
    bool get_bAbsoluteLocation();
    void set_bAbsoluteLocation(bool value);
    bool get_bKeepAttachedToActor();
    void set_bKeepAttachedToActor(bool value);
    bool get_bDrawShadow();
    void set_bDrawShadow(bool value);
    void* get_OrigActorLocation();
    _Script_Engine::Font*& get_Font();
    float& get_FontScale();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
