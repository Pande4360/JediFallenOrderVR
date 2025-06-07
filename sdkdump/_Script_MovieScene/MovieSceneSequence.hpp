#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneSignedObject.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneSequence : public MovieSceneSignedObject {
    private: char pad_50[0x2f8]; public:
    void* get_PrecompiledEvaluationTemplate();
    void* get_DefaultCompletionMode();
    bool get_bParentContextsAreSignificant();
    void set_bParentContextsAreSignificant(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetIsCinematicSequence(bool bInIsCinematicSequence);
    void SetFootstepsAllowed(bool bInAllowFootsteps);
    bool IsCinematicSequence();
    bool AreFootstepsAllowed();
}; // Size: 0x348
#pragma pack(pop)
}
