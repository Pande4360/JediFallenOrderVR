#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SwAIController.hpp"
namespace _Script_AIModule {
struct BehaviorTree;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAIBuddyDroidController : public SwAIController {
    private: char pad_848[0x58]; public:
    void* get_DefaultOverchargeBehaviorTreeAsset();
    _Script_AIModule::BehaviorTree*& get_DefaultOverchargeBehaviorTree();
    void* get_OverchargeBehaviorTreeList();
    void* get_OnBuddyStartWaitingForActionKey();
    void* get_OnBuddyEndWaitingForActionKey();
    static _Script_CoreUObject::Class* static_class();
    void SignalDroidForAction();
    void ResetActionKeySignal();
    bool IsWaitingForActionKeySignal();
    void ExecuteOverchargeBehavior(_Script_RsGameTechRT::RsCharacter* OverchargeTarget);
}; // Size: 0x8a0
#pragma pack(pop)
}
