#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwAIController.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters__Shared_BehaviorTree_AI_CON_EnemyBase {
#pragma pack(push, 1)
struct AI_CON_EnemyBase_C : public _Script_SwGame::SwAIController {
    private: char pad_848[0x8]; public:
    void* get_UberGraphFrame();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveInitializeAI();
    void ExecuteUbergraph_AI_CON_EnemyBase(int32_t EntryPoint);
}; // Size: 0x850
#pragma pack(pop)
}
