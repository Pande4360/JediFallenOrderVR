#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\BTTaskNode.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_RsGameTechRT {
struct RsAIController;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwBTTask_SpawnIntro : public _Script_AIModule::BTTaskNode {
    private: char pad_70[0x50]; public:
    void* get_ThisSpawnIntroSettings();
    void* get_ThisSpawnPOISettings();
    static _Script_CoreUObject::Class* static_class();
    void OnTopologyChanged(void* previousMode, void* newMode, float Proximity);
    void OnMontageBlendingOut(_Script_Engine::AnimMontage* Montage, bool bInterrupted);
    void OnAwarenessStateChanged(_Script_RsGameTechRT::RsAIController* AIController, void* PreviousAwarenessState, void* NewAwarenessState);
}; // Size: 0xc0
#pragma pack(pop)
}
