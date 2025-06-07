#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsAIResource.hpp"
#include "SwAIResource_SpecialAttack.hpp"
int32_t& _Script_SwGame::SwAIResource_SpecialAttack::get_RequiredAttackPoints() {
    return *(int32_t*)((uintptr_t)this + 0x108);
}
float& _Script_SwGame::SwAIResource_SpecialAttack::get_Cooldown() {
    return *(float*)((uintptr_t)this + 0x10c);
}
_Script_CoreUObject::Class* _Script_SwGame::SwAIResource_SpecialAttack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAIResource_SpecialAttack");
    return result;
}
