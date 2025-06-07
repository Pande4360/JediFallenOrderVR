#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_DatasmithContent {
struct DatasmithScene;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_DatasmithContent {
#pragma pack(push, 1)
struct DatasmithSceneActor : public _Script_Engine::Actor {
    private: char pad_360[0x58]; public:
    _Script_DatasmithContent::DatasmithScene*& get_Scene();
    void* get_RelatedActors();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3b8
#pragma pack(pop)
}
