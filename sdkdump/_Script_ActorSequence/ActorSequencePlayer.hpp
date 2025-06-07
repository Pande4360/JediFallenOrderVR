#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneSequencePlayer.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ActorSequence {
#pragma pack(push, 1)
struct ActorSequencePlayer : public _Script_MovieScene::MovieSceneSequencePlayer {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x7d8
#pragma pack(pop)
}
