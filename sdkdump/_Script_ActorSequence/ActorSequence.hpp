#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneSequence.hpp"
namespace _Script_MovieScene {
struct MovieScene;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ActorSequence {
#pragma pack(push, 1)
struct ActorSequence : public _Script_MovieScene::MovieSceneSequence {
    private: char pad_348[0x28]; public:
    _Script_MovieScene::MovieScene*& get_MovieScene();
    void* get_ObjectReferences();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x370
#pragma pack(pop)
}
