#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsDirectionAnimationParameters.hpp"
void* _Script_RsGameTechRT::RsDirectionAnimationParameters::get_AttackerDirection() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsDirectionAnimationParameters::get_AttackSwingDirection() {
    return (void*)((uintptr_t)this + 0x1);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsDirectionAnimationParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsDirectionAnimationParameters");
    return result;
}
