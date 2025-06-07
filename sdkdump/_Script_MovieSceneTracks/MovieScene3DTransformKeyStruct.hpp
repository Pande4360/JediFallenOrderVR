#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneKeyStruct.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieScene3DTransformKeyStruct : public _Script_MovieScene::MovieSceneKeyStruct {
    private: char pad_8[0x60]; public:
    void* get_Location();
    void* get_Rotation();
    void* get_Scale();
    void* get_TeleportationType();
    void* get_Time();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
