#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwAIFightResourceWeights.hpp"
float& _Script_SwGame::SwAIFightResourceWeights::get_ZTargeted() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_SwGame::SwAIFightResourceWeights::get_Distance() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_SwGame::SwAIFightResourceWeights::get_CharacterType() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_SwGame::SwAIFightResourceWeights::get_LockoutInactive() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_SwGame::SwAIFightResourceWeights::get_CanAttack() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_SwGame::SwAIFightResourceWeights::get_QueueTime() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_SwGame::SwAIFightResourceWeights::get_OnScreen() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_SwGame::SwAIFightResourceWeights::get_LastDamagedBy() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_SwGame::SwAIFightResourceWeights::get_Ambusher() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_SwGame::SwAIFightResourceWeights::get_PostSync() {
    return *(float*)((uintptr_t)this + 0x24);
}
float& _Script_SwGame::SwAIFightResourceWeights::get_Wildcard() {
    return *(float*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_SwGame::SwAIFightResourceWeights::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwAIFightResourceWeights");
    return result;
}
