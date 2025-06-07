#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneSequencePlaybackSettings.hpp"
#include "..\_Script_MovieScene\MovieSceneSequencePlayer.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_LevelSequence {
struct LevelSequence;
}
namespace _Script_LevelSequence {
struct LevelSequenceActor;
}
namespace _Script_LevelSequence {
#pragma pack(push, 1)
struct LevelSequencePlayer : public _Script_MovieScene::MovieSceneSequencePlayer {
    private: char pad_7d8[0xd0]; public:
    void* get_OnCameraCut();
    void* get_AdditionalEventReceivers();
    static _Script_CoreUObject::Class* static_class();
    _Script_LevelSequence::LevelSequencePlayer* CreateLevelSequencePlayer(_Script_CoreUObject::Object* WorldContextObject, _Script_LevelSequence::LevelSequence* LevelSequence, _Script_MovieScene::MovieSceneSequencePlaybackSettings Settings, _Script_LevelSequence::LevelSequenceActor*& OutActor);
}; // Size: 0x8a8
#pragma pack(pop)
}
