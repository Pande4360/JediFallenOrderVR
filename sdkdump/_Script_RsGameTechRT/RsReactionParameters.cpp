#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsDirectionAnimationParameters.hpp"
#include "RsReactionParameters.hpp"
void* _Script_RsGameTechRT::RsReactionParameters::get_ReactionType() {
    return (void*)((uintptr_t)this + 0x2);
}
bool _Script_RsGameTechRT::RsReactionParameters::get_ChangeCombatState() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsReactionParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsReactionParameters");
    return result;
}
void _Script_RsGameTechRT::RsReactionParameters::set_ChangeCombatState(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
