#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsHitImpulse.hpp"
int32_t& _Script_RsGameTechRT::RsHitImpulse::get_HitImpulseType() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsHitImpulse::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsHitImpulse");
    return result;
}
float& _Script_RsGameTechRT::RsHitImpulse::get_Duration() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_RsGameTechRT::RsHitImpulse::get_Distance() {
    return *(float*)((uintptr_t)this + 0x8);
}
