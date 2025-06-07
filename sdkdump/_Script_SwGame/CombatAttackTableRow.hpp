#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TableRowBase.hpp"
namespace _Script_RsGameTechRT {
struct RsSyncDefinition;
}
namespace _Script_SwGame {
struct SwAttackState;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct CombatAttackTableRow : public _Script_Engine::TableRowBase {
    private: char pad_8[0xb0]; public:
    void* get_AnimData();
    _Script_RsGameTechRT::RsSyncDefinition*& get_SyncDefinition();
    bool get_bSwapMasterSlave();
    void set_bSwapMasterSlave(bool value);
    void* get_AttackState();
    _Script_SwGame::SwAttackState*& get_AttackStatePtr();
    void* get_NextAttack();
    void* get_BlockedAttack();
    void* get_BlockBreakAttack();
    void* get_AltAttack();
    void* get_ParryResponse();
    void* get_Countered();
    void* get_ForceMeterRowName();
    void* get_ForcePush();
    float& get_ParriedBlockDeplete();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
