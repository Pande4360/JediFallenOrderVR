#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsAISpawnerInstance.hpp"
namespace _Script_RsGameTechRT {
struct RsAICharacterDefinition;
}
namespace _Script_RsGameTechRT {
struct RsAISensorDefinition_Vision;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAISimpleSpawnerInstance : public RsAISpawnerInstance {
    private: char pad_c0[0xe0]; public:
    _Script_RsGameTechRT::RsAICharacterDefinition*& get_AICharacterDefinition();
    void* get_AICharacterDefinitionAssetPtr();
    void* get_ScriptingOptions();
    void* get_CinematicOptions();
    void* get_IntroSettings();
    void* get_POISettings();
    void* get_DialogueSettings();
    void* get_PatrolSettings();
    void* get_WanderSettings();
    bool get_bSpawnOnStartPlay();
    void set_bSpawnOnStartPlay(bool value);
    bool get_bCanNeverAwake();
    void set_bCanNeverAwake(bool value);
    _Script_RsGameTechRT::RsAISensorDefinition_Vision*& get_OverrideVisionDefinition();
    void* get_OverrideVisionDefinitionAssetPtr();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1a0
#pragma pack(pop)
}
