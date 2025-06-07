#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTDecorator.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTDecorator_CheckNumberOfTeammates.hpp"
int32_t& _Script_RsGameTechRT::RsBTDecorator_CheckNumberOfTeammates::get_NumberOfTeammates() {
    return *(int32_t*)((uintptr_t)this + 0x68);
}
void* _Script_RsGameTechRT::RsBTDecorator_CheckNumberOfTeammates::get_Comparison() {
    return (void*)((uintptr_t)this + 0x6c);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTDecorator_CheckNumberOfTeammates::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTDecorator_CheckNumberOfTeammates");
    return result;
}
bool _Script_RsGameTechRT::RsBTDecorator_CheckNumberOfTeammates::get_bUseInequalityComparison() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsBTDecorator_CheckNumberOfTeammates::set_bUseInequalityComparison(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
