#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "RsFootEffectInfo.hpp"
void* _Script_RsGameTechRT::RsFootEffectInfo::get_Walk() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_RsGameTechRT::RsFootEffectInfo::get_Jog() {
    return (void*)((uintptr_t)this + 0xd8);
}
void* _Script_RsGameTechRT::RsFootEffectInfo::get_run() {
    return (void*)((uintptr_t)this + 0x1a8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsFootEffectInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsFootEffectInfo");
    return result;
}
