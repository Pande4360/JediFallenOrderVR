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
namespace _Script_UMG {
#pragma pack(push, 1)
struct WidgetAnimation : public _Script_MovieScene::MovieSceneSequence {
    private: char pad_348[0x50]; public:
    void* get_OnAnimationStarted();
    void* get_OnAnimationFinished();
    _Script_MovieScene::MovieScene*& get_MovieScene();
    void* get_AnimationBindings();
    bool get_bLegacyFinishOnStop();
    void set_bLegacyFinishOnStop(bool value);
    void* get_DisplayLabel();
    static _Script_CoreUObject::Class* static_class();
    float GetStartTime();
    float GetEndTime();
}; // Size: 0x398
#pragma pack(pop)
}
