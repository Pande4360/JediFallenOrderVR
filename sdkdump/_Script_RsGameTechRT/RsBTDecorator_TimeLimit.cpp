#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTDecorator.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTDecorator_TimeLimit.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTDecorator_TimeLimit::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTDecorator_TimeLimit");
    return result;
}
float& _Script_RsGameTechRT::RsBTDecorator_TimeLimit::get_TimeLimit() {
    return *(float*)((uintptr_t)this + 0x68);
}
float& _Script_RsGameTechRT::RsBTDecorator_TimeLimit::get_RandomDeviation() {
    return *(float*)((uintptr_t)this + 0x6c);
}
