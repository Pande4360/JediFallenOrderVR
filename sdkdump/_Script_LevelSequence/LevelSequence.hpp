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
namespace _Script_LevelSequence {
#pragma pack(push, 1)
struct LevelSequence : public _Script_MovieScene::MovieSceneSequence {
    private: char pad_348[0x158]; public:
    _Script_MovieScene::MovieScene*& get_MovieScene();
    void* get_DirectorClass();
    void* get_ObjectReferences();
    void* get_BindingReferences();
    void* get_PossessedObjects();
    void* get_bIsCinematicSequence();
    void* get_bAllowFootsteps();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4a0
#pragma pack(pop)
}
