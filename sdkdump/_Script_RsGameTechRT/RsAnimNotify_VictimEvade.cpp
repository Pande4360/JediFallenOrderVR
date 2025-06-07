#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\RsConditionalTargetAnimNotify.hpp"
#include "RsAnimNotify_VictimEvade.hpp"
void* _Script_RsGameTechRT::RsAnimNotify_VictimEvade::get_AttackDirection() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_RsGameTechRT::RsAnimNotify_VictimEvade::get_DefenseType() {
    return (void*)((uintptr_t)this + 0xc9);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAnimNotify_VictimEvade::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAnimNotify_VictimEvade");
    return result;
}
void* _Script_RsGameTechRT::RsAnimNotify_VictimEvade::get_Offset() {
    return (void*)((uintptr_t)this + 0xcc);
}
void* _Script_RsGameTechRT::RsAnimNotify_VictimEvade::get_OffsetEnd() {
    return (void*)((uintptr_t)this + 0xd8);
}
float& _Script_RsGameTechRT::RsAnimNotify_VictimEvade::get_Radius() {
    return *(float*)((uintptr_t)this + 0xe4);
}
