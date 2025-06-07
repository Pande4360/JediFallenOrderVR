#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AnimSequence;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CameraPreviewInfo {
    private: char pad_0[0x30]; public:
    void* get_PawnClass();
    _Script_Engine::AnimSequence*& get_AnimSeq();
    void* get_Location();
    void* get_Rotation();
    _Script_Engine::Pawn*& get_PawnInst();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
