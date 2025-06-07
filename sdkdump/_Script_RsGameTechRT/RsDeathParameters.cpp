#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsDeathParameters.hpp"
#include "RsDirectionAnimationParameters.hpp"
void* _Script_RsGameTechRT::RsDeathParameters::get_DeathType() {
    return (void*)((uintptr_t)this + 0x2);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsDeathParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsDeathParameters");
    return result;
}
