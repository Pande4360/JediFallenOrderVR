#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAIDebugInput {
    private: char pad_0[0xc0]; public:
    void* get_EnableAIHotkey();
    void* get_KillAllAIHotkey();
    void* get_DestroyAllAIHotkey();
    void* get_DebugMoveActorSprintHotkey();
    void* get_DebugMoveActorRunHotkey();
    void* get_DebugMoveActorWalkFastHotkey();
    void* get_DebugMoveActorWalkSlowHotkey();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
