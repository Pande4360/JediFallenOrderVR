#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsGameMode.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct PostProcessVolume;
}
namespace _Script_Engine {
struct DecalActor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_GlobalData_SwGameMode {
#pragma pack(push, 1)
struct SwGameMode_C : public _Script_RsGameTechRT::RsGameMode {
    private: char pad_550[0x70]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    void* get_Checkpoint();
    float& get_playerHalfHeight();
    void* get_Mus_World_State_Scripted();
    void* get_OnDifficultyLevelChanged();
    _Script_Engine::PostProcessVolume*& get_VoidSavePPV();
    _Script_Engine::DecalActor*& get_VoidSkillBranches();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveEndPlay(void* EndPlayReason);
    void SetDifficultyLevel(void* Difficulty);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_SwGameMode(int32_t EntryPoint);
    void OnDifficultyLevelChanged__DelegateSignature();
}; // Size: 0x5c0
#pragma pack(pop)
}
