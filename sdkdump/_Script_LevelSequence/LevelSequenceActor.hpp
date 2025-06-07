#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_MovieScene\MovieSceneObjectBindingID.hpp"
namespace _Script_LevelSequence {
struct LevelSequencePlayer;
}
namespace _Script_LevelSequence {
struct LevelSequenceBurnInOptions;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_LevelSequence {
struct LevelSequenceBurnIn;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LevelSequence {
struct LevelSequence;
}
namespace _Script_MovieScene {
struct MovieSceneBindingOverrides;
}
namespace _Script_LevelSequence {
#pragma pack(push, 1)
struct LevelSequenceActor : public _Script_Engine::Actor {
    private: char pad_360[0xb0]; public:
    bool get_bAutoPlay();
    void set_bAutoPlay(bool value);
    void* get_PlaybackSettings();
    _Script_LevelSequence::LevelSequencePlayer*& get_SequencePlayer();
    void* get_LevelSequence();
    void* get_AdditionalEventReceivers();
    _Script_LevelSequence::LevelSequenceBurnInOptions*& get_BurnInOptions();
    _Script_MovieScene::MovieSceneBindingOverrides*& get_BindingOverrides();
    bool get_bLoadSequenceWithLevel();
    void set_bLoadSequenceWithLevel(bool value);
    bool get_bOverrideInstanceData();
    void set_bOverrideInstanceData(bool value);
    _Script_CoreUObject::Object*& get_DefaultInstanceData();
    _Script_LevelSequence::LevelSequenceBurnIn*& get_BurnInInstance();
    double& get_SaveGameCurrentTime();
    static _Script_CoreUObject::Class* static_class();
    void SetSequence(_Script_LevelSequence::LevelSequence* InSequence);
    void SetEventReceivers(void* AdditionalReceivers);
    void SetBinding(_Script_MovieScene::MovieSceneObjectBindingID Binding, void*& Actors, bool bAllowBindingsFromAsset);
    void ResetBindings();
    void ResetBinding(_Script_MovieScene::MovieSceneObjectBindingID Binding);
    void RemoveBinding(_Script_MovieScene::MovieSceneObjectBindingID Binding, _Script_Engine::Actor* Actor);
    _Script_LevelSequence::LevelSequence* GetSequence(bool bLoad, bool bInitializePlayer);
    void AddBinding(_Script_MovieScene::MovieSceneObjectBindingID Binding, _Script_Engine::Actor* Actor, bool bAllowBindingsFromAsset);
}; // Size: 0x410
#pragma pack(pop)
}
